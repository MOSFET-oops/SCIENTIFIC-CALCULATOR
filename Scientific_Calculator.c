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
    return (num * num );
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
double sine(double degree , double radian)
{
    radian = degree * (PI / 180);
    return sin(radian);
}
double cosine(double degree , double radian)
{
    radian = degree * (PI /180);
    return cos(radian);
}
double tangent(double degree , double radian)
{
    radian = degree * (PI /180);
    return tan(radian);
}
double cosec(double degree , double radian)
{
    radian = degree * (PI /180);
    return 1/sin(radian);
}
double sec(double degree , double radian)
{
    radian = degree * (PI /180);
    return 1/cos(radian );
}
double cot(double degree , double radian)
{
    radian = degree * (PI /180);
    return 1/tan(radian);
}
double inverse_sine(double value){
    return asin(value) * 180 / PI;
}
double inverse_cosine(double value){
    return acos(value) * 180 / PI;
}
double inverse_tangent(double value){
    return atan(value) * 180 / PI;
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
double factorial(double num)
{
    int n = (int)num;
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
double permutation(int n , int r){
    if(n < 0 || r < 0 || r > n){
        return -1;
    }
    return factorial(n) / factorial (n - r);
}
double combination(int n , int r){
    if(n < 0 || r < 0 || r > n){
        return -1;
    }
    return factorial(n) / (factorial(r) * factorial(n - r)); 
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
        printf("    TRIGONOMETRIC FUNCTIONS MENU\n");
        printf("=====================================\n");
        printf("1. Sine\n");
        printf("2. Cosine\n");
        printf("3. Tangent\n");
        printf("4. Cosine\n");
        printf("5. Sec\n");
        printf("6. Cot\n");
        printf("7. Arcsine\n");
        printf("8. Arccosine\n");
        printf("9. Arctangent\n");
        printf("10. Back to main menu\n");
        printf("Enter your choice: \n");
        scanf("%d" , &choice);

        switch(choice){

            double value , radian;

            case 1:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = sin(radian);
            printf("Result: %.2lf \n" , result);
            break;

            case 2:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = cos(radian);
            printf("Result: %.2lf \n" , result);
            break;

            case 3:
            printf("enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = tan(radian);
            printf("Result: %.2lf \n" , result);
            break;

            case 4:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = cosec(degree , value);
            printf("Result: %.2lf \n" , result);
            break;

            case 5:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = sec(degree , value);
            printf("Result: %.2lf \n" , result);
            break;

            case 6:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = cot(degree , value);
            printf("Result: %.2lf \n" , result);
            break;

            case 7: 
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = asin(value);
            printf("Result: %.2lf \n" , result);
            break;

            case 8:
            printf("Enter the angle in degree: \n");
            scanf("%lf" , &degree);
            radian = degree * (PI / 180);
            result = acos(value);
            printf("Result: %.2lf \n" , result);
            break;

            case 9:
            printf("Enter the angle in degree: \n");
            scanf("%lf" ,  &degree);
            radian = degree * (PI / 180);
            result = atan(value);
            printf("Result: %.2lf \n" , result);
            break;

            case 10:
            printf("Returning to main menu....\n");
            break;

            default:
            printf("INVALID CHOICE!!!! Please select a valid option. \n");

        }
    }
    while(choice != 10);
}
void logMenu(){
    int choice;
    double num1 , result ;
    do{

        printf("\n=================================================\n");
        printf("  LOGARITHMIC AND EXPONENTIAL FUNCTIONS MENU\n");
        printf("=================================================\n");
        printf("1. Logarithm (base 10) \n");
        printf("2. Natural Logarithm (base e) \n");
        printf("3. Exponential (e^x) \n");
        printf("4. Back to main menu \n");
        printf("Enter your choice: \n");
        scanf("%d" , &choice);
    
        switch (choice){
            case 1:
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            if(num1 >= 0){
               result = log10(num1);
               printf("Result: %.4lf \n" , result);
            }
            else{

                printf("Error: Logarithm is undefined. \n");
            }
            break;

            case 2:
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            if(num1 >= 0){
                result = log(num1);
                printf("Result: %.4lf \n" , result);
            }
            else{
                printf("Error: Logarithm is undefined. \n");
            }
            break;

            case 3:
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            result = exp(num1);
            printf("Result: %.4lf \n" , result); 
            break;

            case 4:
            printf("Returning to main menu.... \n");
            break;

            default:
            printf("INVALID CHOICE!!!! Please select a valid option. \n");

        }
    }
    while(choice != 4);

}
void advancedMenu(){
    int n , r , choice;
    double num1 , num2 ,  result;
    do{
        printf("\n=================================================\n");
        printf("       Advance/Miscellaneous Functions\n");
        printf("=================================================\n");
        printf("1. Factorial \n");
        printf("2. Absolute Value \n");
        printf("3. Floor Value \n");
        printf("4. Ceil Value \n");
        printf("5. Round Value \n");
        printf("6. Percentage \n");
        printf("7. Permutation \n");
        printf("8. Combination \n");
        printf("9. More functions coming soon....... \n");
        printf("10. Back to main menu. \n");
        printf("Enter your choice: \n");
        scanf("%d" , &choice);

        switch (choice)
        {
            case 1:
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            if(num1 < 0 || num1 != (int)num1){
                printf("Error: Factorials are only defined for non-negative integers. \n");
            }
            else{
                result = factorial(num1);
                printf("Result: %.0lf \n" , result);
            }
            break;

            case 2: 
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            result = fabs(num1);
            printf("Result: %.2lf \n" , result);
            break;

            case 3:
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            result = floor(num1);
            printf("Result: %.2lf \n" , result);
            break;

            case 4:
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            result = ceil(num1);
            printf("Result: %.2lf \n" , result);
            break;

            case 5:
            printf("Enter the number: \n");
            scanf("%lf" , &num1);
            result = round(num1);
            printf("Result: %.2lf \n" , result);
            break;

            case 6:
            printf("Enter the percentage: \n");
            scanf("%lf" , &num1);
            printf("Enter the number: \n");
            scanf("%lf" , &num2);
            result = (num1 * num2)/100;
            printf("Result: %.2lf" , result);
            break;

            case 7:
            printf("Enter N: \n");
            scanf("%d" , &n);
            printf("Enter R: \n");
            scanf("%d" , &r);
            result = permutation(n , r);
            if(result == -1){
                printf("Error! Ensure N >= R and N and R should be non-negative Integers. \n");
            }
            else{
                printf("Result: %dP%d = %.0lf \n" , n , r , result);
            }
            break;

            case 8:
            printf("Enter N: \n");
            scanf("%d" , &n);
            printf("Enter R: \n");
            scanf("%d" , &r);
            result = combination(n , r);
            if(result == -1){
                printf("Error! Ensure N >= R and N and R should be non-negative Integers. \n");
            }
            else{
                printf("Result: %dC%d = %.0lf \n" , n , r, result);
            }
            break;

            case 9:
            printf("More functions coming soon are:- \n");
            printf("Quadratic Equations Solver(^2 & ^3) \n");
            printf("Statistics \n");
            printf("Matrix Equations \n");
            printf("Number system converter \n");
            printf("Memory Functions \n");
            printf("Calculation History \n");
            break;

            case 10:
            printf("Returning to main menu.... \n");
            break;

            default:
            printf("INVALID CHOICE!!!! Please select a valid option. \n");

        }
    }
    while(choice != 8);   
}