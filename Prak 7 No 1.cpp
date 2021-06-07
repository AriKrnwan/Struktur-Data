// Ari Kurniawan (20051397057)
// MI 2020A
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];

void Tukar (int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

void SelectionSort()
{
int i, j, k;
for(i=0; i<MAX-1;i++){
k = i;
for (j=i+1; j<MAX; j++)
if(Data[k] > Data[j])
k = j;
Tukar(&Data[i], &Data[k]);
}
}
int main()
{
int i;
srand(0);
printf("DATA SEBELUM TERURUT");
for(i=0; i<MAX; i++)
{
Data[i] = (int) rand()/1000+1;
printf("\nData ke %d : %d ", i, Data[i]);
}
SelectionSort();

printf("\nDATA SETELAH TERURUT");
for(i=0; i<MAX; i++)
{
printf("\nData ke %d : %d ", i, Data[i]);
}
}
