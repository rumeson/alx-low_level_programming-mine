#include <stdio.h>
void Double(int *A, int size)
{
int i, sum = 0;
for (i=0; i<size; i++)
A[i] = 2*A[i];
}

int main(void)
{
int A[] = {1,2,3,4,5};
int size = sizeof(A) / sizeof(A[0]);
int i;
for(i = 0; i<size;i++)
printf("A array in main : %d\n", A[i]);

printf("A in main : %p\n", A);

Double(A, size);

for(i = 0; i<size;i++)
printf("A array after double funct call : %d\n", A[i]);
return (0);
}
