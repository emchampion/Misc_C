//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*,int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
    printf("Before: \n");
    printValues();
    sort();
    printf("After: \n");
    printValues();
    
    return(0);
} // end main

void printValues(){
    int i;
    printf("[");
    for(i=0; i < MAX; i++)
        printf("%i",values[i]);
        printf("]\n");
} // print value loop

void sort(){
    int i,j;
    for (i=0; i < MAX -1; i++)
        for (j=0; j < MAX -1; j++)
            if (values[j] > values[j + 1])
                swap (&values[j], &values[j+1]);

} // sorting loop

void swap(int*a, int*b){
    int c;
        c = *a;
        *a = *b;
        *b = c;
    printValues();
} //swap pointer