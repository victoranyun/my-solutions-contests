/*
 
 Created by V on 2018-02-13.
 Copyright Â© Victor Yun
 
 NAME="main.cpp"; c++ ~/Desktop/Codes/"$NAME" -o ~/Desktop/Codes/Compiled/"$NAME" && ~/Desktop/Codes/Compiled/"$NAME"
 
 */

#include <iostream>
#include <algorithm>
using namespace std;

auto main () -> int
{
    long long int n;
    long long int arr[1001] = {0};
    long long int arr2[1001] = {0};
    cin >> n;
    for (long long int i = 0; i < n; ++i)
    {
        long long int temp;
        cin >> temp;
        arr[temp]++;
        arr2[temp]++;
    }
    sort(arr2, arr2+1001);
    long long int num = arr2[1000];
    long long int num2 = arr2[999];
    long long int store, store2;
//    for (int i = 1; i <= 10; ++i)
//                cout << arr[i] << "\t";
//                cout << endl;
//                cout << num2 << endl; // 2
//                cout << num << endl; // 3
    for (long long int i = 1000; i >= 1; --i)
    {
        if (arr[i] == num2)
        {
            store = i;
            break;
        }
    }
    for (long long int i = 1; i <= 1000; ++i)
    {
        if (arr[i] == num)
        {
            store2 = i;
            break;
        }
    }
    long long int final = abs(store2-store);
    long long int store3, store4;
    for (long long int i = 1000; i >= 1; --i)
    {
        if (arr[i] == num)
        {
            store3 = i;
            break;
        }
    }
    for (long long int i = 1; i <= 1000; ++i)
    {
        if (arr[i] == num2)
        {
            store4 = i;
            break;
        }
    }
    long long int final2 = abs(store3-store4);
    if (final2 > final)
    {
        cout << final2 << endl;
    }
    else if (final2 < final)
    {
        cout << final << endl;
    }
    else
    {
        cout << final << endl;
    }
    }
    /* 
     10
     9
     8
     7
     6
     7
     8
     9
     6
     8
     4
     */