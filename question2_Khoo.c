/*
 * Aaron Khoo 162434k
 */ #include <stdio.h>

int main(){
    int i;
    printf("Even numbers: ");
    //for loop that counts 0 to 100 including 0 and 100
    for ( i = 0; i <= 100; i++){
        //if statement that prints only even numbers
        if ( i % 2 == 0 ){
            printf(" %d", i);
        }
    }
}
