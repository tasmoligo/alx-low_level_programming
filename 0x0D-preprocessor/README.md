<!DOCTYPE html>
<html>
<body><h1>C - Preprocessor</h1>
<p>The C prpeprocessor is a macro that is used automatically by the compiler to transform the program/code before actual compilation.<br></p>
<p>Some uses of C preprocessor are as listed below:
<ul>
<li>Macro expansion</li>
<li>Header files inclusion</li>
<li>Condiotional compilation</li>
<li>Line control</li>
</ul></p>
<p>The four stags of compilation are:</p>
<ol><li>preprocessing</li>
<li>Compilng</li>
<li>Assembling</li>
<li>Linking</li>
</ol>
<p>The code is changed from (*.c) to (*.i) by the preprocessor. In this stage, all lines beginning with hash (#), are removed and all macros are expanded. In the compilation stage, the (*.i) file is converted to an assembly code (*.s). The assembler converts the assembly code to an object code (*.o). Then the linker links the object code with the library to generate the final executable (*.out).<br><b>Note:</b> the operating system used in the description is the UNIX OS.</p>
<p>Reference:<br>
<ul><li>https://www.math.utah.edu/</li>
<li>https://www.scaler.com/</li>
</ul></p>
</body>
</html>
