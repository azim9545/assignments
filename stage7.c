#include<stdio.h>

int Arithematicoperations();

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iresult=0;

    printf("please enter first operand :""\n");
    scanf("%d",&ivalue1);

    printf("please enter second operand :""\n");
    scanf("%d",&ivalue2);

    Arithematicoperations(ivalue1,ivalue2);
    return 0;

}
int Arithematicoperations(int fivalue1,int fivalue2)
{
    int firesult=0;
    char coperator='\0';

    printf("which operation you want to do:(+,-,*,/)""\n");
    scanf("%s",&coperator);

    if (coperator == '+')
    {
        firesult=fivalue1 + fivalue2;
        printf("addition of these two numbers is:%d""\n",firesult);
    }

    else if(coperator == '-')
    {
        firesult=fivalue1 - fivalue2;
        printf("substractions of these two numbers is:%d""\n",firesult);
    }
    else if(coperator == '*')
    {
        firesult=fivalue1 * fivalue2;
        printf("multiplication of these two numbers is:%d""\n",firesult);
    }
    else if(coperator == '/')
    {
        firesult=fivalue1 / fivalue2;
        printf("division of these two numbers is:%d""\n",firesult);
    }
    else
    {
        printf("please enter valid operator..(+,-,*,/)""\n");
    }



}
