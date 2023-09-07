# ! / bin / bash

# Define the name of the C source file
c_file = "output.c"

# Create the C source file
cat << EOL > "$c_file"
#include <stdio.h>

int main(void) \
{puts("Programming is like building a multilingual puzzle"); return (0) ; }
EOL

# Compile the C source file
gcc "$c_file" -o output_program

# Clean up the temporary C source file
rm "$c_file"

# Run the compiled program
./output_program

# Clean up the compiled program
rm output_program

