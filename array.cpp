#include <iostream>

using namespace std;


int main(){

    cout << "1D array" << endl;
    int arr[] = {12, 42, 56, 85, 9};
    for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    string arr2[5] = {"Hello", "World", "Ravi"};
    for (int j = 0; j < sizeof(arr2)/ sizeof(arr2[0]); j++)
    {
        cout << arr2[j] << endl;
    }

    cout << "2D array" << endl;

    int arr_2d[3][3] = {
        {1, 5, 9},
        {7, 5, 3},
        {8, 5, 2}
    };
    
    for (int i=0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++ ){
        for (size_t j = 0; j < sizeof(arr_2d[0]) / sizeof(arr_2d[0][0]); j++)
        {
           cout << arr_2d[i][j] << endl;
        }
    }

    return 0;

}