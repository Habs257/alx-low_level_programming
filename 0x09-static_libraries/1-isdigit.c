#include "main.h"

/**
 * _isdigit - vérifie si un caractère est un chiffre (0 à 9)
 * @c: le caractère à vérifier
 *
 * Retourne : 1 si c est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}
