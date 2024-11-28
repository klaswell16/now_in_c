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
int main(){
    char hex;
    while (1){
        printf("Enter a number in hexadecimal between 0-E: \n");
        scanf(" %c", &hex);
        if(hex == 'x'){
            break;
        }
        int converted = hexToInt(hex);
        printf("Converted integer: %d\n", converted);
    }
    return 0;
}
