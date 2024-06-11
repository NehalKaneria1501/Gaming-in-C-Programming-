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
	struct employee pari={34,5.2,"Pari"};
	struct employee *ptr=&pari;
    p("The name of the employee=%s\n",pari.name);
    p("The salary of the employee=%d\n",pari.salary);
    p("The hike of the employee=%f\n",pari.hike);
    p("The name of the employee=%s\n",(*ptr).name);
    p("The salary of the employee=%d\n",(*ptr).salary);
    p("The hike of the employee=%f\n",(*ptr).hike);
    p("The name of the employee=%s\n",ptr->name);
    p("The salary of the employee=%d\n",ptr->salary);
    p("The hike of the employee=%f\n",ptr->hike);  
    return 0;
}
