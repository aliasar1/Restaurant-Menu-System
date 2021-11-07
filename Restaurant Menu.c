#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int option; //global variable
int num;
char name[100], add[200];

void about(void); //functions prototype
int breakfast(void); 
int lunch(void); 
int dinner(void);
int quit(void);
void about(void);
void loader();
void gotoxy(int x,int y);


int main()
{
	system("COLOR 0B");
	loader();
	printf("\n\n\t\t\t    ----- Welcome to AAZ Restaurant -----   \n\n\n");
	printf("\t\t\tEnter your name: ");
	gets(name);
	printf("\t\t\tEnter your contact number: ");
	scanf("%d", &num);
	about();
	reuse:
    printf("\n\t    -----Welcome to AAZ Restaurant-----   \n\n");
    printf("\t        Which meal do you want? \n");
    printf("\t        Please select from the following options: \n");
    printf("\t        [1] Breakfast\n");
    printf("\t        [2] Lunch\n");
    printf("\t        [3] Dinner\n");
    printf("\t        [4] Quit\n\n");
    printf("\t        Your option is: ");
    scanf("%d", &option);
    system("cls");
    //using switch-case statements
    switch(option)
    {
    	case 1:
    	breakfast();
    	break;
    	case 2:
    	lunch();
    	break;
    	case 3:
    	dinner();
    	break;
    	case 4:
    	quit();
    	break;
    	default:	
    	printf("Invalid Input! Try again.");
    	sleep(2);
    	system("cls");
    	goto reuse;
	}
    
	return 0;	
}

void loader()
{
	printf("\n\n\t\t\t    ----- Welcome to AAZ Restaurant -----   \n\n\n");
    int i;
	gotoxy(33,10);
	printf("Please Wait Loading System...");
	gotoxy(10,12);
	for (i=0;i<78;i++)
	{
		Sleep(20);
		printf("%c",219);
	}
	gotoxy(33,14);
	printf("System Loaded Successfully");
	gotoxy(33,18);
	printf("Press Any Key To Continue");
	getch();
	system("cls");			
}

//Function for going to specific line segments

void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void about(void)
{
	printf("\n\n\t\t\t\t\t\t ABOUT US\n");
	printf("\t-----------------------------------------------------------------------------------------------------\n\n");
	printf("\tThe AAZ Restaurant is Pakistan's most recognized and distinguished hospitality brand with a history \n \tof market innovation and excellence in restaurants chain operation.\n");
	printf("\tThe AAZ Restaurants are regarded and respected as the number one restaurant entity in Pakistan by \n\tlocal and foreign observers.\n");
	printf("\tThe AAZ Restaurants are an example of gracious dinning, outstanding service, extraordinary classic \n\tand contemporary cuisine.\n");
	printf("\tThe restaurants have become the ultimate dinning destinations in Lahore. From family occasions to \n\tbusiness dinners and moments of the heart, this place is where unforgettable memories are made.\n\n");
	printf("\t------------------------------------------------------------------------------------------------------\n\n\n");
	printf("\t\t\tPress Any Key To Continue");
	getch();
	system("cls");
}

int breakfast(void) //lunch function
{
	int choice, amount=0, total=0, quantity=0; 
	char cont;
	
	printf("\n\n\t    -----Welcome to AAZ Restaurant-----   \n\n");
    printf("\t              Breakfast MENU \n");
    back:
    do
	{  
    printf("\n\t        Please select from the food you want to purchase: \n");
    printf("\t        [1] Donuts  -  Rs 120\n");
    printf("\t        [2] Fried Egg  -  Rs 40\n");
    printf("\t        [3] Toast  -  Rs 60\n");
    printf("\t        [4] Orange Juice  -  Rs 150\n\n");
    printf("\t       Your choice is: ");
	scanf("%d", &choice);
    	if(choice == 1)
    		{
    		printf("\n\t       You have purchased Donuts! \n");	
			printf("\n\t       Enter quantity: ");
			scanf("%d", &quantity);
			amount = 120 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d!\n\n\n ", amount);
			}
		else if(choice == 2)
    		{
    		printf("\n\t       You have purchased Fried Egg! \n\n");
    		printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 40 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n ", amount);
 			}
		else if(choice == 3)
    		{
    		printf("\n\t       You have purchased Toast! \n");
    		printf("\n\t       Enter quantity: ");
			scanf("%d", &quantity);
			amount = 60 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n ", amount);
			}
		else if(choice == 4)
    		{
    		printf("\n\t       You have purchased Orange Juice! \n");
    		printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 150 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n", amount);
			} 
		else 
			{
			printf("\n\t       Invalid input! \n");
			goto back;
			}	
			total=total+amount;
			printf("|=======================================================================|\n");
			printf("\t       %s's order is been placed.                        ", name);
			printf("\n\t       Total amount is Rs %d, please pay at the counter  \n", total);
			printf(" |=======================================================================|\n");
			printf("\n\t       Do you want to order more? (Y/N): ");
			scanf(" %c", &cont);
			system("cls");
			
	} while (cont == 'y' || cont == 'Y');
	system("cls");
	printf("\n\t       *Total amount including tax is Rs %d, please pay at the counter*\n\n", total+total*15/100);
	quit();
}

