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

    // Displays the operations options
    printf("-----------------------------\n");
    printf("Selecione o operador desejado: \n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &ope); // Reads an integer entered by the user and stores it in the 'ope' variableg

    //Conditional structure 
    switch (ope) {
        case 1: // If the 'ope' variable is equal to 1, this block will be executed.
            res = n1 + n2;
            printf("Resultado: %.2f", res);
            break; // Ends the execution of the current block
        case 2:
            res = n1 - n2;
            printf("Resultado: %.2f", res);
            break;
        case 3: 
            res = n1 * n2;
            printf("Resultado: %.2f", res);
            break;
        case 4:
            if (n2 != 0){ // Check if the divisor is not zero
            res = n1 / n2;
            printf("Resultado: %.2f", res);
            } else{ 
                // If the second number is zero, display an error message
                printf("Divisao por zero nao permitida.");
            }
            break;
        default: // If the user enters an invalid option
            printf("Operador invalido.");
        break;
    }   

    return 0; // End the program
}