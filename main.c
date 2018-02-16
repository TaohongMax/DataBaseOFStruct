#include <stdio.h>
#include <string.h>
typedef struct namect
{
    char number[11];
    char name[10];
    char sex[10];
}st;
struct namect getST()
{
    struct namect st;
    printf("Please enter your school number:\n");
     gets(st.number);
    printf("Please enter your full name:\n");
     gets(st.name);
    printf("Please enter your sex:\n");
     gets(st.sex);
    return st;
}
void printtitle()
{
    putchar('\n');
    printf("Number\t\t");
    printf("Name\t\t");
    printf("Sex\t");
    putchar('\n');
}
void printST(struct namect *st)
{
    printf("%s\t",st->number);
    printf("%s\t\t",st->name);
    printf("%s\n",st->sex);
    putchar('\n');
}

int main()
{
    struct namect st,*p;
    p=&st;

    st=getST();
    printtitle();
    printST(p);
    return 0;
}
