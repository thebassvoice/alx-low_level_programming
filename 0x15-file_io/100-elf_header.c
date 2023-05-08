#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * print_address - print function
 * @c: pointer
 *
 * Return: nothing
 * Description: prints address
 */
void print_address(char *c)
{
	int e, start;
	char system;

	printf("  Entry point address:               0x");
	system = c[4] + '0';
	if (system == '1')
	{
		start = 26;
		printf("80");
		for (e = start; e >= 22; e--)
		{
			if (c[e] > 0)
				printf("%x", c[e]);
			else if (c[e] < 0)
				printf("%x", 256 + c[e]);
		}
		if (c[7] == 6)
			printf("00");
	}
	if (system == '2')
	{
		start = 26;
		for (e = start; e > 23; e--)
		{
			if (c[e] >= 0)
				printf("%02x", c[e]);
			else if (c[e] < 0)
				printf("%02x", 256 + c[e]);
		}
	}
	printf("\n");
}
/**
 * prints_type - function that prints type
 * @d: pointer
 *
 * Return: nothing
 */
void prints_type(char *d)
{
	char tpe = d[16];

	if (d[5] == 1)
		tpe = d[16];
	else
		tpe = d[17];
	printf("  Type:                              ");
	if (tpe == 0)
		printf("NONE (No file type)\n");
	else if (tpe == 1)
		printf("REL (Relocatable file)\n");
	else if (tpe == 2)
		printf("EXEC (Executable file)\n");
	else if (tpe == 3)
		printf("DYN (Shared object file)\n");
	else if (tpe == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", tpe);
}
/**
 * sys_version - function checks system version
 * @ptr: pointer
 *
 * Return: nothing
 */
void sys_version(char *ptr)
{
	char version = ptr[4] + '0';

	if (version == '0')
		exit(98);
	printf("ELF Header:\n");
	print_emel(ptr);
	if (version == '1')
		printf("  Class:                             ELF32\n");

	if (version == '2')
		printf("  Class:                             ELF64\n");

	print_stats(ptr);
	print_address(ptr);
	print_versions(ptr);
	prints_type(ptr);
	print_more(ptr);
}
/**
 * check_file - checks for file
 * @tr: pointer
 *
 * Return: 1 if found else 0
 */
int check_file(char *tr)
{
	int location = (int)tr[0];
	char what = tr[1];
	char file = tr[2];
	char that = tr[3];

	if (location == 127 && what == 'W' && file == 'F' && that == 'T')
		return (1);
	return (0);
}
/**
 * main - program function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int trs, letRead;
	char j[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	trs = open(argv[1], O_RDONLY);
	if (trs < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(trs, 0, SEEK_SET);
	letRead = read(trs, j, 27);
	if (letRead == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!check_file(j))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	sys_version(j);
	close(trs);
	return (0);
}
