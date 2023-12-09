#include<stdio.h>
void a2idiots();
void main()
{
    a2idiots();
}
void a2idiots()
{
    {
        printf("Hii");
        a2idiots();
        printf("bye");
    }
}