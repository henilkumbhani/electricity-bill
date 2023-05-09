#include<stdio.h>
#include<conio.h>

void main()
{
   float unit,bill;
   clrscr();
   printf("\n Enter the electricity unit charges=");
   scanf("%f",&unit);
   if(unit<=50)
   {
   bill=unit*0.50;
   }
   else if(unit<=150)
   {
   bill=25+(unit-50)*0.75;
   }
   else if(unit<=250)
   {
   bill=100+(unit-150)*1.20;
   }
   else
   {
   bill=220+(unit-250)*1.50;
   }
   printf("\n unit used=%f \t electricity bill=%f",unit,bill);
   getch();
}