int lunch(void) //lunch function
{
	int choice, amount=0, total=0, quantity=0; 
	char cont;
	
	printf("\n\n\t    -----Welcome to AAZ Restaurant-----   \n\n");
    printf("\t              LUNCH MENU \n");
    back:
    do
	{  
    printf("\n\t        Please select from the food you want to purchase: \n");
    printf("\t        [1] Biryani  -  Rs 120\n");
    printf("\t        [2] Haleem  -  Rs 160\n");
    printf("\t        [3] Nihari  -  Rs 180\n");
    printf("\t        [4] Kurma  -  Rs 200\n\n");
    printf("\t       Your choice is: ");
	scanf("%d", &choice);
    	if(choice == 1)
    		{
    		printf("\n\t       You have purchased Biryani! \n");	
			printf("\n\t       Enter quantity: ");
			scanf("%d", &quantity);
			amount = 120 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d!\n\n\n ", amount);
			}
		else if(choice == 2)
    		{
    		printf("\n\t       You have purchased Haleem! \n\n");
    		printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 160 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n ", amount);
 			}
		else if(choice == 3)
    		{
    		printf("\n\t       You have purchased Nihari! \n");
    		printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 180 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n ", amount);
			}
		else if(choice == 4)
    		{
    		printf("\n\t       You have purchased Kurma! \n");
    		printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 200 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n", amount);
			} 
		else 
			{
			printf("\n\t       Invalid input! \n");
			goto back;
			}	
			
			total=total+amount;
			printf("|=======================================================================|\n");
			printf("\t       %s's order is been placed.                      ", name);
			printf("\n\t       Total amount is Rs %d, please pay at the counter   \n", total);
			printf(" |=======================================================================|\n");
			printf("\n\t       Do you want to order more? (Y/N)\n");
			scanf(" %c", &cont);
			system("cls");
			
	} while (cont == 'y' || cont == 'Y');
	system("cls");
	printf("\n\t     *Total amount including tax is Rs %d, please pay at the counter*\n\n", total+total*15/100);
	quit();
}

int dinner(void) //dinner function
{
	int choice, amount=0, total=0, quantity=0; 
	char cont;
	
	printf("\n\n\t\t    -----Welcome to AAZ Restaurant-----   \n\n");
    printf("\t\t        DINNER MENU \n");
    back:
    do
	{  
    printf("\n\t        Please select from the food you want to purchase: \n");
    printf("\t        [1] Zinger Burger  -  Rs 250\n");
    printf("\t        [2] Chicken Burger  -  Rs 210\n");
    printf("\t        [3] Chicken Mayo Roll  -  Rs 170\n");
    printf("\t        [4] Broast  -  Rs 230\n\n");
    printf("\t        Your choice is: ");
	scanf("%d", &choice);
    	if(choice == 1)
    		{
    		printf("\n\t       You have purchased Zinger Burger! \n");	
			printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 250 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d!\n\n\n ", amount);
			}
		else if(choice == 2)
    		{
    		printf("\n\t       You have purchased Chicken Burger! \n\n");
    		printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 210 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n ", amount);
 			}
		else if(choice == 3)
    		{
    		printf("\n\t       You have purchased Chicken Mayo Roll! \n");
    		printf("\n\t       Enter quantity: ");
			scanf("%d", &quantity);
			amount = 170 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n ", amount);
			}
		else if(choice == 4)
    		{
    		printf("\n\t       You have purchased Broast! \n");
    		printf("\n\t       Enter quantity : ");
			scanf("%d", &quantity);
			amount = 230 * quantity ;
			printf("\n\t       Your total amount to be paid is Rs %d.\n\n\n", amount);
			} 
		else 
			{
			printf("\n\t       Invalid input! \n");
			goto back;
			}	
			
			total=total+amount;
			printf("|=======================================================================|\n");
			printf("\t       %s order is been placed.                      ", name);
			printf("\n\t       Total amount is Rs %d, please pay at the counter   \n", total);
			printf(" |=======================================================================|\n");
			printf("\n\t       Do you want to order more? (Y/N): ");
			scanf(" %c", &cont);
			system("cls");
			
	} while (cont == 'y' || cont == 'Y');
	system("cls");
	printf("\n\t       *Total amount including tax is Rs %d, please pay at the counter*\n\n", total+total*15/100);
	quit();
}

int quit(void) //quit function  
{
  printf("\n\t\t\t            Thank You Very Much          \n ");
  printf("\n\t\t\t       <============================>          \n\n");
  printf("\t\t\t            Please come again. \n\n");
}
