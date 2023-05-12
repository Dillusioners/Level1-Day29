/**
 * Author - Debag101
 * Purpose - Array sorting using bubbleSort
 * Date - 12/05/2023
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Simple function to just print an array
void displayArray(float arr[], int size) {
    printf("[ ");
    for(int i=0; i < size; i++) {
        printf("%0.2f ",arr[i]);
        if(i == size - 1)
            printf("]");
        else 
            printf(",");
    }
}
//Simple function to implement bubbleSorting algorithm 
void bubbleSort(float unsorted_array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (unsorted_array[j] > unsorted_array[j + 1])
            {
                //If previous element > next element,swap positions
                int temp = unsorted_array[j];
                unsorted_array[j] = unsorted_array[j + 1];
                unsorted_array[j+1] = temp;
            }
        }
    }
}

//Seperate function to get and sort the array
void get_and_sort_Array(int size)
{
    /*This part gets the array */
    float numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the element at index %d => ",i);
        scanf("%f", &numbers[i]);
    }
    /*This part prints and sorts the array by invoking displayArray() and bubbleSort()*/
    printf("\nUnsorted array => ");
    displayArray(numbers,size);

    bubbleSort(numbers, size);
    printf("\nSorted array => ");
    displayArray(numbers,size);
    
}



int main(int argc, char const *argv[])
{
    int size;
    printf("\nHow many elements are there in your array Alice  => ");
    //Getting size of the array
    scanf("%d", &size);
    //Finishing the job
    get_and_sort_Array(size);
    
    //Exit code functionality
    printf("\nEnter any key to exit ....... ");
    getch();
    system("cls");
    return 0;
}
