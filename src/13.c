
    #include <stdio.h>
    #include <stdlib.h>
    
    int main() {
        srand(time(NULL));
        int question = rand() % 10 + 1;
        switch (question) {
            case 1:
                printf("What is the boiling point of water in Celsius?\n");
                break;
            case 2:
                printf("What is the atomic number of oxygen?\n");
                break;
            case 3:
                printf("What is the chemical symbol for gold?\n");
                break;
            case 4:
                printf("What is the name of the largest planet in our solar system?\n");
                break;
            case 5:
                printf("What is the chemical symbol for carbon dioxide?\n");
                break;
            case 6:
                printf("What is the name of the smallest country in the world?\n");
                break;
            case 7:
                printf("What is the boiling point of mercury in Celsius?\n");
                break;
            case 8:
                printf("What is the chemical symbol for hydrogen?\n");
                break;
            case 9:
                printf("What is the name of the largest living thing on Earth?\n");
                break;
            case 10:
                printf("What is the chemical symbol for nitrogen?\n");
                break;
            default:
                printf("Error: Invalid question number.\n");
        }
        return 0;
    }