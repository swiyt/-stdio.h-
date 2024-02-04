#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
    char c;
    int values[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int user, i, fseat = 1, eseat = 6;

    //for loop runs the program 24 times for 24 customers and end
    for (i = 0; i < 24; i++) {

        printf(" Please type 1 for 'First Class': \n");
        printf(" Please type 2 for 'Economy Class':  \n");
        scanf("%d", &user);

        switch (user) {
            case 1:
                if (fseat < 6) {
                    printf(" Your seat number is A%d, in first class section\n\n", fseat);
                    fseat++;
                    values[i] = TRUE;
                    i++;
                    break;
                } else {
                    printf("First Class seats are full, does Economy seats works for you? \n");
                    // no error but runs without waiting for an input
                    /*
                    scanf("%c", &c);
                    if ( c == 'Y' ){
                        printf("Your seat number is A%d, in first class section\n\n", fseat);
                        fseat++;
                        break;
                    }
                    else if ( c == 'N' ) {
                        printf("Next flight in 3 hours. ");
                        break;
                    }

                }
                    */
                    case 2:
                        printf(" Your seat number is E%d, in economy section\n\n", eseat);
                    eseat++;
                    break;
                    default:
                        printf("Invalid. \n");
                    break;
                }
        }

    }
}