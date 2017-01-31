#include <stdio.h>
#include <stdlib.h>

int g_pArr1[32], g_pArr2[32];

int DecToBin(int num, int *Array);
void PrintArray(int *Bin);
int CompareArray(int *Array1, int *Array2);
void main()
{
    int num1,num2;

    printf("Enter two numbers?");
    scanf("%d",&num1);
    scanf("%d",&num2);
    DecToBin(num1, g_pArr1);
    DecToBin(num2, g_pArr2);
    printf("the binary value of %d \n", num1);
    PrintArray(g_pArr1);
    printf("the binary value of %d \n", num2);
    PrintArray(g_pArr2);
    printf("the bit difference is %d", CompareArray(g_pArr1, g_pArr2));

}

int DecToBin(int num, int *Array)
{
    int count;
        if(num==0)
        {
            return 0;
        }
        else
        {
                Array[count]=num%2;
                count++;
                return(DecToBin((num/2), Array));
        }
        
    }

void PrintArray(int *bin)
{
    int count;
    for(count=0;count<=31;count++)
    {
        printf("%d", bin[count]);
    }
}

int CompareArray(int *Array1, int *Array2)
{
    int count,inc=0;
    for(count=0;count<=31;count++)
        {
            if(Array1[count]!=Array2[count])
                inc++;
        }
    return inc;
}
