#include<stdio.h>
void Addition ()
{
    int ivalue1=0;
    int ivalue2=0;
    int iAns=0;
    printf("please enter first number:");
    scanf("%d",&ivalue1);
    printf("please enter second number:");
    scanf("%d",&ivalue2);
    iAns=ivalue1+ivalue2;
    printf("Addition of %d &% d is: %d\n",ivalue1,ivalue2,iAns);

}
int main()
{
    Addition ();
    return 0;
}
