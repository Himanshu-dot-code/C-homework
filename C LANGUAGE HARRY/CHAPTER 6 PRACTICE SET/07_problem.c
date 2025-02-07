/*Try problem 3 using call by value and verify that it does not change the value of
the said variable.

problem 3 = Write a program to change the value of a variable to ten times of its current
value.

*/
#include<stdio.h>

void ten_times(int );
//we used call by value and the vakue didn't became 10 times...

// because yahan par value pass kri hai to..uski copy gyi hai...
// pehle wale m address pass kiya tha to original value change kr paye.
void ten_times(int a)
{
    a = a * 10;
}

    int main()
    {
        int x;

        printf("enter the value of x\n");
        scanf("%d", &x);

        ten_times(x);
        printf("the value of x becomes %d\n", x);

        return 0;
    }