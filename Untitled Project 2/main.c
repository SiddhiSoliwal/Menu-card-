// Online C compiler to run C program online
#include <stdio.h>
int itemno[11];
void yourorder()
{
    int i,i1=1;
    int yourbill=0;
    printf("Here are your order food\n");
    for (i=1;i<=12;i++)
    {
        switch(itemno[i])
        {
    case 1 :
    printf("%d.MAGGIE 80\n",i1);
    yourbill=yourbill+80;
    i1++;
    break;
    case 2 :
    printf("%d.MANCHURIAN 100\n",i1);
    yourbill=yourbill+100;
    i1++;
    break;
    case 3 :
    printf("%d.NOODLES 120\n",i1);
    yourbill=yourbill+120;
    i1++;
    break;
    case 4:
    printf("%d.FRANCH FRIES 100\n",i1);
    yourbill=yourbill+100;
    i1++;
    break;
    case 5 :
    printf("%d.COLD COFFEE 70\n",i1);
    yourbill=yourbill+70;
    i1++;
    break;
    case 6 :
    printf("%d.PEPPY PANEER PIZZA  180\n",i1);
    yourbill=yourbill+180;
    i1++;
    break;
    case 7 :
    printf("%d.CORN CHEESE SANDWICH 130\n",i1);
    yourbill=yourbill+130;
    i1++;
    break;
    case 8 :
    printf("%d.PASTA 190\n",i1);
    yourbill=yourbill+190;
    i1++;
    break;
    case 9 :
    printf("%d.SPRING ROLL 150\n",i1);
    yourbill=yourbill+150;
    i1++;
    break;
    case 10 :
    printf("%d.CHOCLATE WAFFLE 120\n",i1);
    yourbill=yourbill+120;
    i1++;
    break;
    case 11 :
    printf("%d.MINT MOJITO 80\n",i1);
    yourbill=yourbill+80;
    i1++;
    break;
    case 12 :
    printf("%d.PATATO TWISTER 90\n",i1);
    yourbill=yourbill+90;
    i1++;
    break;
    default:
    break;
        }
    }
    printf("...............................................\n");
    printf("      YOUR TOTAL BILL %dRs    \n",yourbill);
    printf("...............................................\n\n");
}
void hotelmenu()
{
 int i;
 int item ;
 char ch;
 printf("^^^^^^^^^^^^^^^^TOWN'S KITCHEN ^^^^^^^^^^^^^^^\n");
 printf("...............................................\n");
 printf("                  HOTEL MENU                   \n");
 printf(" .   ITEM NAME                   PRICE          \n");
 printf(" 1.  MAGGIE                       80           \n");
 printf(" 2.   MANCHURIAN                  100          \n");
 printf(" 3.    NOODLES                    120          \n");
 printf(" 4.    FRENCH FRIES               100          \n");
 printf(" 5.   COLD COFFEE                 70           \n");
 printf(" 6.   PEPPY PANEER PIZZA          180          \n");
 printf(" 7.    CORN CHEESE SANDWIC        130          \n");
 printf(" 8.   PASTA                       190          \n");
 printf(" 9.    SPRING ROLL                150          \n");
 printf(" 10.   CHOCKLATE  WAFFLE            120          \n");
 printf(" 11.   MINT MOJITO                80           \n");
 printf(" 12.   PATATO TWISER               90           \n");
 printf("  PLEASE ORDER FOOD\n");
 for(i=0;i<12;i++)
 {
  printf("if you selected all put press Y otherwise N \n");
 fflush(stdin);
  scanf("%c",&ch);
  if(ch=='y'|| ch=='Y')
  {
      printf("your order is ready please wait just a minute");
    goto  end;
  }
  if(ch=='n'|| ch=='N')
  {
printf(" press the food no what would you like to eat \n");
scanf("%d",&itemno[i]);
 }
}
end:
printf("\n");
}
int main()
{
 hotelmenu();
 yourorder();
    
}    




