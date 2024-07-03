//By Swaraj 

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, n, a[20], temp;
    
    
    clrscr();
    
    
    printf("How many elements in the array? ");
    scanf("%d", &n);
    
    // Read the elements into the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // bubble sort to sort the array in ascending order
    for (i = 0; i < n ; i++) {
        for (j = 0; j < n ; j++) {
            // Swap elements 
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    // Print the sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    
    
    getch();
    
    return 0;
}