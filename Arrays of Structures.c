#include <stdio.h>
#include <string.h>
#define p printf
struct employee
{
    int salary;
    float hike;
    char name[10];
};
int main()
{
    int a=45;
    struct employee facebook[3];
    p("Enter the details for Pari\n");
    p("Enter name for Pari");
    scanf("%s",facebook[0].name);
    p("Enter the salary for Pari");
    scanf("%d",&facebook[0].salary);
    p("Enter the hike for Pari");
    scanf("%f",&facebook[0].hike);
    p("Enter the details for Hina\n");
    p("Enter name for Hina");
    scanf("%s",facebook[1].name);
    p("Enter the salary for Hina");
    scanf("%d",&facebook[1].salary);
    p("Enter the hike for Hina");
    scanf("%f",&facebook[1].hike);
    p("Enter the details for Meera\n");
    p("Enter name for Meera");
    scanf("%s",facebook[2].name);
    p("Enter the salary for Meera");
    scanf("%d",&facebook[2].salary);
    p("Enter the hike for Meera");
    scanf("%f",&facebook[2].hike);
    p("The name of the employee=%s\n",facebook[0].name);
    p("The salary of the employee=%d\n",facebook[0].salary);
    p("The hike of the employee=%f\n",facebook[0].hike);
    p("The name of the employee=%s\n",facebook[1].name);
    p("The salary of the employee=%d\n",facebook[1].salary);
    p("The hike of the employee=%f\n",facebook[1].hike);
    p("The name of the employee=%s\n",facebook[2].name);
    p("The salary of the employee=%d\n",facebook[2].salary);
    p("The hike of the employee=%f\n",facebook[2].hike);
    return 0;
}
