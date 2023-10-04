<h1>Automatic and dynamic allocation (malloc)</h1>
<p>C is a structured language and therefore has some fixed programming rules. One of them is changing the size of an array. An array is a        sequence of characters stored in a contiguous memory block.</p>
<p>To declare an array, we have to know its size. But what about a situation when the size of the array can only be determined at runtime or     compilation. That is where malloc comes in.</p>
<p>Malloc() is a function found in the C standard library <stdlib.h>.</p>
<p>The malloc() function reserves a block of memory of the specified number of bytes from the heap and returns a void pointer which can be casted into pointers of any form.</p>
<p>A code where malloc is used is as illustrated below:</p>
<p>
#include <stdio.h>
#include <stdlib.h>

// duplicates a string
char *_strdup(char *str)
{
        int index, length = 0;
        char *str_copy; // The pointer will hold the address of the block

        for (index = 0; str[index] != '\0'; index++)
        {
                length++;
        }
        str_copy = malloc(sizeof(char) * length);
        if (str == NULL) // checks if the entered string is NULL
        {
                return (NULL);
        }
        for (index = 0; str[index] != '\0'; index++)
        {
                str_copy[index] = str[index];
        }
        return (str_copy);
}

// main - check the code for Hello World!
int main(void)
{
    char *s;

    s = _strdup("Hello World!");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
</p>
<p>On error, malloc returns NULL as illustrated in the code above</p>
<p>When using malloc, it is good practice to free the allocated memory by calling the free() function as shown in the program above. It serves   the purpose of de-allocating the memory and returning it to the operating system.</p>
<p><b>Refrences:</b></p>
<li>
<ul>https://www.geeksforgeeks.org</ul>
<ul>https://www.programiz.com</ul>
<ul>https://intranet.alxswe.com/</ul>
</li>
