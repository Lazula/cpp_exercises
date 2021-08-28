```
$ make
g++    -c -o main.o main.cpp
main.cpp: In function ‘int main()’:
main.cpp:22:4: error: cannot bind non-const lvalue reference of type ‘char&’ to an rvalue of type ‘char’
   22 |  g(49);
      |    ^~
main.cpp:6:14: note:   initializing argument 1 of ‘void g(char&)’
    6 | void g(char &c) {
      |        ~~~~~~^
main.cpp:23:4: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘3300’ to ‘'\37777777744'’ [-Woverflow]
   23 |  h(3300);
      |    ^~~~
main.cpp:26:4: error: cannot bind non-const lvalue reference of type ‘char&’ to an rvalue of type ‘char’
   26 |  g(uc);
      |    ^~
main.cpp:6:14: note:   initializing argument 1 of ‘void g(char&)’
    6 | void g(char &c) {
      |        ~~~~~~^
make: *** [<builtin>: main.o] Error 1
```
