#include <iostream>
#include <string>
using namespace std;

int findMax(int arr[], int size)
{
    int maxval = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxval)
        {
            maxval = arr[i];
        }
    }
    return maxval;
}

int findMin(int arr[], int size)
{
    int minval = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minval)
        {
            minval = arr[i];
        }
    }
    return minval;
}

double findAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    double avg = static_cast<double>(sum) / size;
    return avg;
}

// it is bubble sorting algorithm that sorts the array in ascending order by repeatedly swapping adjacent elements if they are in the wrong order. The outer loop iterates through each element of the array, while the inner loop compares it with the next element and performs the necessary swaps to sort the array. After sorting, it prints the sorted array.

void sortArray(int arr[], int size){
    int temp;
    for(int i=0 ;i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//It is selective sorting algorithm that sorts the array in ascending order by comparing each element with the rest of the elements and swapping them if they are in the wrong order. The outer loop iterates through each element of the array, while the inner loop compares it with the subsequent elements and performs the necessary swaps to sort the array. After sorting, it prints the sorted array.

// void sortArray(int arr[], int size)
// {
//     int temp;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//         cout << arr[i] << " ";
//     }
// }

void reverseString(string s)
{
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}

int main()
{
    int arr[5];
    cout << "Enter 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Max : " << findMax(arr, 5) << endl;
    cout << "Min : " << findMin(arr, 5) << endl;
    cout << "Average : " << findAverage(arr, 5) << endl;
    cout << "Sorted : ";
    sortArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cin.ignore(); // to ignore the newline character left in the input buffer
    cout << endl;

    string name;
    cout << "Enter a string : ";
    getline(cin, name);
    cout << "Reversed : ";
    reverseString(name);
    cout << endl;
    return 0;
}