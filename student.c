/*
#include <stdio.h>
#include<studentmake.h>

struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
	printf("Enter information of students: ");

	    // storing information
	for(int i = 0; i < 10; ++i)
		{
			printf("\nEnter name: ");
   		        scanf("%s", s.name);

   			printf("\nEnter roll number: ");
    			scanf("%d", &s.roll);

    			printf("\nEnter marks: ");
    			scanf("%f", &s.marks);
       		}
	mydisplay();
	return
}
*/
#include<stdio.h>
#include<hellomake.h>

struct student

 {
 
   char name[10];
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

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("\n");

       }

   printf("Displaying Informations\n\n");

      for(i=0;i<4;i++)

       {

         printf("\nRollno: %d\n",i+1);
         printf("Name:");
         puts(s[i].name);

        }

    return 0;

  }
	
