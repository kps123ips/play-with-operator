#include<stdio.h>
int main()
{ 
    char op;
    int a,b,res;
    printf("Enter an operator");
    scanf("%c",&op);
    printf("Enter values of a and b");
    scanf("%d%d",&a,&b);
    if(op=='+')
    {
	
    res=a+b;
    printf("Result is %d",res);
    }
    else if(op=='-')
    {
	res=a-b;
    printf("Result is %d",res);
	}
    else if(op=='*')
	{
    res=a*b;
    printf("Result is %d",res);
    }
    else if(op=='/')
    {
    res=a/b;
    printf("Result is %d",res);
	}
	
    else if(op=='%')
    {
    res=a%b;
    printf("Result is %d",res);
    }
    else
    printf("Wrong Operartor");
}
