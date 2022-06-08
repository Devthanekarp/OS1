/*Student record management System 
Write a C program to keep records and perform statistical analysis for a class of 5 students.  The information of each student contains: 
	RollNumber
	Name
	Sex
	Exam Score.  
Do following operations
1. Add student records
2. View all student records
3. Show student who gets the maximum score
4. Show student who gets the minimum score
*/
#include<stdio.h>
#include<string.h>


struct student
{
        int RollNUmber;
        char Name[20];
        char Sex ;
        int ExamScore;
};
struct student stu[5];
int main()
{
        struct student stu[5];
        int i;
        for (i=0; i<5;i++)
        {
                
                printf("Register %d",i+1);
                printf("\nEnter  student RollNUmber:   ");
                scanf("%d",&stu[i].RollNUmber);
		printf("\n Enter  Student ExamScore:  ");
                scanf("%d",&stu[i].ExamScore);
                printf("\nEnter  Student Name:   ");
                scanf("%s",stu[i].Name);
		printf("\nEnter  Student Sex:   ");
                scanf("  %c  ",&stu[i].Sex);
                
                
        }
        
        for (i=0; i<5;i++)
        {
        printf(" \n Student RollNUmber  is: %d \n", stu[i].RollNUmber);
        printf(" Student Name is: %s \n", stu[i].Name);
        printf(" Student ExamScore is: %d\n", stu[i].ExamScore);
        }
        return 0;
}
