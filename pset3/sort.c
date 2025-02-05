#include <stdio.h>
#include<cs50.h>


#define SIZE 8

void sort(int array[], int size);


int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108 };
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    sort(numbers, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}


// Bubble Sort
void sort(int array[], int size)
{
    bool has_swaped = 0;
    do
    {    
      has_swaped = 0;        
      for(int i = 0; i < size - 1; i++)
      {
          
          if(array[i] > array [i+1])
          {
              array[i] ^= array[i+1];
              array[i+1] ^= array[i];
              array[i] ^= array[i+1];
              has_swaped = 1;  
          }  
      }
     } while(has_swaped == 1);   
}
