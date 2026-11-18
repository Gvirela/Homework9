#include <iostream>

void print(int* integers, int size)
{
    for (int i = 0; i < size; i++){
        std::cout << integers[i] << " ";
    }
    std::cout << std::endl;
    
}

void reverse(int* integers, int size){
    for (int i = 0; i < size / 2; i++){
        int t = integers[i];
        integers[i] = integers[size - 1 - i];
        integers[size - 1 - i] = t;
    }
}

int main(int argc, char** argv)
{
    const int size{ 10 };
    int arr[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Before the reverse function: ";
    print(arr, size);
    reverse(arr, size);
    std::cout << "After the reverse function: ";
    print(arr, size);

}