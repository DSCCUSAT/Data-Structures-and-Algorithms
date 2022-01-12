#include<stdio.h>
void main()
{
    int n,arr[50],temp,i,j;
    printf("\n\n\t\t\t\t Bubble Sort\n--------------------------------------------------------------------------------\n");
    printf("\n\n Enter the limit : ");
    scanf("%d", &n);
    printf("\n Enter the elements to the array \n\n");
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n-1;i++) // it count the number of times the loop runs
        for (j=0;j<n-i-1;j++) // it is used to access each element in array
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    printf("\n\t\t\t\t Sorted Array\n--------------------------------------------------------------------------------\n");
    for (i=0;i<n;i++){
        printf("%d\t\t", arr[i]);
    }
}
