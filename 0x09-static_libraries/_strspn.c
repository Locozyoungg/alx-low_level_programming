/* _strspn.c */

unsigned int _strspn(char *s, char *accept) {
unsigned int count = 0;
int found = 1;

while (*s != '\0' && found) {
found = 0;
for (char *a = accept; *a != '\0'; a++) {
if (*s == *a) {
found = 1;
break;
}
}
if (found) {
count++;
s++;
}
}

return (count);
}
