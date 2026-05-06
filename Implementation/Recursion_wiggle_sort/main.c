#include <stdio.h>
#include <stdlib.h>
void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}


void wiggleSort(int arr[], int n , int i){
    if(i >= n-1)
        return;
    if(i %2 == 0 && arr[i]>arr[i+1] )
            swap(&arr[i],&arr[i+1]);

    if (i %2 != 0 && arr[i]<arr[i+1] )
            swap(&arr[i],&arr[i+1]);

    wiggleSort(arr, n, i+1);
}


int main()
{
    int n = 6;
    int a[n];

    printf("Enter the numbers to wiggle sort them\n");
    for(int i = 0 ; i <n; i++){
        scanf("%d", &a[i]);
    }
    wiggleSort(a,n,0);
        printf("Array after wiggle sort is: \n");
        for(int i = 0; i < n; i++){
            printf("%d ",a[i]);
        }

    return 0;
}
