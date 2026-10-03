#include <stdio.h>
int main()
{
    int arr[10], i, n = 8;
    int largest, smallest;
    int search, found = 0;
    int num, index;
    printf("Enter 8 array elements:\n");

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("\nLargest = %d", largest);
    printf("\nSmallest = %d", smallest);

    printf("\nEnter number to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Number found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Number not found\n");
    }

    printf("Enter number to insert: ");
    scanf("%d", &num);

    printf("Enter index for insertion (0 to %d): ", n);
    scanf("%d", &index);

    if (index >= 0 && index <= n)
    {
        for (i = n; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = num;
        n++;
        printf("Array after insertion: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid index");
    }
    printf("\nEnter index to delete (0 to %d): ", n - 1);
    scanf("%d", &index);
    if (index >= 0 && index < n)
    {
        for (i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Final Array: ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid index");
    }
}
