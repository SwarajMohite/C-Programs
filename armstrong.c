//armstrong numbers 

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,sum,i,t,range,a;
    clrscr();
    printf("\n\n\t\tEnter range for armstrong numbers:\n\n\n");
    scanf("%d",&range);
    printf("\n\n\nThe Armstrong numbers in between 1 to %d are : \n\n\n",range);

    for(i = 1; i <= range; i++)
    {
        t = i;  // as we need to retain the original number
        sum = 0;
        while(t != 0)
        {
            a = t%10;
            sum += a*a*a;
            t = t/10;
        }

        if(sum == i)
        printf("\n\t\t\t%d", i);
    }

    printf("\n\n\n\n\t\t\tThis all are armstrong numbers between 1 and %d !\n\n\n",range);
    return 0;
}