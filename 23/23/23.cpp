#include <iostream>
using namespace std;

int insert_arr(int insertIndex)
{
    cin >> insertIndex;
    int result;
    result = insertIndex;
    return result;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = NULL;
    }

    int index = 0;

    for (int i = insert_arr(index); i < 10; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
#include <iostream>;

int main()
{
    int arr1size, arr2size;
    std::cin >> arr1size;
    std::cin >> arr2size;

    int* arr1 = new int[arr1size];

    for (int i = 0; i < arr1size; i++)
    {
        arr1[i] = i;
    }

    int* arr2 = new int[arr2size];

    for (int i = 0; i < arr2size; i++)
    {
        arr2[i] = i + 5;
    }

    int arr3size = 0;
    for (int i = 0; i < arr1size; i++)
    {
        for (int j = 0; j < arr2size; j++)
        {
            if (arr1[i] != arr2[j])
            {
                arr3size++;
                break;
            }
        }
    }

    int* arr3 = new int[arr3size];
    int arr3index = 0;
    for (int i = 0; i < arr1size; i++)
    {
        for (int j = 0; j < arr2size; j++)
        {
            if (arr1[i] != arr2[j])
            {
                arr3[arr3index] = arr1[i];
                arr3index++;
                break;
            }
        }
    }

    for (int i = 0; i < arr3size; i++)
    {
        std::cout << arr3[i] << std::endl;
    }
}
#include <iostream>;

int main()
{
    int arr1size, arr2size;
    std::cin >> arr1size;
    std::cin >> arr2size;

    int* arr1 = new int[arr1size];

    for (int i = 0; i < arr1size; i++)
    {
        arr1[i] = i;
    }

    int* arr2 = new int[arr2size];

    for (int i = 0; i < arr2size; i++)
    {
        arr2[i] = i + 5;
    }

    int arr3size = 0;
    for (int i = 0; i < arr1size; i++)
    {
        int count = 0;
        for (int j = 0; j < arr2size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            arr3size++;
        }
    }

    for (int i = 0; i < arr1size; i++)
    {
        int count = 0;
        for (int j = 0; j < arr2size; j++)
        {
            if (arr1[j] == arr2[i])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            arr3size++;
        }
    }

    int* arr3 = new int[arr3size];
    int arr3index = 0;
    for (int i = 0; i < arr1size; i++)
    {
        int count = 0;
        for (int j = 0; j < arr2size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            arr3[arr3index] = i;
            arr3index++;
        }
    }

    for (int j = arr2size - 1; j >= 0; j--)
    {
        int count = 0;
        for (int i = 0; i < arr1size; i++)
        {
            if (arr2[j] == arr1[i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            arr3[arr3index] = arr2[j];
            arr3index++;
        }
    }

    system("cls");

    for (int i = 0; i < arr3size; i++)
    {
        std::cout << arr3[i] << std::endl;
    }
}
#include <iostream>

int* clear_function(int* array, int arrSize)
{
    int index;
    std::cin >> index;
    for (int i = index; i < arrSize; i++)
    {
        array[i] = NULL;
    }

    return 0;
}

int main()
{
    int arrSize;
    std::cin >> arrSize;
    int* arr = new int[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = i + 1;
    }



    clear_function(arr, arrSize);

    for (int i = 0; i < 10; i++)
    {
        std::cout << *&arr[i];
    }
}