/*
 county library management system
 by marshmellow
 feb 2022
 MIT License
 C89 compiler
*/
#include <stdio.h>
#include <stdlib.h>

int menu() {
   int action;
   printf("select an action below\n");
   printf("1. Add new patron\n");
   printf("2. View patrons\n");
   printf("3. View Books\n");
   printf("4. Add New Book\n");
   printf("Your Action: ");
   scanf("%d",&action);
   return action;

}
int main()

{
    printf("COUNTY LIBRARY SYSTEM \n");
    printf("Welcome marshmellow \n");
    printf("you selected action %d",menu());
    return 0;
}
