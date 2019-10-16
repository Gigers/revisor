#include <stdio.h>
#include <stdlib.h>

int
fat(int n){
    
    // Menor caso
    if(n == 1)
        return 1;
     else 
        return n * fat(n - 1);
}

void
main(void){
 
    printf("5! = %d\n", fat(5));
    printf("8! = %d\n", fat(8));

}