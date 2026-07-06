#include <stdio.h> 
double addition(double , double);
double subtraction(double , double);
double multiplication(double , double);
double division(double , double);
int main(){
    int choice;
    double num1 , num2, result;

    do{
        printf("\n=====================================\n");
        printf("         Scientific Calculator\n");
        printf("=====================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("\n======================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice >=1 && choice <=4 ){
            printf("Enter first number: \n");
            scanf("%lf" , &num1);
            printf("Enter second number: \n");
            scanf("%lf" , &num2);
        }
        switch (choice){
            
            case 1:

            result = addition(num1 , num2);
            printf("Result = %.2lf\n" , result);
            break;
            
            case 2:

            result = subtraction(num1 , num2);
            printf("Result = %.2lf\n" , result);
            break;

            case 3:

            result = multiplication(num1 , num2);
            printf("Result = %.2lf\n" , result);
            break;

            case 4:

            result = division(num1 , num2);
            if(num2 == 0){
                printf("Error: Division by ZERO is not allowed.\n");
            }
            else{
            printf("Result = %.2lf\n" , result);
            }
            break;

            case 5:
            printf("Exiting the Calculator.\n");
            break;

            default:
            printf("INVALID CHOICE!!!!! Please select a valid option.\n");
            
        }
    }
    while(choice != 5);
    return 0;
}
double addition(double num1 , double num2){
    return num1 + num2;
}   
double subtraction(double num1 , double num2){
    return num1 - num2;
}    
double multiplication(double num1 , double num2){
    return num1 * num2;
}   
double division(double num1 , double num2){
    if(num2 == 0)
    {
        printf("Error: Division by ZERO is not allowed.\n");
        return 0;
    }
    return num1 / num2;
}