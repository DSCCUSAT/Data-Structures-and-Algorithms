#include<stdio.h>
 
void reverseArray(int arr[], int start, int end) // funtion to reverse the array
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
}    

int main()
{
    int n,i,arr[100];
    printf("\n\n\t\t Reversing the array\n\n");
    printf("Enter the limit of the array : "); 
    scanf("%d",&n);
    printf("\nEnter the elements of the array :\n\n");
    for (int i = 0; i < n; i++) // accepting the elements
        scanf("%d",&arr[i]);
    reverseArray(arr, 0, n-1); // calling the function for reversing the array.
    printf("Reversed array is \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
