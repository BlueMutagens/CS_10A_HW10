//
//  main.cpp
//  Homework10
//
//  Created by Sean Belingheri on 11/3/22.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size], i = 0, k, g = 0, num1, num2, index1, index2;
    char ch;
    string temp;
    
    cout<<"Enter "<<size<<" numbers: ";
    do
    {
        cin>>arr[i];
        i++;
        ch = cin.get();
    } while(ch != '\n' && i < size);
    
    if(i == size && ch != '\n')
        getline(cin, temp);
    else if(i < size && ch == '\n')
    {
        for(i; i<size; i++)
            arr[i]=0;
    }
    
    
    for(int x=0; x < size; x++)
    {
        g += arr[x];
    }
    
    for(int x=0; x < size; x++)
    {
        for(int a=0; a < size; a++)
            if(a!=x)
            {
               k = arr[x]-arr[a];
               if(k<g && k>=0)
               {
                   g=k;
                   num1=arr[a];
                   index1=a;
                   num2=arr[x];
                   index2=x;
               }
            }
    }
   cout<<"The closest numbers are "<<num1<<" at index "<<index1<<" and "<<num2<<" at index "<<index2<<endl;
    return 0;
}

