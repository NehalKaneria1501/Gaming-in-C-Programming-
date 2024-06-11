#include <stdio.h>
#define p printf
float calculateForce(float mass) 
{
    float gravity=9.8;
    float force=mass*gravity;
    return force;
}
int main() 
{
    float mass;
    printf("Enter the mass of the body (in kg):");
    scanf("%f",&mass);
    float force=calculateForce(mass);
    printf("The force exerted on the body by Earth's gravity is:%.2fN\n",force);
    return 0;
}
