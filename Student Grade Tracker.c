#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    int sid;
    char div;
    int marks;

}st;
int average(st *p, int n);
int read(st *p,int n);
int reportCard(st *p,int n);
void main()
{
    st *S;
    int n,choice;
    printf("Enter number of students\n");
    scanf("%d",&n);
    S=((struct student*)malloc(n*sizeof(struct student)));
    while(1)
    {
       printf("Enter choice:\n");
       printf("1.Enter Student Details\n2.Class Average\n3.Display Report Card\n\n");
       scanf("%d",&choice);
       switch(choice)
       {
        case 1: read(S,n);
                break;
        case 2: average(S,n);
                break;
        case 3: reportCard(S,n);
                break;
        default: exit(0);

       }
    }


}
int read(st *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter name of student:");
        scanf("%s", (p + i)->name);
        printf("Enter student ID:");
        scanf("%d", &(p + i)->sid);
        printf("Enter Division:");
        scanf(" %c", &(p + i)->div);
        printf("Enter Marks:");
        scanf("%d", &(p + i)->marks);
        printf("\n");
    }
    return(1);
}
int average(st *p, int n)
{
    char d;
    int i,c=0,sum=0;
    printf("Enter Division");
    scanf(" %c",&d);
    for(i=0;i<n;i++)
    {
        if((p+i)->div==d)
        {
            sum=sum+(p+i)->marks;
            c++;
        }
    }
    sum=sum/c;
    printf("Class average=%d",sum);
    printf("\n");
    return(1);
}
int reportCard(st *p,int n)
{
    int id;
    int i=0;
    printf("Enter Student ID of student whose report card is to be Displayed\n");
    scanf("%d",&id);
    for (i = 0; i < n; i++)
    {
      if ((p + i)->sid == id)
      {
        printf("REPORT CARD:\n");
        printf("\nNAME:");
        printf("%s", (p + i)->name);
        printf("\nSTUDENT ID:");
        printf("%d", (p + i)->sid);
        printf("\nDIVISION:");
        printf("%c", (p + i)->div);
        printf("\nMARKS:");
        printf("%d", (p + i)->marks);
      }
    }
    printf("\n\n");
    return (1);
}



