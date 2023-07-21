
#include <iostream>
#include<set>
using namespace std;

int main()
{
    int a[]={20,45,68,30,33,67,55,23,20,36,5,22,86,10,8,48,20,76,90,41,56,68,54,36,76,33,90,5,8};
    //create an array and initialize with array elements
    cout<<"Array elements"<<endl;
    for(int i:a)
        cout<<i<<" ";
    cout<<"\n";
    //print the array elements
    int sizeofarray = sizeof(a)/sizeof(a[0]);
    //get the size of the array using sizeof() function
    cout<<"The number of elements in the array "<<sizeofarray<<endl;
    //print the number of elements in the array
    set<int> n;
    //create a set which only stores the unique elements
    for(int i=0;i<sizeofarray;i++)
        n.insert(a[i]);
    //insert the array elements one by one to the set
    //it will not insert duplicate elements
    cout<<"Number of unique elements in the array "<<n.size()<<endl;
    //print the number of elements int the set(i.e no.of unique elements)
    return 0;
}
