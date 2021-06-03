#include<stdio.h>
#include<string.h>
#include<conio.h>
float amount(float rate,int quantity);
void main()
{

	int i,quantity,w=0,phone[12],billid;
	float newt_amount,rate,amount1,t_amount=0;
	char itemcode[5],date[20],cname[20];
	clrscr();
	printf("\t\t\tGROCERY SHOP\n");
	printf("\t\t\tlaggere\n");
	printf("\t\t\tbanglore\n");
	printf("-------------------------------------------------------\n");
	printf("customer name:");
	scanf("%s",cname);
	printf("phone number:");
	scanf("%d",&phone);
	printf("billid=%d",billid);
	printf("\t\t\t BILLING\n");
	printf("-------------------------------------------------------\n");
	printf("CODE\tITEM NAME\t\tQUANTITY\n");
	printf("\t\tamount(rs)\n");
	printf("---------------------------------------------------------------\n");
	printf("enter the code of the item to shop and press total to generate bill \n");
	printf("---------------------------------------------------------------------\n");
	for(i=1;i!=0;i++)
	{
		scanf("%s",itemcode);
		if(strcmp(itemcode,"1")==0)
		{
			printf("\t RAGI\t\t\t\t");
			scanf("%d",&quantity);
			rate=30.34;
			amount1=amount(rate,quantity);
			printf("\t\t%f\n",amount1);
			t_amount+=amount1;
			w+=quantity;
		}
		else if(strcmp(itemcode,"2")==0)
		{	printf("\t DHAL\t\t\t\t");
			scanf("%d",&quantity);
			rate=45.56;
			amount1=amount(rate,quantity);
			printf("\t\t%f\n",amount1);
			t_amount+=amount1;
			w+=quantity;
		}
		else if(strcmp(itemcode,"3")==0)
		{
			printf("\t SOAP\t\t\t\t");
			scanf("%d",&quantity);
			rate=20.56;
			amount1=amount(rate,quantity);
			printf("\t\t%f\n",amount1);
			t_amount+=amount1;
			w+=quantity;
		}

		else if(strcmp(itemcode,"total")==0)
		{
			printf("----------------------------------------------------------\n");
			printf("TOTAL AMOUNT:\t%f\n",t_amount);
			printf("---------------------------------------------------------------------------\n");
			i=-1;
		}
		else
		{
		printf("PRODUCT NOT FOUNFD\n");
		}
}
	getch();
	}
	float amount(float a,int b)
	{
		float e;
		e=(a*b);
		return e;
	}

