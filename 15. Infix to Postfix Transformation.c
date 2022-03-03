// Transform - Infix expression: A+(B*C-(D/E^F)*G)*H  to  Postfix expression: ABC*DEF^/G*-H*+
#include <stdio.h>
#include <ctype.h>
#define size 20

char stack[size];
int top=-1;

void push(char data)
{
    top++;
    stack[top] = data;
}

char pop()
{
    char ch=stack[top];
    top--;
    return ch;
}

int is_operator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='%' || ch=='^')
        return 1;
    else
        return 0;
}

int precedence(char op)
{
	if(op=='^')
        return 3;
	else if(op=='*' || op=='/' || op=='%')
        return 2;
	else if(op=='+' || op=='-')
        return 1;
	else
        return 0;
}

void display_stack()
{
    int t;

    printf("Stack: ");
    for(t=0; t<=top; ++t)
        printf("  %c", stack[t]);
}

void display_exp(int len, char postfixExp[] )
{
    int l;

    printf("Expression:");
    for(l=0; l<len; ++l)
        printf(" %c", postfixExp[l]);
}

int main()
{
    char ch, temp, infixExp[size], postfixExp[size];
    int i=0, j=0;

    printf("Enter the infix expression: ");
    scanf("%s", infixExp);

    push('(');
    strcat(infixExp, ")");

    while(top!=-1){
        ch = infixExp[i];

        if(isalnum(ch))
            postfixExp[j++] = ch;
        else if(ch=='(')
            push(ch);
        else if(is_operator(ch)){
            temp = stack[top];
            while(is_operator(temp)==1 && precedence(temp)>=precedence(ch)){
                postfixExp[j++] = pop();
                temp = stack[top];
            }
            push(ch);
        }
        else if(ch==')'){
            temp=pop();
            while(temp!='('){
                postfixExp[j++]=temp;
                temp=pop();
            }
        }
        else{
            printf("Invalid expression\n");
            break;
        }

        printf("Symbol: %c  ", ch);
        display_stack();
        printf("%*c", 25-top*3, ' ');
        display_exp(j, postfixExp);
        printf("\n");
        i++;
    }
    postfixExp[j] = '\0';
    printf("\nPostfix expression: %s\n", postfixExp);

    return 0;
}
