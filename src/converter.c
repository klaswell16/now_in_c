#include <stdio.h>


int hexToInt(char hex){
    int num;

    switch(hex){
    case '1':
        num = 1;
        break;
    case '2':
        num = 2;
        break;
    case '3':
        num = 3;
        break;
    case '4':
        num = 4;
        break;
    case '5':
        num = 5;
        break;
    case '6':
        num = 6;
        break;
    case '7':
        num = 7;
        break;
    case '8':
        num = 8;
        break;
    case '9':
        num = 9;
        break;
    case 'A':
        num = 10;
        break;
    case 'B':
        num = 11;
        break;
    case 'C':
        num = 12;
        break;
    case 'D':
        num = 13;
        break;
    case 'E':
        num = 14;
        break;
    case 'F':
        num = 15;
        break;
    default:
        printf("Wrong input\n");

        break;
    }

    return num;
}

void intToBinary(int converted){
    int i;
    for(i = 3; i >= 0; i--){
        int bit = (converted >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main(){
    char hex;
    while (1){
        printf("Enter a number in hexadecimal between 0-E: \n");
        scanf(" %c", &hex);
        if(hex == 'X'){
            printf("Exiting program...\n");
            break;
        }
        int converted = hexToInt(hex);
        intToBinary(converted);

    }
    return 0;
}
