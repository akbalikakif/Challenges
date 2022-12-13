// your name surname and age from user
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  printf("Hello What is your name,surname and age ?");
  char name[15];
  char surname[20];
  int age;
  scanf("%s",name );
  scanf("%s",surname);
  scanf("%d",&age);

printf("Your name is : %s ,your surname is : %s and your age : %d",name,surname,age);




}
