
#include <stdio.h>
 struct stud
{
 char name[20];
 int age;
 int total;
};
int main()
{
  struct stud S1 = {"aniruth",18,0};
  struct stud S2 = {"ajay",20,100};
  printf("name of the student is %s\n",S1.name);
  printf("age of the student is %d\n",S1.age);
  printf("total marks of the student is %d\n",S1.total);
  printf("name of the student is %s\n",S2.name);
  printf("age of the student is %d\n",S2.age);
  printf("total marks of the student is %d\n",S2.total);
  return 0;
}