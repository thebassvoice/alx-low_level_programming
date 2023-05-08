#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_more(char *e);
void print_versions(char *f);
void print_stats(char *g);
void print_emel(char *j);

/**
 * print_emel - emel function
 * @j: pointer
 *
 * Return: nothing
 */
void print_emel(char *j)
{
        int yep;

        printf("  Emel:  ");
        for (yep = 0; yep < 16; yep++)
                printf(" %02x", j[yep]);
        printf("\n");
}
/**
 * print_stats - data function
 * @g: pointer
 *
 * Return: nothing
 */
void print_stats(char *g)
{
        char stats = g[5];

        printf("  Stats:                              2's complement");
        if (stats == 1)
                printf(", little \n");
        if (stats == 2)
                printf(", big \n");
}
/**
 * print_versions - function prints versions
 * @f: pointer
 *
 * Return: nothing
 */
void print_versions(char *f)
{
        int versions = f[6];

        printf("  Versions:                           %d", versions);
        if (versions == EV_CURRENT)
                printf(" (current)");
        printf("\n");
}
/**
 * print_more - print function
 * @e: pointer
 *
 * Return: nothing
 */
void print_more(char *e)
{
        char more = e[7];

        printf("  More:                            ");
        if (more == 0)
                printf("UNIX - System V\n");
        else if (more == 2)
                printf("UNIX - NetBSD\n");
        else if (more == 6)
                printf("UNIX - Solaris\n");
        else
                printf("<unknown: %x>\n", more);
        printf("  More Version:                       %d\n", e[8]);
}
#endif
