//C++ program to find the Kth smallest element in an unsorted array using the STL priority_queue

#include <iostream>
#include<algorithm>
#include <vector>
#include <queue>
//header file to use vector and queue
using namespace std;

int fun(const vector<int>& v,int ks)
//function definition to find the kth  smallest element
{
    priority_queue<int, vector<int>> kth_s_e;
    //create a priority queue to find the kth smallest
    for (int i:v)
    {
        kth_s_e.push(i);
        //push the vector elements to the priority queue
        if (kth_s_e.size() > ks)
        {
            kth_s_e.pop();
        }
        //pop the queue elements until the kth position
    }

    return kth_s_e.top();
    //return the top element in the queue after pop the elements until k
}

int main()
{
    int n,ks,ke;
    cout<<"Enter the size of the vector"<<endl;
    cin>>n;
    //get the number of elements in the vector
    cout<<"Enter the Kth position"<<endl;
    cin>>ks;
    //get the position to find the kth smallest element
    vector<int> v(n);
    //create an vector to store n elements
    cout<< "Enter the vector elements"<<endl;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    //get the vector elements from the user at the run time
    sort(v.begin(),v.end());
    for(int i:v)
        cout<<i<<" ";
    cout<<"\n";
    ke=fun(v,ks);
    //call the function to find the kth smallest elements in the unsorted array(vector)
    cout<<"The "<<ks<<"th smallest element is: "<<ke<<endl;
    //print the kth smallest element in the array(vector)
    return 0;
}

