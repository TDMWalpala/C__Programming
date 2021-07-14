#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int size, i;
struct stack
{
    char array[100];
    int top;
}st;
void push(char str)
{
    if(st.top == size-1)
    {
        printf("\nstack is full");
    }else
    {
        st.top++;
        st.array[st.top] = str;
    }
}

int pop()
{
    if(st.top == -1)
    {
        printf("stack is emply");
    }else
    {
        char out;
        out = st.array[st.top];
        st.top--;
        return out;
    }
}
void display()
{
    if(st.top>=0)
        {
            printf("\n\n Element in the stack");
            for(i=st.top; i>=0; i--)
            {
                printf("\n%d", st.array[i]);
            }

        }else
            {
                printf("No element to display");
            }

}

int main()
{
    st.top = -1;
    printf("Enter number of characters in the string :");
    scanf("%d", &size);
    char str[size];
    printf("Enter string : \n");
    scanf("%s",str);
    for(i=0; i<strlen(str); i++)
    {
       push(str[i]);
    }
    printf("Revers a string :");
    for(i=0; i<strlen(str); i++)
    {
       printf("%c",pop(str[i]));
    }

    return 0;
}

