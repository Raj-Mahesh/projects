#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

typedef struct FLAMES
{
    char c;
    struct FLAMES *next;
}flames;

char* relation(char ch);

int main()
{
    home:
    system("cls");
    char s1[100],s2[100],s3[100],s4[100],f[]={"FLAMES"},ch;
    int i=0,j=0,k=0,l1,l2,count=0,m=0;
    flames *head,*ne2,*ne3,*ne4,*ne5,*ne6,*temp,*p;
    char *relate;
    printf("----------WELCOME TO F.L.A.M.E.S----------");
    printf("\nLet us find out what is in store for you!!\n");
    printf("\nEnter First Name: ");
    gets(s1);
    printf("\nEnter Second Name: ");
    gets(s2);
    strcpy(s3,s1);
    strcpy(s4,s2);
    for(i=0;i<(l1=strlen(s1));i++)
    {
        for(j=0;j<(l2=strlen(s2));j++)
        {
            if(s1[i]==s2[j])
            {
                s2[j]=-1;
                s3[i]=-1;
            }

        }
    }
    for(i=0;i<strlen(s3);i++)
    {
        if(s3[i]!=-1)
            count++;
    }
    for(j=0;j<strlen(s2);j++)
    {
        if(s2[j]!=-1)
            count++;
    }
    printf("\n\n");
    puts(s3);
    puts(s2);
    printf("\n\nLetters left are %d",count);
    printf("\nchecking for F L A M E S:\n\n");
    head=(flames*)malloc(sizeof( flames));
    ne2=(flames*)malloc(sizeof( flames));
    ne3=(flames*)malloc(sizeof( flames));
    ne4=(flames*)malloc(sizeof( flames));
    ne5=(flames*)malloc(sizeof( flames));
    ne6=(flames*)malloc(sizeof( flames));
    head->c='f'; head->next=ne2;
    ne2->c='l';  ne2->next=ne3;
    ne3->c='a';  ne3->next=ne4;
    ne4->c='m';  ne4->next=ne5;
    ne5->c='e';  ne5->next=ne6;
    ne6->c='s';  ne6->next=head;
    temp=head;
    i=0;
    while(i<6)
    {
        printf(" %c",temp->c-32);
        temp=temp->next;
        i++;
    }
    printf("\n");
    temp=head;
    while(m<5)
    {
        for(i=0;i<count-2;i++)
            temp=temp->next;
            printf("\nDeleting %c",temp->next->c);
            p=temp->next;
            temp->next=temp->next->next;
            temp=temp->next;
            free(p);
            m++;
    }
    ch=temp->c;
    printf("\n-----------------------------------");
    printf("\n\nYou have got ---->  ");
    relate=relation(ch);
    puts(relate);
    printf("\n-----------------------------------");
    printf("\n\n");
    printf("Do you want to try again?");
    printf("\n Enter Y for yes and N to exit");
    char check;
    check=(toupper(getch()));
    if (toupper(check)=='Y')
    {
        goto home;
    }
    else
    {
        exit(1);
    }
    getch();
}
char* relation(char ch)
{
    char *rel;
    switch(ch)
    {
        case 'f':
            return rel="FRIENDSHIP";
        case 'l':
            return rel="LOVE";
        case 'a':
            return rel="AFFECTION";
        case 'm':
            return rel="MARRIAGE";
        case 'e':
            return rel="ENEMY";
        case 's':
            return rel="SISTER";
    }
}
