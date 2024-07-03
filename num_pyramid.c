//By Swaraj 

#include <stdio.h>


 main() {
    //printf(“\033[0;31m”);
    printf ("\nPyramid Pattern\n\n");
    //printf(“\033[0m”);
    int i,j,n=1;
    for(i=1;i<=3;i++){
    for(j=i;j<=3;j++){
        printf ("  ");
        }
    for(j=1;j<=2*i-1;j++){
    printf ("%d ",n);
    n++;
    }
    printf ("\n");
    
     }
     
    return 0;
}