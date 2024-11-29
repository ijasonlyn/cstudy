//macro.c

#include <stdio.h>
#define show(var) printf(#var" = %d\n",var)

void main() {

   int number = 134;
   show(number);
}

