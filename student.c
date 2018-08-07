#include <stdio.h>


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
	
