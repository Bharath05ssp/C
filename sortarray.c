#include<stdio.h>
void sortingArray(int array[] ,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;


            }
        }
    }
}
void printingArray(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        printf("%d",array[i]);
    }
}
int main()
{
    int array[]={7,8,9,6,5,4,3,2,1,0};
    int size = sizeof(array)/sizeof(array[0]);


    sortingArray(array,size);
    printingArray(array,size);
return 0;
}