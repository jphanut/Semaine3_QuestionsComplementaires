#include <stdio.h>
#include <stdlib.h>

int a[3][3] = {{0,0,0},{1,1,1},{2,2,2}};

int main_1()
{
    int len = sizeof(a)/sizeof(int);
    int * ptr = &a[0][0];
    for ( int i=0; i < len; i++) {
        printf("Valeur = %d\n", * (ptr+i));
    }
    return 0;
}

int global;
int main_2(void) {
        int local;
        int *ptr1 = (int *)malloc(sizeof(*ptr1));
        int *ptr2 = (int *)malloc(sizeof(*ptr2));

        printf("global %p loc %p p1 %p p2 %p\n", &global, &local, ptr1, ptr2);

}
