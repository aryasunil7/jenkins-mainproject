#include<stdio.h>
#include<hellomake.h>

struct student

 {
 
   char name[10];
   float m1,m2,m3;
   float total;
   float average;
   int roll;

  }s[4];


int main()
 {

   int i;
   printf("Enter The Information Of Students\n");

     for(i=0;i<4;i++)
      
      {

        s[i].roll = i+1;

        printf("\nFor Rollno %d\n",s[i].roll);

        printf("\nEnter Name: ");
        scanf("%s",s[i].name);

        printf("\nEnter Mark1: ");
        scanf("%f",&s[i].m1);

        printf("\nEnter Marks2: ");
        scanf("%f",&s[i].m2);

        printf("\nEnter Mark3: ");
        scanf("%f",&s[i].m3);

        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].average = s[i].total/3;
        printf("\n");

       }

  studentmark()
   
    return 0;

  }
	
