#include <stdio.h>
#include <string.h>

struct data {
	char first[20];
	char last[20];
	int employee_id;
	int last_4_SSN;
	char title[20];
};

struct employees {
	struct data employee1;
	struct data employee2;
} engineering_dept;


int main(void)
{
	for(int i=0; i<2; i++){
		struct data *employee = &engineering_dept.employee1;
		if(i > 0)
			employee = &engineering_dept.employee2;
		printf("Enter the employee's first name: ");
		scanf("%s", &employee->first);

		printf("Enter the employee's last name: ");
		scanf("%s", &employee->last);

		printf("Enter the employee's ID number: ");
		scanf("%d", &employee->employee_id);

		printf("Enter the last four digits of the employee's SSN: ");
		scanf("%d", &employee->last_4_SSN);

		printf("Enter the employee's job title (do not include the word \'Engineer\'): "); 
		scanf("%s", &employee->title);


		puts("");
	}

	for(int i=0; i<2; i++) {
		struct data *employee = &engineering_dept.employee1;
		if(i>0)
			employee = &engineering_dept.employee2;


		printf("\nEmployee information for %s %s: ", employee->first, employee->last);
		printf("\nID: %d", employee->employee_id);
		printf("\nSSN: %d", employee->last_4_SSN);
		printf("\nTitle: %s Engineer\n", employee-> title);
	}
	return 0;
}





