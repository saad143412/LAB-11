#include<stdio.h>
int fact(int num);      //Declare fact
int num;               //Declare num
void main()
{
	printf("Programmer Name : Muhammad Mustafa\nRegistration No : 19MDELD045\n\n");	
	printf("plz ENter the number : ");
	scanf("%d",&num);
	printf("The facturial of %d is : %d",num,fact(num));
	
}
int fact(int num)         //Difine fact
{
	if(num<=1)
	return num;
	else
	return num*fact(num-1);
}

