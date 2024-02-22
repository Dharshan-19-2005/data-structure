#include <stdio.h>
 struct Book
{
 char title[20];
 char author[20];
 int price;
}b[3];
int main()
{
  for(int i=0;i<3;i++)
    {
      printf("Enter the title of the book: ");
      scanf("%s",&b[i].title);
      printf("Enter the author of the book: ");
      scanf("%s",&b[i].author);
      printf("Enter the price of the book: ");
      scanf("%d",&b[i].price);
    }
  for(int i=0;i<3;i++)
    {
      printf("The title of the book is :%s\n",b[i].title);
      printf("The author of the book is : %s\n",b[i].author);
      printf("the price of the book is :%d\n",b[i].price);
    }
   return 0;
}