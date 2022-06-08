/*1.	 Student record management System 
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
struct students
{
	int Roll_Number;
	char Name;
	char sex;
	int Exam_score;
	
}pupil[5];
void print_info(struct students s)
{
	printf("\npupil Roll_num is :%d",s.Roll_Number);
	printf("\npupil Name is :%d",s.Name);
	printf("\npupil sex is :%d",s.sex);
	printf("\npupil Exam_score is :%d",s.Exam_score);

}
int main()
{
	//struct pupil[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Record  num=%d",i+1);
		printf("\nEnter the Roll num:");
		scanf("%d",&pupil[i].Roll_Number);
		printf("\nEnter the Name of student:" );
		scanf("%s",&pupil[i].Name);
		printf("\nEnter the Sex of student:" );
		scanf("%c",&pupil[i].sex);
		printf("\nEnter the Exam_score:");
		scanf("%d",&pupil[i].Exam_score);
	}
	print_info(pupil[1]);	
	return 0;
}


