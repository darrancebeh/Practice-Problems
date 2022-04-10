#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[2][3] = {{5,3,7}, {1,4,2}};
    int newarr[6];
    int k = 0;

    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            newarr[k] = arr[i][j];
            k++;
        }
    }

    int x;
    for(x = 0; x < rows * cols; x++)
    {
        cout << newarr[x];
    }
    return 0;
}   