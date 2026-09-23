#include <iostream>

int main()
{
    // create a matrix
    int matrix[] = {1, 4, 5, 7, 8, 9};
    // determine the size of the matrix :
    // size of the whole matrix( total bytes occupied) / size of a single element
    int size = sizeof(matrix) / sizeof(matrix[0]);
    // insert an element at a random position : our case at index 3
    int position_Index = 3;

    // 1.store the element at the position to another variable
    int temp = matrix[position_Index];
    return 0;
}