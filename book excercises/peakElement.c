#include <stdio.h>

peakElement(int [], int);

main()
{
    int arr[] = {17, 19, 9, 5, 3, 6, 17, 7, 18, 16, 18, 11, 3, 15, 2};
    // int arr[] = {17,1};
    int n = 15;
    printf("%d", peakElement(arr, n));
}

int peakElement(int arr[], int n)
{   
    int size = n;
    if (size == 1)
        return 0;
    int index, lower, upper;
    for (index = 0; index < n; index++)
    {
        lower = index - 1;
        upper = index + 1;
        if ((index == 0) && (arr[index] > arr[upper]))
            return index;
        if ((index == size - 1) && (arr[index] > arr[lower]))
            return index;
        if ((arr[lower] < arr[index]) && (arr[index] > arr[upper]))
            return index;
    }
    // return 0;
}