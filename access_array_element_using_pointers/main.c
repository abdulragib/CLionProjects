#include <stdio.h>
int main() {
    int data[10];

    printf("Enter elements: ");
    for (int i = 0; i <10; ++i)
        scanf("%d", data + i);

    printf("You entered: ");
    for (int i = 0; i < 10; ++i)
        printf("%d", *(data + i));
    return 0;
}

//access array element using pointer