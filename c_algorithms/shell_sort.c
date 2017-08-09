 #include <ctype.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <time.h>

clock_t start, end;
double cpu_time_used;
 
void shell_sort (int *a, int n) {
    int h, i, j, t;
    for (h = n; h /= 2;) {
        for (i = h; i < n; i++) {
            t = a[i];
            for (j = i; j >= h && t < a[j - h]; j -= h) {
                a[j] = a[j - h];
            }
            a[j] = t;
        }
    }
}
 
int main () {
    int i;
    int c;
    int array_size;

    while (1){
        scanf("%d", &array_size);

        if (array_size == -1)
          break;

        int a[array_size];
        int n = sizeof a / sizeof a[0];

        for (c = 0; c < array_size; c++)
          scanf("%d", &a[c]);

        start = clock();

        shell_sort(a, n);

        end = clock();

        /*for (i = 0; i < n; i++)
            printf("%d%s", a[i], i == n - 1 ? "\n" : " "); */
        printf("Time:%f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
    }
    return 0;
}