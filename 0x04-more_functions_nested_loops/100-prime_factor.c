#include <stdio.h>
/**
 * main - prints the prime factors of 
 *
 * Return: there is no return value
 */
int main(void){
    long number = 612852475143;
    int i;
    for(i=1; i<=(number/2); i++){
        if((number%i)==0){
            int count = 0;
	    int j;
            for(j=1; j<=i; j++){
                if((i%j)==0){
                    count++;
                }
            }
            if(count==2){
                printf("%d\n", i);
            }
        }
    }
    return (0);
}
