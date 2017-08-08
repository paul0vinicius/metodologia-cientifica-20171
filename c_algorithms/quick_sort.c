// quickSort.c
#include <stdio.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;

void quickSort( int[], int, int);
int partition( int[], int, int);


void main() 
{
  int array_size = 0;
  int c;
  int i;

  while (1){
    scanf("%d", &array_size);

    if (array_size == -1)
      break;

    int a[array_size];

    for (c = 0; c < array_size; c++)
      scanf("%d", &a[c]);

    start = clock();

    quickSort( a, 0, array_size-1);

    end = clock();

    printf("\n\nSorted array is:  ");
    for(i = 0; i < array_size; ++i)
      printf(" %d ", a[i]);

    printf("\nTime:%f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
  }

}



void quickSort( int a[], int l, int r)
{
   int j;

   if( l < r ) 
   {
   	// divide and conquer
        j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }
	
}



int partition( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;
		
   while( 1)
   {
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}







