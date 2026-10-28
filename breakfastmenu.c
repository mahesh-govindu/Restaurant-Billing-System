#include<stdio.h>
void mainmenu(void);
void breakfastmenu(void);
void teacoffee(void);
void payment(void);



int main()
{
	int op,subop,quan,tp=0,flag=0;

	while(1)
	{
		mainmenu();
		printf("enter option:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
breakfastmenu:
				breakfastmenu();
				printf("enter sub option:\n");
				scanf("%d",&subop);
				switch(subop)
				{
					case 1:
						printf("enter quantity:");
						scanf("%d",&quan);

						tp+=quan*40;
						printf("total price=%d\n",tp);
						printf("------------------------\n");
						goto breakfastmenu;

					case 2:
						printf("enter quantity:");
						scanf("%d",&quan);
						// printf("plate idly price=40");
						tp+=quan*45;
						printf("total price=%d\n",tp);
						printf("------------------------\n");
						goto breakfastmenu;

					case 3:
						printf("enter quantity:");
						scanf("%d",&quan);
						// printf("plate idly price=40");
						tp+=quan*35;
						printf("total price=%d\n",tp);
						printf("------------------------\n");
						goto breakfastmenu;
					case 4:
						printf("enter quantity:");
						scanf("%d",&quan);
						tp+=quan*35;
						// printf("plate idly price=40");
						printf("total price=%d\n",tp);
						printf("------------------------\n");
						goto breakfastmenu;
					case 5:
						printf("enter quantity:");
						scanf("%d",&quan);
						tp+=quan*30;
						// printf("plate idly price=40");
						printf("total price=%d\n",tp);
						printf("------------------------\n");
						goto breakfastmenu;
					case 6:printf("back\n");
					       break;
					default:printf("there is no such item:");
						printf("------------------------\n");
						break;
				}
				break;

			case 2:          teacoffee:
					 teacoffee();

					 printf("enter sub option:\n");
					 scanf("%d",&subop);
					 switch(subop)
					 {
						 case 1:
							 printf("enter quantity:");
							 scanf("%d",&quan);
							 tp+=quan*20;
							 printf("total price:%d\n",tp);
							 printf("------------------------\n");
							 goto teacoffee;
						 case 2:
							 printf("enter quantity:");
							 scanf("%d",&quan);
							 tp+=quan*25;
							 printf("total price:%d\n",tp);
							 printf("------------------------\n");
							 goto teacoffee;
						 case 3:
							 printf("enter quantity:");
							 scanf("%d",&quan);
							 tp+=quan*30;
							 printf("total price:%d\n",tp);
							 printf("------------------------\n");
							 goto teacoffee;
						 case 4:printf("back:\n");
							printf("------------------------\n");
							break;
					 }
					 break;
			case 3: payment:
				payment();
				printf("enter sub option:\n");
				scanf("%d",&subop);
				switch(subop)
				{
					case 1:printf("payment by cash:\n");
					       printf("final bill:%d\n",tp);
					       printf("Visit again thanks\n");
					       printf("------------------------\n");
					       flag=1;

					       break;
					case 2:printf("payment by upi:\n");
					       printf("final bill:%d\n",tp);
					       printf("Visit again thanks\n");
					       printf("------------------------\n");
					       flag=1;

					       break;
					case 3:printf("payment by card:\n");
					       printf("final bill:%d\n",tp);
					       printf("Visit again thanks\n");
					       printf("------------------------\n");
					       flag=1;
					       break;
				}
				break;

			case 4:if(tp>0)
			       {
				       if(flag==1)
				       {
					       printf("exit\nbye bye\n");
					       printf("------------------------\n");
					       return 0;
				       }
				       else
				       {
					       printf("do payment and then exit\n");
					       goto payment;
				       }
			       }
			       else
				       return 0;
		}
	}
	return 0;
}
void mainmenu()
{

	printf("1)Breakfast Menu\n");
	printf("2)Tea &Coffee\n");
	printf("3)Payment\n");
	printf("4)Exit\n");

}
void breakfastmenu()
{
	printf("1.Idly : 40\n");
	printf("2.Dosa : 45\n");
	printf("3.Puri : 35\n");
	printf("4.Upma : 35\n");
	printf("5.Pongal : 30\n");
	printf("6.Back\n");

}
void teacoffee()
{
	printf("1.Tea : 20\n");
	printf("2.Coffee : 25\n");
	printf("3.Milk : 30\n");
	printf("4.Back\n");
}
void payment()
{
	printf("1.Cash\n");
	printf("2.UPI\n");
	printf("3.Card\n");
}
