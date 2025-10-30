#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = {12, 3, 5, 7, 19, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_val = INT_MIN;
    int min_val = INT_MAX;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
        if (arr[i] < min_val)
        {
            min_val = arr[i];
        }
    }


    cout << "Maximum Value: " << max_val << endl;
    cout << "Minimum Value: " << min_val << endl;

    return 0;
}

