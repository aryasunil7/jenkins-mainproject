#include<stdio.h>
#include<hellomake.h>

struct student

 {
 
   int roll;
   float total;
   float average;

  }s[4];


void studentmark()
{

  printf("Displaying Informations\n\n");

      for(i=0;i<4;i++)

       {

         printf("\nRollno: %d\n",i+1);
         printf("Name:");
         puts(s[i].name);
         printf("Total Marks: %.1f\n",s[i].total);
         printf("Average Marks: %.1f\n",s[i].average);


          printf("\n");

        }

    return 0;

  }
