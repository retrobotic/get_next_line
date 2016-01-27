# get_next_line

#### **/!\ Warning /!\**
This is a first year Epitech project, it is therefore subjected to the "C Norm" wich is a programming style convention created by the school.
Some restriction of this norm are for example "max 25 lines per function and 5 functions per file", "only one instruction per line", "no global variables"
"no system function (recode them to use them)", etc...
The full epitech norm : https://youtrack.jetbrains.com/_persistent/norme-en.pdf?file=74-190945&v=0&c=true
So if some part of the code seems weird in their syntax, it's probably due to this norm.

The goal of this project was to write a function that return the next line read from a file descriptor. A macro called READ_SIZE define the number 
of characters to read at each call of read(), the macro value could be changed to any positive value and the program should still work.
The function return the line without the "\n" and return NULL if there is nothing more to read on the file descriptor or if an error occured.

The function must be prototyped as follow:
````
char *get_next_line(const int fd);
````

|Allowed functions: |
|-------------------|
| read              |
| malloc             |
| free             |

## Grade : 19.5/20
