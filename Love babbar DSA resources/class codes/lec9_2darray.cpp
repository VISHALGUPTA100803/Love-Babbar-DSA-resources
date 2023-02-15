#include <iostream>
#include <limits.h>
using namespace std;
// linear search 2d array
bool findKey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    // value not present
    return false;
}
void printRowWiseSum(int arr[][3], int rows, int cols)
{ // pehle wale bracket main value chor sakte hain bas
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
void printColWiseSum(int arr[][3], int rows, int cols)
{ // pehle wale bracket main value chor sakte hain bas
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}
int getMax(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
void transpose(int arr[][3], int r, int c, int transarr[][3])
{
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            transarr[j][i] = arr[i][j];
        }
    }
}
void printArray(int arr[][3], int r, int c) {
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    // declare 2d array
    // int arr[3][3];
    // //initialisation
    // int brr[3][3] = { {1,2,3},{4,5,6},{2,4,8} };
    // cout<<brr[2][2]<<endl;
    // row wise print
    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<3;j++) {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // //col wise print
    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<3;j++) {
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // row wise input
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // col wise input
    //  int arr[3][3];
    //  int rows=3;
    //  int cols=3;
    //  for(int i=0;i<rows;i++) {
    //       for(int j=0;j<cols;j++) {
    //           cin>>arr[j][i];
    //       }

    //  }
    //  for(int i=0;i<rows;i++) {
    //      for(int j=0;j<cols;j++) {
    //          cout<<arr[i][j]<<" ";
    //      }
    //      cout<<endl;
    //  }

    // printRowWiseSum (arr, rows, cols);
    // printColWiseSum (arr, rows, cols);
    // cout<<findKey(arr,3,3,2);
    int transarr[3][3];
    cout << getMax(arr, rows, cols)<<endl;
    transpose(arr, rows, cols,transarr);
    printArray(transarr, rows, cols);
}