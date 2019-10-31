#include <stdio.h>
#include <stdlib.h>
union employee
{
	int empno;
	char empname[100];
	char empdept[100];
	int empage;
	int empsalary;
}e[100];
int main()
{
	int r,i,n;
	printf("Enter the number of employees:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter employeeNumber\n");
		scanf("%d", &e[i].empno);
		printf("number is %d\n\n",e[i].empno);
		printf("Enter employeeName\n");
		scanf("%s", e[i].empname);
		printf("name is %s\n\n",e[i].empname);
		printf("Enter employeeDepartment\n");
		scanf("%s", e[i].empdept);
		printf("department is %s\n\n",e[i].empdept);
		printf("Enter employeeAge\n");
		scanf("%d", &e[i].empage);
		printf("age is %d\n\n",e[i].empage);
		printf("Enter employeeSalary\n");
		scanf("%d", &e[i].empsalary);
		printf("salary is %d\n\n",e[i].empsalary);
	}
	return 0;
}
