#ifndef "main.h"
/**
 * _strcat - Concatène deux chaînes de caractères.
 * @dest: Chaîne de destination (contient le résultat).
 * @src: Chaîne source (sera ajoutée à la fin de dest).
 *
 * Retourne: Pointeur vers la chaîne résultante (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
