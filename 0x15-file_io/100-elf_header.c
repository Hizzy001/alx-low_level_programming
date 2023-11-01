#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

/**
 * display_elf_header - Display information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *header);

/**
 * error_exit - Display an error message to stderr and exit with a status code.
 * @message: The error message to display.
 * @status: The status code to exit with.
 */
void error_exit(const char *message, int status);

/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
error_exit("Usage: elf_header elf_filename", 98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
error_exit("Error: Cannot read file", 98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header) ||
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file", 98);
display_elf_header(&header);
close(fd);

return 0;
}
void display_elf_header(Elf64_Ehdr *header)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x%s", header->e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

printf("  Class:   %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ?
		"ELF64" : "ELF32");
printf("  Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little-endian" : "2's complement, big-endian");
printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:    %d\n", header->e_type);
printf("  Entry point address: 0x%lx\n", header->e_entry);
}

void error_exit(const char *message, int status)
{
dprintf(2, "%s\n", message);
exit(status);
}
