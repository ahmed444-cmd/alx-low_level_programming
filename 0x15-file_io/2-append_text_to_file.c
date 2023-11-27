#include "main.h"

/**
 * append_text_to_file - adding the text to the end of a file
 * @filename: name of file.
 * @text_content: added text.
 *
 * Return: if the file exists:1 & if the fails does not exist | fails:-1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fdd;
	int nlett;
	int rwrr;

	if (!filename)
		return (-1);

	fdd = open(filename, O_WRONLY | O_APPEND);

	if (fdd == -1)
		return (-1);

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;

		rwrr = write(fdd, text_content, nlett);

		if (rwrr == -1)
			return (-1);
	}

	close(fdd);

	return (1);
}
