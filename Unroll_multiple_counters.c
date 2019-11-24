#include<stdio.h>
#include<stdlib.h>
int arr[] = {4, 5, 1, 5, 4, 9, 2, 3, 4, 8};
int main()  {
    int* x = malloc(sizeof(int) * 10);
    int new_size = 0;
    for(int i = 0; i < 10; ++i) {
        if(arr[i] < 5) {
            x[new_size++] = arr[i];
        }
    }
    for(int i = 0; i < new_size; i++) {
        printf("%d\n", x[i]);
    }
    free(x);
}
