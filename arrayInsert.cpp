#include <iostream>

int main()
{
    // create a matrix
    int matrix[] = {1, 4, 5, 7, 8, 9};
    // determine the size of the matrix :
    // size of the whole matrix( total bytes occupied) / size of a single element
    int size = sizeof(matrix) / sizeof(matrix[0]);

    std::cout << " display of the old matrix " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << matrix[i] << "\t";
    }

    // insert an element at a random position : our case at index 3 i.e at element 7
    int position_Index = 3;
    // element to be added
    int new_Element = 10;

    std::cout << "\n\nPosition index for new element: " << position_Index << std::endl;
    std::cout << "new element to be added: "<<new_Element<<"\n"<<std::endl;
    for (int i = position_Index; i < size + 1; i++)
    {
        // 1.store the element at that position to another variable temp
        int temp = matrix[i];
        // 2.overwrite the position with the new element
        matrix[i] = new_Element;
        // 3.insert the value in temporary variable to the next position and shifting the rest to
        new_Element = temp;

        // since it is a loop the code shifts the position of the rest of the elements foward
    }
    // increment the size values shifted an extra index to be in bound 
    size++;
    // matrix[size] = new_Element;

    std::cout << "display of the New matrix " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << matrix[i] << "\t";
    }

    return 0;
}