#include <iostream>
#include <cstdlib>
#include <ctime>
int fillMaxArray(int* arr, int size);



int main()
{
    srand(time(NULL));
    std::cout<<"Enter array size:"<<std::endl;
    int arraySize = 0;
    while(!(std::cin >> arraySize))
    {
        std::cout<<"Enter array size:"<<std::endl;
        std::cin.clear();
        std::cin.ignore(1000,'\n');
    }
    int* randomArray = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
    {
        randomArray[i] = std::rand() % 1000 + 1;
        std::cout<<randomArray[i] << ' ';
        if((i + 1 ) % 10 == 0)
        {
            std::cout<<std::endl;
        }
    }
    int max = fillMaxArray(randomArray, arraySize);
    std::cout<<"Max number in the array is:"<<max<<std::endl;
    std::cout<<"The display of filled array: "<<std::endl;
    for(int i = 0; i < arraySize; i++)
    {
        std::cout<<randomArray[i]<<' ';
        if((i + 1) % 10 == 0)
        {
            std::cout<<std::endl;
        }
    }

    delete[] randomArray;
    return 0;
}

int fillMaxArray(int* arr, int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }

    for(int j = 0; j < size; j++)
    {
        arr[j] =  max;
    }

    return max;
}

