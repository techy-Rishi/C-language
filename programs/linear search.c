#include<stdio.h>

void main() {
    int i, item, a[10] = {2, 3, 4, 5, 6, 7, 8, 9, 34, 54}, n = 10;

    printf("Enter the item to search: ");
    scanf("%d", &item);

    for(i = 0; i < n; i++) {
        if(item == a[i]) {
            printf("The item is located at index %d\n", i);
            break;
        }
    }
    
    if(i == n) {
        printf("Item not found in the array.\n");
    }
}
