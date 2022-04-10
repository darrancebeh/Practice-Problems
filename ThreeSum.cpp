#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int arr[6] = {1,3,4,6,7,9};
    int target = 14;

    int i;
    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        for(int j = i+1; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            for(int k = j+1; k < sizeof(arr)/sizeof(arr[0]); k++)
            {
                if(i != j && i != k && j != i && j != k && k != i && k != j)
                {
                    if(arr[i] + arr[j] + arr[k] == target)
                    {
                        cout << "( " << to_string(arr[i]) << ", " << to_string(arr[j]) << ", "<< to_string(arr[k]) << "." << " )" << endl;
                    }
                }
            }
        }
    }
    return 0;
}