#include <stdio.h>

typedef char byte;

#define SWAP(a, b) \
    int temp = a; \
    a = b; \
    b = temp;

#define ARRAY_SIZE(arr) sizeof(arr) / sizeof(arr[0])

int *bubble_sort(int *array, size_t size, byte asc)
{
    if (asc)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    SWAP(array[j], array[j + 1]);
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (array[j] < array[j + 1])
                {
                    SWAP(array[j], array[j + 1]);
                } 
            }
        }
    }

    return array;
}

void print_result(int *array, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Value at index [%d]: %d\n", i, array[i]);
    }
}

int main(void)
{
    int array[] = {10, 100, 65, 33, 50, 212, 47, 13, 10, 49, 504, 312, 160, 240};
    size_t size = ARRAY_SIZE(array);
    
    print_result(bubble_sort(array, size, 1), size);

    return 0;
}