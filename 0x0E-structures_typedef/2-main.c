#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;
    struct dog my_dog1;
    struct dog my_dog2;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    my_dog1.name = "gell";
    my_dog1.age = 0.0;
    my_dog1.owner = "mss";
    print_dog(&my_dog1);
    my_dog2.name = "";
    my_dog2.age = 23.5;
    my_dog.owner = "";
    print_dog(&my_dog2);
    return (0);
}
