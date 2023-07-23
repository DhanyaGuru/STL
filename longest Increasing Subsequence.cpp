//C++ program to print the longest increasing subsequence in a given array using the STL algorithms and data structures.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void print(vector<int>&a)
//print function is defined, which takes a reference to a vector of integers (vector<int>& a)
{
    cout<<"Longest Increasing Subsequence\n";
    for(int i:a) {
        cout<<i<< " ";
        //prints the elements of the vector, representing the longest increasing subsequence
    }
    cout<<endl;
}

vector<int>longestIncreasingSubsequence(vector<int>& arr)
{
    vector<int>a;
    //vector is created to store the longest subsequence
    for (auto& i:arr) {
        auto k=upper_bound(a.begin(),a.end(),i);
        //using the upper_bound algorithm the code finds the first element in vector a that is greater than i
        //If no such element is found, upper_bound returns an iterator to the end of the vector a.
        if(k== a.end()) {
            a.push_back(i);
            //it push the element to the new vector
        } else {
            *k=i;
        }
    }
    print(a);
    //function print(a) is called to print the longest increasing subsequence
}

int main() {
    vector<int>arr={10,22,9,21,33,50,41,60,80};
    //create and declare the vector called arr
    vector<int>a=longestIncreasingSubsequence(arr);
    //longestIncreasingSubsequence function is called with the arr as an argument
    //resulting vector is assigned to another vector a
    return 0;
}
