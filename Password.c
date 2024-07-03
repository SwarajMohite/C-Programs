#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <conio.h>

 main() {
    int i,choice;
    char p[10];
    printf ("Welcome to password generator\n\n");
    getch ();
    printf ("NOTE : Password should contain 10 characters\n\nNo space allowed. also don't press ENTER key until Password generated\n\n");
    printf ("Genrate password :");
    for(i=0;i<10;i++){
    p[i]=getch();
    printf ("*");
    }
    p[i]='\0';
    printf("\n\nPassword generated");
    getch();
    printf ("\n\nPress 1 if you want to see your password\n\n");
    scanf ("%d",&choice);
    if(choice==1){
    printf ("\nYour password :");
    for(i=0;p[i]!='\0';i++)
        printf ("%c",p[i]);
     }
    else 
      exit(1);
    return 0;
}