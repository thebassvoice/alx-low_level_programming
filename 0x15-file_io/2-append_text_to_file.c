#include "main.h"
/**
 * append_text_to_file - append file function main
 * @filename: ptr
 * @text_content: ptr
 *
 * Return: 1 if available -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int trs, num, readWrite;

	if (!filename)
		return (-1);
	trs = open(filename, O_WRONLY | O_APPEND);
	if (trs == -1)
		return (-1);
	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;
		readWrite = write(trs, text_content, num);
		if (readWrite == -1)
			return (-1);
	}
	close(trs);
	return (1);
}
