// Problem Statement :  Write a C++ program to find the largest element of a given array of integers.

#include <iostream>
using namespace std;

int take_input()
{
    int a;
    cout << "Howmany value you can store : ";
    cin >> a;
    return a;
}

void store_value(int arr[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "Input ";
        cin >> arr[i];
    }
}

void print_value(int arr[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << arr[i];
    }
}

void largest_element(int arr[100], int num)
{
    int value;
    value = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] > value)
        {
            value = arr[i];
        }
    }
    cout << "\n Largest Number : " << value;
}

int main()
{
    int num;
    int arr[100];
    num = take_input();
    store_value(arr, num);
    print_value(arr, num);
    largest_element(arr, num);
}