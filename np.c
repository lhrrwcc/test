#include <stdio.h>
#include <stdlib.h>

#include "funcs.h"
void 
b(void)
{
    int i, j, k;
    for(i=0; i<100; i++) { 
        printf("eheum");
        for(j=0; j<100; j++) {
            printf("uhehene");
            for(k=0; k<100; k++) {
                printf("muehe");
            }
        }
    }
    
}

void 
c(void)
{
    b();
 }

void 
a(void)
{
    printf("hahaahahahah\n");
    c();
}

void 
test(void)
{

    printf("this is function test\n");
    a();
}