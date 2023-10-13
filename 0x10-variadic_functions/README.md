<!DOCTYPE html>
<html>
<head></head>
<body>
<h1>Variadic Functions</h1>
<p>stdarg.h is a C standard library that allows functions take an indefinite/variable number of arguments by iterating through a list of unknown types and numbers. Hence the name <b>variadic function</b>.<br>The functions are declared like any ordinary function but with an ellipsis included as the last argument which indicates that it accepts variable number of arguments.<br>An example of a variadic function prototype is shown below:<br>&emsp;&emsp;int add(int a, ...);<br>The function above adds the arguments it is given. The arguments are of variable length of integer type. The ellipsis written indicates that the number of arguments the function receives can vary.</p>
<p>Its types include:<br>
<ul>
<li><dl>
<dt>va_list</dt>
<dd>- type for iterating arguments</dd>
</dl></li>
</ul></p>
<p>Its macros include:<br>
<ul>
<dl>
<li><dt>va_start</dt>
<dd>starts iterating arguments with a va_list</dd></li>
<li><dt>va_arg</dt>
<dd>retrieves an argument</dd></li>
<li><dt>va_end</dt>
<dd>frees a va_list</dd></li>
<li><dt>va_copy</dt>
<dd>copies contents of one va_list to another</dd>
</dl></li>
</ul></p>
</body>
</html>
