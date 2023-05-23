#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void arr_sorted(int arr[], int len)
{
    int temp;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int len = 10;
    int arr[len];
    int sorted_arr[len];

    for (int i = 0; i < len; i++)
    {
        cout << "Enter the value of " << i + 1 << " :";
        cin >> arr[i];
    }
    arr_sorted(arr, len);

    return 0;
}