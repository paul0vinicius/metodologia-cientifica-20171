#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;
 
void merge (int *a, int n, int m) {
    int i, j, k;
    int *x = malloc(n * sizeof (int));
    for (i = 0, j = m, k = 0; k < n; k++) {
        x[k] = j == n      ? a[i++]
             : i == m      ? a[j++]
             : a[j] < a[i] ? a[j++]
             :               a[i++];
    }
    for (i = 0; i < n; i++) {
        a[i] = x[i];
    }
    free(x);
}
 
void merge_sort (int *a, int n) {
    if (n < 2)
        return;
    int m = n / 2;
    merge_sort(a, m);
    merge_sort(a + m, n - m);
    merge(a, n, m);
}

 int main(){
        
        int array_size;
        int c;
        int i;

        while(1){

            scanf("%d", &array_size);

            if (array_size == -1)
          break;

        int a[array_size];

        for (c = 0; c < array_size; c++)
                scanf("%d", &a[c]);

        start = clock();

        merge_sort(a, array_size);

        end = clock();

        /* printf("\n\nSorted array is:  ");
        for(i = 0; i < array_size; ++i)
                printf(" %d ", a[i]);
        printf("\n"); */
        printf("Time:%f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
        }

        
 }