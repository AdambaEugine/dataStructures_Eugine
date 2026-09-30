#include <iostream>

int main()
{
    int matrix[] = {2, 5, 6, 9, 7, 8};
    // display
    int size = sizeof(matrix) / sizeof(matrix[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << matrix[i] << "\t";
    }
    std::cout << std::endl;
    // index to delete ,our case
    int indexDelete = 4;

    // loop to delete
    for (int i = 0; i < size; i++)
    {
        // shift the values to the left  2 5 6 9 7 8
        matrix[indexDelete] = matrix[indexDelete + 1];
    }
    // reduce the size of the array 
    size--;

    // updated array
    for (int i = 0; i < size; i++)
    {
        std::cout << matrix[i] << "\t";
    }

    return 0;
}