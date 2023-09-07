#!/bin/bash
echo '#include <stdio.h>' > program.c && echo 'int main(void) { puts("Programming is like building a multilingual puzzle\n"); return (0); }' >> program.c && betty program.c
