#include<stdio.h>
#include<ctype.h>
#define MAX 15

char stack[MAX];
int top=-1;

int isempty()
{
    if(top==-1)
    return 1;
    else return 0;
}

int isfull()
{
    if(top==MAX-1)
    return 1;
    else return 0;
}

void push(char x)
{
    if(!isempty){
        stack[++top]=x;
    }
}

char pop()
{
    if(!isempty){
        return stack[top--];
    }
}

int priority(char c)
{
    switch(c){
        case '(': return 0;
                    break;
        case '+':
        case '-':
                     return 1;
                    break;
        case '*':
        case '/': 
                    return 2;
                    break;
    }
}

int main(){
    char exp[MAX];
    char *e,x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e=exp;
    while(*e != '\0'){
        if(isalnum(*e))
        printf("%c ",*e);
        else if(*e=='(')
        push(*e);
        else if(*e ==')'){
            while((x=pop())!='(')
            printf("%c ",x);
        }else{
            while(priority(stack[top])>=priority(*e))
            printf("%c ",pop());
            push(*e);
            
        }
        e++;
    }
    while(top!=-1){
        printf("%c ",pop());
    }


    return 0;
}