
#include <stdio.h>
 struct Employee
{
 char empname[20];
 int empsalary;
 int empid;
}emp[3];
int main()
{
  for(int i=0;i<3;i++)
    {
      printf("Enter the name of employee: ");
      scanf("%s",&emp[i].empname);
      printf("Enter the salary of the employee:");
      scanf("%d",&emp[i].empsalary);
      printf("Enter the id of the employee:");
      scanf("%d",&emp[i].empid);
    }
  for(int i=0;i<3;i++)
    {
      printf("The %dst employee name is :%s\n",i+1,emp[i].empname);
      printf("The salary of the %d employee is %d\n",i+1,emp[i].empsalary);
      printf("The id of the %dst employee is :%d\n",i+1,emp[i].empid);
    }
   if(emp[0].empsalary>emp[1].empsalary && emp[0].empsalary>emp[2].empsalary)
   {
     printf("The employee with highest salary is %s",emp[0].empname);
   }
  else if(emp[1].empsalary>emp[0].empsalary && emp[1].empsalary>emp[2].empsalary)
  {
    printf("The employee with highest salary is %s",emp[1].empname);
  }
  else
  {
    printf("The employee with highest salary is %s",emp[2].empname);
  }
   return 0;
}