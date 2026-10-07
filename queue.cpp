#include <iostream>

#define MAX 6
int queue[MAX];
int front = -1;
int rear = -1;

// display array
void display()
{
    for (int i = front; i <= rear; i++)
    {
        std::cout << queue[i] << "\t";
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

// adding elements
void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        std::cout << "Full queue" << std::endl;
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
        display();
    }
}

void dequeue()
{
    if (front == MAX - 1 && rear == MAX - 1)
    {
        std::cout << "empty queue" << std::endl;
    }
    else
    {
        if (front >= rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        display();
    }
}

int main()
{

    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(20);
    enqueue(30);

std::cout<<"\n dequing" <<std::endl;
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}