#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - keygen for crackme5
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *username;
	char key[7];
	int len, i, tmp;
	char *table = "A-CHRDw87lNS0E9B2TibgpnMVyu7j3fxzKXUPt5LDJrsQaZHIkWqomYF4Cev09+";

	if (argc != 2)
		return (1);

	username = argv[1];
	len = strlen(username);

	key[0] = table[len ^ 59];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += username[i];
	key[1] = table[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= username[i];
	key[2] = table[(tmp ^ 85) & 63];

	tmp = username[0];
	for (i = 0; i < len; i++)
		if (username[i] > tmp)
			tmp = username[i];
	srand(tmp ^ 14);
	key[3] = table[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += username[i] * username[i];
	key[4] = table[(tmp ^ 239) & 63];

	srand(username[0] ^ 229);
	key[5] = table[rand() & 63];

	key[6] = '\0';
	printf("%s", key);

	return (0);
}
