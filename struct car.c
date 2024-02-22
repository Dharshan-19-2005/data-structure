#include <stdio.h>
 struct car
{
  int id;
  char model[20];
  int rate;
}car[3];
int main()  
{
  int days;
  for(int i=0;i<3;i++)
    {
      printf("Enter the id of car %d: ",i+1);
      scanf("%d",&car[i].id);
      printf("Enter the model of car %d: ",i+1);
      scanf("%s",car[i].model);
      printf("Enter the rate of car %d: ",i+1);
      scanf("%d",&car[i].rate);
    }
  for(int i=0;i<3;i++)
    {
      printf("The id of car %d is %d\n",i+1,car[i].id); 
      printf("The model of car %d is %s\n",i+1,car[i].model);
      printf("The rate of car %d is %d\n",i+1,car[i].rate);
    }
   printf("Enter the total no of rental days: ");  
  scanf( "%d", &days);
  printf("The total rental amount is for %d is: %d" ,car[0].model,days*car[0].rate);
  printf( "The total rental amount is for %d is: %d" ,car[1].model,days*car[1].rate);
  printf( "The total rental amount is for %d is: %d" ,car[2].model,days*car[2].rate);

   return 0;
}