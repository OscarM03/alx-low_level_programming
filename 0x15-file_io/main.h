#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <elf.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(char *message, char *filename, int exit_code);
void copy_content(int source_fd, int target_fd);

#endif