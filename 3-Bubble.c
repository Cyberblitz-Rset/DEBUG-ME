#include<stdio.h>
void main()
{
    int temp,to_be_sorted[]={3,6,2,4,5},i,flag=1;
    while(flag)
    {
        flag=0;
        for(i=0;i<5;i++)
        {
            if(to_be_sorted[i]<to_be_sorted[i+1])
            {
                flag=1;
                temp=to_be_sorted[i];
                to_be_sorted[i]=to_be_sorted[i+1];
                to_be_sorted[i+1]=temp;
            }
        }

    }
    for(i=0;i<5;i++)
        printf("%d",to_be_sorted[i]);
}
