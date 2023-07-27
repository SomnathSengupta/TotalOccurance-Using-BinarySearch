#include<iostream>
using namespace std;
int binarySearch(int*, int, int, bool); //Function Prototype
int main()
{
    int n; // Declaring Array Size
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; //Taking Array Input
    }
    int key;
    cin >> key; 
    cout << binarySearch(arr, n, key, false) - binarySearch(arr, n, key, true) + 1; //Printing Total Occurance
    return 0;
}
int binarySearch(int*arr, int n, int key, bool check) //Function Defination
{
    int low = 0, high = n-1, result=-1;
    while (low <= high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid] == key)
        {
            result = mid;
            if (check)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else if (key < arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;
}