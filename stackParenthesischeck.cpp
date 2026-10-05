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
        // std::cout << x << " has been added \n";
    }
}
int pop()
{
    if (top == -1)
    {
        // std::cout << "empty" << std::endl;
        return -1;
    }
    else
    {
        int x = array[top--];
        // std::cout << x << " has been removed\n";
        return x;
    }
}

void display()
{
    for (int i = 0; i < MAX; i++)
    {
        std::cout << array[i] << "\t";
    }
}

int main()
{

    std::string math = "2+(2*(3+2))";
    bool valid = true;
    for (char character : math)
    {
        if (character == '(')
        {
            push('(');
        }
        else if (character == ')')
        {
            if (top == -1)
            { // top == -1 is the indication of emptyness
                valid = false;
                break;
            }
            pop();
        }
    }

    if (valid && top == -1)
    {
        std::cout << math <<"  is a valid math expression" << std::endl;
    }
    else
    {
        std::cout << math <<" invalid!! has Mismatch parenthesis" << std::endl;
    }

    return 0;
}