#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int x,n,add,sub,div,mul,ch,i=1;
	float power;
	while(i==1)
	{
	printf("enter the two digits x and n:");
	scanf("%d\n%d",&x,&n);
	
	printf("enter the choice(1/2/3/4/5):");
	scanf("%d",&ch);
	if(x>=0 && n>=0)
	{
		if(ch==1)
		{
		  power = pow(x,n);
		  printf("pow:%f",power);
		}
		else if(ch==2)
		{
			add=x+n;
			printf("add:%d",add);
		}
		else if(ch==3)
		{
			sub=x-n;
			printf("sub:%d",sub);
		}
		else if(ch==4)
		{
			mul=x*n;
			printf("mul:%d",mul);
		}
		else if(ch==5)
		{
			div=x/n;
			printf("div:%d",div);
		}
	}
	else
	{
		printf("invalid; enter valid num...");
    }
    printf("/ndo u wanna cont:press1:");
    scanf("%d",&i);
}
}
