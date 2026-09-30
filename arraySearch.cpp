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
  

    // element to search
    int elementSearch = 6;

    // search loop 
    for(int i=0;i<size;i++)
    {
        if(elementSearch == matrix[i])
        {
            std::cout <<"element "<< matrix[i] << " is at index " << i << std::endl;
        }

    }
    return 0;
}