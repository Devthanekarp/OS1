/*Write a program to read and print an Employee’s details using Structure.
Use array of structures and pointer to the array of structures concepts.
*/
#include <stdio.h>
#include <string.h>
struct employee {
        int id;
        char name[20];
        float salary;
        char gender;
 }emp1[5];
int main()
 {
	emp1.id=1;
        strcpy(emp1.name, "Ravi");
        emp1.salary = 25234.5;
        emp1.gender = 'M';
        printf(" Emp id  is: %d \n", emp1.id);
        printf(" Emp Name is: %s \n", emp1.name);
        printf(" Emp salary is: %f \n", emp1.salary);
        printf(" gender is: %c \n", emp1.gender);
        return 0;
 }

