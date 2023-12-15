#include <stdio.h>
 
int count;

void setup() {
    count = 0;
    printf("we are in setup!\n");
}


void asdf() {
    count = count + 1;
    printf("we are in loop! %d\n", count);
}
 
// main function -
// where the execution of program begins
int main()
{
    setup();
    while(1) {
        asdf();
    }
    
    return 0;
}

