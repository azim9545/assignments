#include<stdio.h>
int Arithematicoperations();
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iresult=0;

    printf("please enter first operand:");
    scanf("%d",&ivalue1);

    printf("please enter second operand:");
    scanf("%d",ivalue2);

    Arithematicoperations(ivalue1,ivalue2);

    return 0;
}
int Arithematicoperations(int fivalue1,int fivalue2)

{
    int firesult=0;
    char coperator='\0';
    char cChoice='\0';

    printf("\nwhich operations you want to do(+,-,*,/):\t");
    scanf("%s",&coperator);
    printf("\n");

    switch(coperator)
    {
    case '+' :
        firesult=fivalue1+fivalue2;
        printf("addition of these two numbers is :%d""\n",firesult);
        break;

        case '-':
        firesult=fivalue1-fivalue2;
        printf("substraction of these two numbers is :%d""\n",firesult);
        break;

        case '*' :
        firesult=fivalue1*fivalue2;
        printf("multiplication of these two numbers is :%d""\n",firesult);
        break;

        case '/' :
        firesult=fivalue1/fivalue2;
        printf("division of these two numbers is :%d""\n",firesult);
        break;


        default :
            printf("please enter valid operator...");

    }
    printf("\ndo you want to perform another operation(Y/N):\n");
    scanf("%s",&cChoice);

    if(cChoice == 'Y' || cChoice == 'y')
    {
        main();
    }
    else
    {
        return 1;
    }
}
