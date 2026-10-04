#include <iostream>
#define MAX 6
int top = -1;
int array[MAX];

void push(int x)
{
    if (top == MAX - 1)
    {
        std::cout << "Full" << std::endl;
    }
    else
    {
        top++;
        array[top] = x;
        std::cout << x << " has been added \n";
    }
}
int pop()
{
    if (top == -1)
    {
        std::cout << "empty" << std::endl;
        return -1;
    }
    else
    {
        int x = array[top--];
        std::cout << x << " has been removed\n";
        return x;
    }
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        std::cout << array[i] << "\t";
    }
}

int main()
{
    push(5);
    push(4);
    push(6);
    push(9);
    push(10);
    push(20);
    push(19);

    std::cout << std::endl;
    display();
    std::cout << std::endl;

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    std::cout << std::endl;

    std::cout << std::endl;
    display();

    return 0;
}