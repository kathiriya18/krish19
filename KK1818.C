#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();
   char c;
   printf("\npress S for 1");
   printf("\npress m for 2");
   printf("\npress T for 3");
   printf("\npress w for 4");
   printf("\npress t for 5");
   printf("\npress f for 6");
   printf("\npress s for 7");
   printf("\nenter number among this:- ");
   scanf("%c",&c);
   switch(c)
   {
	case 'S':
		printf("1= SUNDAY");
		break;
	case 'm':
		printf("2= monday");
		break;
	case 'T':
		printf("3=TUSEDAY");
		break;
	case 'w':
		printf("4=wednesday");
		break;
	case 't':
		printf("5=thursday");
		break;
	case 'f':
		printf("6=friday");
		break;
	case 's':
		printf("7=saturday");
		break;
	default:
		printf("enter number among this:-"  );


     }
     getch();

}
