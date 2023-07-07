//
//  cyclic.cpp
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
    int*arr=NULL;
    int*arr2=NULL;
    int*arr3=NULL;
    int i=0, size, k = 0, g, z, d;
    bool iscyclic = false;
    char ch;
    string temp;
    
    cout<<"Enter the array length: ";
    cin>>size;
    
    cout<<"First array: ";
    arr=new int[size];
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
    
    cout<<"Second array: ";
    arr2=new int[size];
    i = 0;
    do
    {
        cin>>arr2[i];
        i++;
        ch = cin.get();
    } while(ch != '\n' && i < size);
    
    if(i == size && ch != '\n')
        getline(cin, temp);
    else if(i < size && ch == '\n')
    {
        for(i; i<size; i++)
            arr2[i]=0;
    }
    
    arr3=new int[size*2];
    for(int k=0; k<size*2; k++)
    {
        if(k<size)
        {
            arr3[k] = arr[k];
        }
        else
        {
            arr3[k] = arr[k-size];
        }
    }
    
    
    for(g=0; g<size*2 && iscyclic == false; g++)
    {
        if(arr3[g] == arr2[k])
        {
            iscyclic = true;
            z = g;
        }
    }

    if(iscyclic == true)
    {
        d = z;
        for(k; k<size; k++, d++)
        {
            if(arr2[k] != arr3[d])
                iscyclic = false;
        }
    }
    
    if(iscyclic == true)
    cout<<"Shift by "<<z<<endl;
    else if(iscyclic == false)
    {
        cout<<"Not a shift!"<<endl;
    }
    
    
    
    return 0;
}
