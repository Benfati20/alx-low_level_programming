#ifndef MAIN_H
#define MAIN_H

#define READ_MAX 1024

/* include needed - libraries */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * variable declarations for file 3-cp.c//
 * NOTE: These variables were declared here - to help
 * comply with the betty docs for max lines in a function.//
 */

char c;
int count;
FILE *fptr;
char *read_str;
int close_to, close_from, open_val, read_val, write_val, to_open;


/* prototypes of custom - functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
