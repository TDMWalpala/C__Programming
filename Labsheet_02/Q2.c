#include <stdio.h>
#include <stdlib.h>

void main(){
    int a=1,temp;
    printf("a = %d\n\n",a);

    temp = a++;
    printf("a++ = %d\n\n",temp);  /* increments a by one, but returns old value; a == 1, temp == 1 */

    temp = ++a;
    printf("++a = %d\n\n",temp);  /* increments a by one, and returns new value; a == 2, temp == 3 */

    temp = a--;
    printf("a-- = %d\n\n",temp);  /* decrements a by one, but returns old value; a == 1, temp == 3 */

    temp = --a;
    printf("--a = %d",temp);      /* decrements a by one, and returns new value; a == 0, temp == 1 */

  getch();
}
