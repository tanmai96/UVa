#include<stdio.h>
#include<math.h>
int summation(int data);
int main()
{
    int num,case_num,terminal,flag=1;
    scanf("%d",&case_num);
    for(int i=1; i<=case_num; i++)
    {
        scanf("%d",&num);
        terminal=num;
        for(int j=0;;j++)
        {
            terminal=summation(num);
            while(terminal>9)
            {
                terminal=summation(terminal);

            }
            if(terminal<=9)
            {
                if(terminal==1)
                {
                    flag=0;
                    break;

                }
                else
                {
                    flag=1;
                    break;
                }
            }


        }
        if(flag==0)
        {
            printf("Case #%d: %d is a Happy number.\n",i,num);
        }
        else
        {
            printf("Case #%d: %d is an Unhappy number.\n",i,num);
        }


    }

}

int summation(int data)
{
    int sum=0,res,rem,temp;
    temp=data;
    for(int i=0;;i++)
    {
        res=temp/10;
        rem=temp%10;
        sum=sum+rem*rem;
        if(res<=9)
        {
            sum=sum+res*res;
            return sum;
        }
        else
        {
            temp=res;
        }


    }


}
