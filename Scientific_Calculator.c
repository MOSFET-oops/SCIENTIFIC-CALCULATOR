#include <stdio.h> 
#include <math.h>
#define PI 3.14159265358979323846
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
double power(double base , double exponent)
{
    return pow(base , exponent);
}
double square(double num)
{
    return square(num * num );
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
double sine(double degree)
{
    return sin(degree * (PI /180));
}
double cosine(double degree)
{
    return cos(degree * (PI /180));
}
double tangent(double degree)
{
    return tan(degree * (PI /180));
}
double arcsine(double degree)
{
    return asin(degree * (PI /180));
}
double arccosine(double degree)
{
    return acos(degree * (PI /180));
}
double arctangent(double degree)
{
    return atan(degree * (PI /180));
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
    int choice;
    double num1 , num2 , result;

    do{
        printf("\n====================================\n");
        printf("       POWER FUNCTIONS MENU\n");
        printf("====================================\n");
        printf("1. Power\n");
        printf("2. Square\n");
        printf("3. Square root\n");
        printf("4. Cube\n");
        printf("5. Cube root\n");
        printf("6. Back to main menu\n");
        printf("Enter your choice: \n");
        scanf("%d" , &choice);

        switch(choice){

            case 1: 
            double base , exponent , result;
            printf("Enter the Base \n");
            scanf("%lf" , &base);
            printf("Enter the Exponent: \n");
            scanf("%lf" , &exponent);
            result = power(base , exponent);
            printf("Result: %.2lf \n" , result);
            break;

            case 2:
                printf("Enter the number: \n");
                scanf("%lf" , &num1);
                result = square(num1);
                printf("Result: %.2lf \n" , result);
                break;

            case 3:
                printf("Enter the number: \n");
                scanf("%lf" , &num1);
                if(num1 >= 0){
                      result = squareroot(num1 , num2);
                      printf("Result: %.2lf \n" , result);
                }
                else{
                    printf("Error: Please enter a valid positive number.\n");
                }
                break;
            
            case 4:
                printf("Enter the number: \n");
                scanf("%lf" , &num1);
                result = cube(num1 , num2);
                printf("Result: %.2lf \n" , result);
                break;

            case 5:
                printf("Enter the number: \n");
                scanf("%lf" , &num1);
                if(num1 >= 0){
                    result = cuberoot(num1 , num2);
                    printf("Result: %.2lf \n" , result);
                }
                else{
                    printf("Enter a valid positive number. \n");
                }
                break;

            case 6:
                printf("Returning to main menu....\n");
                break;

            default:
                printf("INVALID CHOICE!!!!! Please select a valid option. \n");
        }
    }
    while(choice != 6);
}
void trigonoMenu(){
    int choice;
    double degree , result;

    do{
        printf("\n====================================\n");
        printf("     TRIGONOMETRIC FUNCTIONS MENU\n");
        printf("====================================\n");
        printf("1. Sine\n");
        printf("2. Cosine\n");
        printf("3. Tangent\n");
        printf("4. Arcsine\n");
        printf("5. Arccosine\n");
        printf("6. Arctangent\n");
        printf("7. Back to main menu\n");
        printf("Enter your choice: \n");
        scanf("%d" , &choice);

        switch(choice){

            case 1:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            result = sin(degree);
            printf("Result: %.2lf \n" , result);
            break;

            case 2:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            result = cos(degree);
            printf("Result: %.2lf \n" , result);
            break;

            case 3:
            printf("enter the angle in degree: \n");
            scanf("%lf" , &degree);
            result = tan(degree);
            printf("Result: %.2lf \n" , result);
            break;

            case 4:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            result = asin(degree);
            printf("Result: %.2lf \n" , result);
            break;

            case 5:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            result = acos(degree);
            printf("Result: %.2lf \n" , result);
            break;

            case 6:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            result = atan(degree);
            printf("Result: %.2lf \n" , result);
            break;

            case 7: 
            printf("Returning to main menu....\n");
            break;

        }
    }
    while(choice != 7);
    
    
}
void logMenu(){
    printf("Under Construction\n");
}
void advancedMenu(){
    printf("Under Construction\n");
}
