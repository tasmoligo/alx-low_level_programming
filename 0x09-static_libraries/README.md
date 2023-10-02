<h1><b>Static libraries</b></h1>
<h2>What Is A "C" Library?</h2>
<p>Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime. We already know that object files are also used only during the linking phase, and are not required during runtime - only the program's executable file is needed in order to run the program.</p>
<h2>Creating A Static "C" Library Using "ar" and "ranlib"</h2>
<p>To create a static library, we must have at least one function with its prototype included in a header file. For illusration, let us name our c file, header file and static library test.c, main.h and mylib.a respectively</p>
<p>The command to create a static library is:</p>
<p>	gcc -c test.c -o test.o</p>
<p>If we have several c files, we can do it as so</p>
<p>	gcc -c *.c</p>
<p>	ar rcs mylib.a test.o</p>
<p><b>OR</b></p>
<p>	ar mylib.a *.o</p>
<p>To index the library in order to speed up referencing, use:</p>
<p>	ranlib mylib.a</p>
<p>To see the content of our library:</p>
<p>	ar -t mylib.a</p>
<p>To list the symbols in our library:</p>
<p>	nm mylib.a</p>
<p>And that is all it takes to create a static library in C</p>
<p><b>References:</b></p>
<li>
<ol>https://docencia.ac.upc.edu</ol>
<ol>https://makori-mildred.medium.com</ol>
</li>
