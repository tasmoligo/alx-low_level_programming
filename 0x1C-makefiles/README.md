**0x1C. C - Makefiles**    
  
**Makefile**    

Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them.  
it is a way of automating software building procedure and other complex tasks with dependencies.    

**Syntax of a makefile rule**    

*targets ... : prerequisites ...	  
	recipe  
	...  
	...    

- *targets*: are file names, separated by spaces. Typically, there is only one per rule.  
- *prerequisites*: are also file names, separated by spaces. These files need to exist before the commands for the target are run. These are also called dependencies  
- *recipe*: a series of steps typically used to make the target(s). These need to start with a tab character, not spaces.    

To run a makefile, simply type make as below:  

$ make
