#include <iostream>

void print(int* integers, int size)
{
    for (int i = 0; i < size; i++){
        std::cout << integers[i] << " ";
    }
    std::cout << std::endl;
    
}

int main(int argc, char** argv)
{
    const int size1{ 4 }, size2{ 7 }, size3{ 5 };
    int arr1[size1]{1, 2, 3, 4,}, arr2[size2]{2, 5, 6, 8, 9, 0, 1}, arr3[size3]{10, 11, 12, 13, 14};
    print(arr1, size1);
    print(arr2, size2);
    print(arr3, size3);

}