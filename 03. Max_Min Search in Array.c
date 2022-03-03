// Search the maximum and minimum number from a linear array
#include <stdio.h>

// Search the largest element from the array
void max_val(int data[], int n)
{
    int i, max=data[1];

    for(i=2; i<=n; ++i)
        if(max<data[i])
            max = data[i];

    printf("\nLargest element of the array is %d", max);
}

// Search the smallest element from the array
void min_val(int data[], int n)
{
    int i, min=data[1];

    for(i=2; i<=n; ++i)
        if(min>data[i])
            min = data[i];

    printf("\nSmallest element of the array is %d", min);
}

int main()
{
    int i, n, data[30];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements: ");
    for(i=1; i<=n; ++i)
        scanf("%d", &data[i]);

    max_val(data, n);
    min_val(data, n);
    printf("\n");

    return 0;
}
