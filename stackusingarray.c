#include<stdio.h>
#include<conio.h>

void ins(void);
void del(void);
void disp(void);
int a[30], s, top=-1;
int main()
{
	int ch;
	printf("Enter the size of the stack: ");
	scanf("%d",&s);
	
while(1)
	{
		printf("\n1.Insertion\n2.Deletion\n3.Traverse\n4.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: ins();
					break;
			case 2: del();
					break;
			case 3: disp();
					break;
			case 4: return 0;
			default: printf("Wrong choice");		
		}
	}
	return 0;
}
void ins()
{
		if(top==s-1)
			printf("Stack overflow");
		else{
		
		printf("Enter the element to insert: ");
		scanf("%d",&a[++top]);
	}
}
void del()
{
	if(top<0)
		printf("Stack underflow");

	else{
		
		printf("The deleted element is %d",a[top]);
		top--;
	}
}
void disp()
{
	int i;
	if(top<0)
		printf("Stack underflow");
	for(i=top;i>=0;i--)
		printf("%d\n",a[i]);
}

