#include<stdio.h>

// solution of question no 1 ###################################################

    struct Employee
    {
        int id;
        char name[40];
        int salary;
    };
    

// solution of question no 2 ###################################################

struct Employee getemployee_data();
// int main()
// {
//     struct Employee e1;
//     e1 = getemployee_data();
// }

struct Employee getemployee_data()
{
    struct Employee E1;
    printf("Enter the employee id: ");
    scanf("%d",&E1.id);
    fflush(stdin);
    printf("Enter the employee name: ");
    fgets(E1.name,40,stdin);
    printf("Enter the employee salary: ");
    scanf("%d",&E1.salary);
    return E1;
}


// solution of question no 3 ###################################################

struct Employee show_employee_data(struct Employee);

// int main()
// {
//     struct Employee e1;
//     e1 = getemployee_data();
//     show_employee_data(e1);
// }

struct Employee show_employee_data(struct Employee E1)
{
    printf("The employee name is: %s",E1.name);
    printf("The employee id is: %d ",E1.id);
    printf("\nThe employee salary is: %d ",E1.salary);
    printf("\n");
}


// solution of question no 4 ###################################################
int highest_salary(struct Employee emp[])
{
    int temp,i;
    int index =0;
    for(i=0; i<9; i++)
    {
        temp = emp[i].salary;
        if(temp < emp[i+1].salary)
        {
            temp =emp[i+1].salary;
            index = i+1;
        }
    }
    return index;
}

// int main()
// {
//     int i;
//     struct Employee emp[10];
//     printf("Enter the data of 10 employees:\n");
//     for(i=0; i<10; i++)
//     emp[i] =getemployee_data();
//     printf("\nThe Employyee data is:\n");
//     for(i=0; i<10; i++)
//     show_employee_data(emp[i]);
//     printf("Employee having maximum salary is %d",highest_salary(emp));

// }


// solution of question no 5 ###################################################

void sort_employees_acc_to_salary(struct Employee emp[])
{
    int i,j,temp;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(emp[j].salary > emp[j+1].salary)
            temp = emp[j].salary;
            emp[j].salary = emp[j+1].salary;
            emp[j+1].salary = temp;
        }
    }
    printf("\nThe sorted structure according to their salaries is:\n");
    for(i=0; i<3; i++)
    show_employee_data(emp[i]);
}

int main()
{
    int i;
    struct Employee emp[3];
    printf("Enter the Employees data:\n");
    for(i=0; i<3; i++)
    {
        emp[i] = getemployee_data();
        fflush(stdin);
    }
    sort_employees_acc_to_salary(emp);
}