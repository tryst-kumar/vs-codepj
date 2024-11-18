#include<stdio.h>
int main()
{
    char array[3] = {'X','M','L'};
    for(int i = 1;i<=3;i++)
    {
        for(int j = 0;j<2;j++)
        {
            if(array[j]>array[j+1])
            {
                char temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }

    }

printf("The reverse of XML is ");
    for(int i = 0;i<3;i++)
    printf("%c",array[i]);

    return 0;
}