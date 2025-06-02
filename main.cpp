#include <iostream>

//valgrind [binary]
//valgrind --leak=check=full [binary]

int main()
{
    int staticArray[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
        std::cout << staticArray[i] << '\n';

    constexpr int size = 10;
    int* dynamicArray = new int[10];
    for (int i = 0; i < size; ++i)
        dynamicArray[i + 1] = i * 10;

    for (int i = 0; i < size; ++i)
        std::cout << dynamicArray[i + 1] << '\n'; //out of range

    delete[] dynamicArray;

    int* someLeak = new int(5);
    std::cout << *someLeak << '\n'; //memory leak
    return 0;
}
