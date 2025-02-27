#include <stdio.h>
#include<string.h>

int main() 
{

char buffer[50];
int age = 25;

sprintf(buffer, "I am %d years old.", age);
printf("%s\n", buffer);
printf("%d\n", age);
return 0;
}