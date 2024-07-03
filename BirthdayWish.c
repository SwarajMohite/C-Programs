//Made by SWARAJ

#include <stdio.h>
#include <conio.h>
int main() {
     printf ("Happy Birthday Dear\n\n ");
     printf("Press Enter-Enter for Special Wish!!\n\n\n");
     getch();
    for(int c = 0; c < 4; c++) {
        printf("Happy Birthday %s\n", c == 2 ? "Dear ....." : "To You");
        getch();
    }
    for(int c = 0; c < 2; c++) {
        printf("May GOD bless you\n");
        getch();
        if(c==1) {
        printf("Happy Birthday to you!!\n");
        break; }
        
    }
    return 0;
}