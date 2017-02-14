#include <stdio.h>
#include <stdlib.h>

#include "funcs.h"
void b(void)
{
    printf("muehe\n");
    a();
}
void c(void)
{
    b();
    b();
}
void a(void)
{
    printf("hahaahahahah\n");
    c();
}





void test(void)
{

    printf("this is function test\n");
    a();
}