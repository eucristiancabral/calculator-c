#include <stdio.h> //Standard input and output library

/*Main function*/
int main(){
    float n1, n2, res; //Float variable for inputting values ​​and the result 
    int ope; //Int variable to store the operator option chosen by the user
    
    // Display the calculator title
    printf("------ CALCULADORA EM C ------\n"); 

    // Ask the user for the first number
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1); // Reads a floating point number (float) entered by the user and stores it in n1

    // Ask the user for the second number
    printf("Digite o segundo numero: ");
    scanf("%f", &n2); // Reads a floating point number (float) entered by the user and stores it in n2


    return 0;
}