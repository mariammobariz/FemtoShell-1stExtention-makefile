#include <stdio.h>
#include <string.h>
int string_compare(char*str1,char*str2)
{
    int flag = 1;
    for(int i=0;(str1[i]||str2[i])&&flag==1;i++)
        {
            if(str1[i]!=str2[i])
                {
                    flag = 0;
                }
        }
        return flag;
}
int main() 
{
char command[100];
int flag = 1;
int number1 , number2;
while(flag == 1)
{
	printf("Please Enter Your Command > ");
	gets(command);
	if (string_compare(&command,"exit"))
		{
			printf("Good Bye \n");
			flag = 0;
		}
	else if (string_compare(&command,"rand"))
		{
			Rand();
		}
	else if (string_compare(&command,"fact"))
		{
			printf("Enter a number : ");
			 scanf("%d",&number1);
			 getchar();
			 printf("%d \n" ,fact(number1));
		}
	else if (string_compare(&command,"fib"))
		{
			printf("Enter a number : ");
			 scanf("%d",&number2);
			 getchar();
			 fib(number2);
		}
	else
		{
			printf("You Said : %s \n", command);
		}
}
return 0;	
}
