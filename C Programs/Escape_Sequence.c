#include <stdio.h>
#include<conio.h>
 int main(void)
{
printf("Testing the escape sequences:\n");
printf("-----------------------------\n");

/* 3 times audible tone */
printf("The audible bell ---> \\a \a\a\a\n");
printf("The backspace ---> \\b___ \bTesting\n");

/* printer must be attached...*/
printf("The formfeed, printer ---> \\f \fTest\n");
printf("The newline ---> \\n \n\n");
printf("The carriage return ---> \\r \rTesting\r\n");
printf("The horizontal tab ---> \\t \tTesting\t\n");
printf("The vertical tab ---> \\v Testing\v\n");
printf("The backslash ---> \\ \\Testing\\\n");
printf("The single quote ---> \' \'Testing\'\'\'\n");
printf("The double quote ---> \" \"Testing\"\"\n");
printf("Some might not work isn't it?\n");

return 0;
}
