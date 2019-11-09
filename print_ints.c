/*
** EPITECH PROJECT, 2019
** print_ints
** File description:
** File that regroups functions to display integers
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my_printf.h"

void print_uns_nbr(va_list ap)
{
    unsigned int nb;
    nb = va_arg(ap, unsigned int);
    my_put_nbr_uns(nb);
}

void print_nbr(va_list ap)
{
    int nb;
    nb = va_arg(ap, int);
    my_put_nbr(nb);
}