#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define ERROR_CODE 98

/**
* print_elf_header_info - Display ELF header information
* @ehdr: ELF header structure
*/
void print_elf_header_info(Elf32_Ehdr ehdr) {
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) {
printf("%02x ", ehdr.e_ident[i]);
}
printf("\n");

printf("  Class:                             %s\n",
ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

printf("  Data:                              %s\n",
ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");

printf("  Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);

printf("  OS/ABI:                            ");
switch (ehdr.e_ident[EI_OSABI]) {
case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
case ELFOSABI_HPUX: printf("HP-UX\n"); break;
case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
default: printf("<unknown>\n");
}
printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (ehdr.e_type) {
case ET_NONE: printf("NONE (Unknown type)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_CORE: printf("CORE (Core file)\n"); break;
default: printf("<unknown>\n");
}

printf("  Entry point address:               0x%x\n", ehdr.e_entry);
}

int main(int argc, char *argv[]) {
int fd;
Elf32_Ehdr ehdr;

if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(ERROR_CODE);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1) {
perror("Error");
exit(ERROR_CODE);
}

if (read(fd, &ehdr, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
fprintf(stderr, "Error: Not a valid ELF file\n");
close(fd);
exit(ERROR_CODE);
}

if (lseek(fd, 0, SEEK_SET) == -1) {
perror("Error");
close(fd);
exit(ERROR_CODE);
}

print_elf_header_info(ehdr);
close(fd);

return (0);
}
