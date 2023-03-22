#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *arr, int n)
{
    int num, counter;
    for(int i = 0; i < n-1; i++)
    {
        counter = 0;
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                num = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = num;
                counter++;
            }
        }

        printf("Pass %d: %d\n", i+1, counter);
    }
}

void main()
{
    /*
    Pass 1 - 8
    Pass 2 - 4
    Pass 3 - 3
    Pass 4 - 2
    Pass 5 - 1
    Pass 6 - 1
    Pass 7 - 0
    Pass 8 - 0
    */
    int arr[] = {97,16,45,63,13,22,7,58,72};
    int size = 9;

    bubble_sort(arr, 9);

}