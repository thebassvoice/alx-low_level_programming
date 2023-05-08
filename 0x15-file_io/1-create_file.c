#include "main.h"
/**
 * create_file - main function for creating a file
 * @filename: ptr parameter
 * @text_content: ptr parameter
 *
 * Return: 1 succesful -1 unsuccesful
 */
int create_file(const char *filename, char *text_content)
{
	int trs, num, readWrite;

	if (!filename)
		return (-1);
	trs = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (trs == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (num = 0; text_content[num]; num++)
		;
	readWrite = write(trs, text_content, num);
	if (readWrite == -1)
		return (-1);
	close(trs);
	return (1);
}
