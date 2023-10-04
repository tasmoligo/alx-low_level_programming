<h1>Automatic and dynamic allocation (malloc)</h1>
<p>C is a structured language and therefore has some fixed programming rules. One of them is changing the size of an array. An array is a        sequence of characters stored in a contiguous memory block.</p>
<p>To declare an array, we have to know its size. But what about a situation when the size of the array can only be determined at runtime or     compilation. That is where malloc comes in.</p>
<p>Malloc() is a function found in the C standard library &ltstdlib.h&gt.<br>
<p>The malloc() function reserves a block of memory of the specified number of bytes from the heap and returns a void pointer which can be casted into pointers of any form.</p>
<p>A code where malloc is used is as illustrated below:</p>
<p>
#include &ltstdio.h&gt<br>
#include &ltstdlib.h&gt<br>
// main - explaining malloc()<br>
int main(void)<br>
{<br> &ensp
    char *str; // pointer to hold address of memory block

    str = (char *) malloc(sizeof(char) * 98); // Allocates 98 bytes of memory
    if (str == NULL)
    {
        printf("memory allocate failed\n");
        return (1);
    }
    printf("memory successfully allocated\n");
    free(str);
    return (0);
}
</p>
<p>On error, malloc returns NULL as illustrated in the code above<br>
<p>When using malloc, it is good practice to free the allocated memory by calling the free() function as shown in the program above. It serves   the purpose of de-allocating the memory and returning it to the operating system.</p>
<p><b>References:</b></p>
<li>
<ul>https://www.geeksforgeeks.org</ul>
<ul>https://www.programiz.com</ul>
<ul>https://intranet.alxswe.com/</ul>
</li>
