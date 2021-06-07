// Ari Kurniawan (20051397057)
// MI 2020A
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
void StraightInsertSort()
{
int i, j, x;
for(i=1; i<MAX; i++){
x = Data[i];
j = i - 1;
while (x < Data[j]){
Data[j+1] = Data[j];
j--;
}
Data[j+1] = x;
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
StraightInsertSort();
printf("\nDATA SETELAH TERURUT");
for(i=0; i<MAX; i++)
{
printf("\nData ke %d : %d ", i, Data[i]);
}
}
