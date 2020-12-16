#include <bits/stdc++.h>
#include <algorithm>
#include <hashtable.h>
#include <math.h>
#include <vector>
#include <string.h>
using namespace std;
#define Nmax INT_MAX;
#define Nmin INT_MIN;
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//     }
// }

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n, i, j, k, p, l, count = 0, flag = 0;
    cin >> n;
    int arr[n];
    int minNo = Nmax;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        j=i-1;
        while (arr[j]>arr[current]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=arr[current];
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
