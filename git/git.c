#include <stdio.h>
 
int main(void)
{
    char c = 'N';
    int d = 10;
    short s = 2;
     
    char *pc = &c;          // получаем адрес переменной с типа char
    int *pd = &d;           // получаем адрес переменной d типа int
    short *ps = &s;         // получаем адрес переменной s типа short
     
    printf("Variable c: address=%p \t value=%c \n", (void*) pc, *pc);
    printf("Variable d: address=%p \t value=%d \n", (void*) pd, *pd);
    printf("Variable s: address=%p \t value=%hd \n", (void*) ps, *ps);
    return 0;
}