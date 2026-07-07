#include <stdio.h> 
#include <math.h>
void basicMenu();
void powerMenu();
void trigonoMenu();
void logMenu();
void advancedMenu();

double addition(double num1 , double num2)
{
    return num1 + num2;
}

double subtraction(double num1 , double num2)
{
    return num1 - num2;
}
double multiplication(double num1 , double num2)
{
    return num1 * num2;
}
double division(double num1 , double num2)
{
    return num1 / num2;
}
int modulus(int num1 , int num2)
{
    return num1 % num2;
}
double power(double num1 , double num2)
{
    return pow(num1, num2);
}
double square(double num1 , double num2)
{
    return pow(num1, 2);
}
double squareroot(double num1 , double num2)
{
    return sqrt(num1);
}
double cube(double num1 , double num2)
{
    return pow(num1, 3);
}
double cuberoot(double num1 , double num2)
{
    return cbrt(num1);
}
double sine(double num1 , double num2)
{
    return sin(num1);
}
double cosine(double num1 , double num2)
{
    return cos(num1);
}
double tangent(double num1 , double num2)
{
    return tan(num1);
}
double arcsine(double num1 , double num2)
{
    return asin(num1);
}
double arccosine(double num1 , double num2)
{
    return acos(num1);
}
double arctangent(double num1 , double num2)
{
    return atan(num1);
}
double logarithm(double num1 , double num2)
{
    return log10(num1);
}
double naturalLog(double num1 , double num2)
{
    return log(num1);
}
double exponential(double num1 , double num2)
{
    return exp(num1);
}
double factorial(double num1 , double num2)
{
    int n = (int)num1;
    double result = 1;
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
double absoluteValue(double num1 , double num2)
{
    return fabs(num1);
}
double floorValue(double num1 , double num2)
{
    return floor(num1);
}
double ceilValue(double num1 , double num2)
{
    return ceil(num1);
}
double roundValue(double num1 , double num2)
{
    return round(num1);
}
double percentage(double num1 , double num2)
{
    return (num1 / 100) * num2;
}

int main(){
    int choice;

    do{
        printf("\n=====================================\n");
        printf("         Scientific Calculator\n");
        printf("=====================================\n");
        printf("1. BASIC ARITHMETIC\n");
        printf("2. POWER FUNCTIONS\n");
        printf("3. TRIGONOMETRIC FUNCTIONS\n");
        printf("4. LOGARITHMIC AND EXPONENTIAL FUNCTIONS\n");
        printf("5. ADVANCED/MISCELLANEOUS FUNCTIONS\n");
        printf("6. Exit\n");
        printf("\n======================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice >= 1 && choice <= 6 ){
        }
        switch (choice){
            case 1:
                basicMenu();
                break;

            case 2:
                powerMenu();
                break;

            case 3: 
                trigonoMenu();
                break;

            case 4:
                logMenu();
                break;

            case 5:
                advancedMenu();
                break;

            case 6:
                printf("Exiting the program....\n");
                break;

            default:
                printf("INVALID CHOICE!!!!! Please select a valid option.\n");
        }

        }

        while(choice != 6);
        return 0;
    }

   void basicMenu(){
    int choice;
    double num1 , num2 , result;

    do
    {
        printf("\n=====================================\n");
        printf("         BASIC ARITHMETIC MENU\n");
        printf("=====================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Back to Main menu\n");
        printf("Enter your choice: ");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
                printf("Enter first number: \n");
                scanf("%lf" , &num1);
                printf("Enter second number: \n");
                scanf("%lf" , &num2);
                result = addition(num1 , num2);
                printf("Result: %.2lf\n" , result);
                break;
            
            case 2:
                printf("Enter first number: \n");
                scanf("%lf" , &num1);
                printf("Enter second number: \n");
                scanf("%lf" , &num2);
                result = subtraction(num1 , num2);
                printf("Result: %.2lf \n" , result);
                break;

            case 3:
                printf("Enter first number: \n");
                scanf("%lf" , &num1);
                printf("Enter second number: \n");
                scanf("%lf" , &num2);
                result = multiplication(num1 , num2);
                printf("Result: %.2lf \n" , result);
                break;

            case 4:
                printf("Enter first number: \n");
                scanf("%lf" , &num1);
                printf("Enter second number: \n");
                scanf("%lf" , &num2);
                result = division(num1 , num2);
                if(num2 == 0)
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                else
                {
                    printf("Result: %.2lf \n" , result);
                }
                break;

            case 5:
                int num1 , num2 , modResult;
                printf("Enter first number: \n");
                scanf("%d" , &num1);
                printf("Enter second number: \n");
                scanf("%d" , &num2);
                if(num2 == 0)
                {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                else
                {
                    modResult = modulus(num1 , num2);
                    printf("Result: %d \n" , modResult);
                }
                break;

            case 6:
                printf("Returning to main menu....\n");
                break;

            default:
                printf("INVALID CHOICE!!!!! Please select a valid option. \n");


        }
    } 

while(choice !=6);
}
void powerMenu(){
    printf("Under Construction\n");
}
void trigonoMenu(){
    printf("Under Construction\n");
}
void logMenu(){
    printf("Under Construction\n");
}
void advancedMenu(){
    printf("Under Construction\n");
}
