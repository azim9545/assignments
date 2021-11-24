#include<stdio.h>

int Addition(int inum1,int inum2)

{
    int ians=0;
    ians=inum1+inum2;
    return ians;

}


int main()

{
    int ivalue1=0;
    int ivalue2=0;
    int iresult=0;

    printf("please enter first number:");
    scanf("%d",&ivalue1);

    printf("please enter second number:");
    scanf("%d",&ivalue2);

    iresult=Addition(ivalue1,ivalue2);
    printf("Addition of %d and %d is:%d\n",ivalue1,ivalue2,iresult);

    return 0;


}
