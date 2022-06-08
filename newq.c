#include<stdio.h>
struct employee 
{
        int id;
        char name[20];
        float salary;
};
struct employee emp[10];
int main()
{
        struct employee emp[10];
        int i;
        for (i=0; i<3;i++)
        {
                printf("Record %d",i+1);
                printf("\nenter  emplyoee id:   ");
                scanf("%d",&emp[i].id);
                printf("\nenter  emplyoee name:   ");
                scanf("%s",emp[i].name);
                printf("\nenter  emplyoee salary:  ");
                scanf("%f",&emp[i].salary);
        }
        for (i=0; i<3;i++)
        {
        printf(" \n Emp id  is: %d \n", emp[i].id);
        printf(" Emp Name is: %s \n", emp[i].name);
        printf(" Emp salary is: %f \n", emp[i].salary);
        }
        return 0;
}
