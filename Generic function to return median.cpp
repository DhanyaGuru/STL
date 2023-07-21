//C++ program to implement a generic function that takes a container of integers and returns the median value using the STL algorithms.

#include <iostream>
#include<vector>
//header file to use vector functions
#include<bits/stdc++.h>
//header file to use sort(we can also use #include<algorithm>)
using namespace std;

template <typename T>
//create a function template / generic function to get the vector and find the median of that vector
double median(vector<T>& v)
//this function with have a vector as parameter
{
    int s,midr,midl;
    double m;
    s=v.size();
    //get the size of the vector
    if(s%2==0)
    //if the no.of elements is even add the 2 mid element and divide by 2 to get median
    {
        midr=s/2;
        midl=midr-1;
        m=(v[midl]+v[midr])/2.0;
    }
    else
    //if the no.of elements is odd the mid element is the median
        m = v[s/2];
    return m;
    //find the median and return the median value
}

int main()
{
    vector<int> v;
    //create a vector container to store integer elements
    int x,s;
    cout<<"Enter size of the vector"<<endl;
    //get number of elements in the vector
    cin>>s;
    cout<<"Enter the vector elements"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    //get the vector elements from the user and push it into the vector using push_back()
    double res=median(v);
    //get the median value from the function template that as been created
    cout << "The median of the vector is "<<res<<endl;
    //print the median value
    return 0;
}
