//C++ program to find the longest palindrome in a given string using the STL string and algorithms.

#include<iostream>
#include<string>
#include<algorithm>
//header file to use the algorithms and string functions
using namespace std;

string long_palindrome(string input)
//function definition
{
    string lp,s1,s2;
    //lp is a variable to store the longest palindrome
    for(int i=0;i<input.length();i++)
    {
        for(int j=i;j<input.length();j++)
        //iterate the i and i value to traverse through the string
        {
            s1=input.substr(i,j-i+1);
            //get the substring from the input string
            s2=s1;
            //copy the substring to another variable to reverse the string
            reverse(s2.begin(),s2.end());
            //reverse the substirng
            if(s1==s2 && s1.length() > lp.length())
            //check if the substring and the reversed string are equal and checks if its length is greater than lp
            lp=s1;
            //if true assign substring to lp
        }
    }
    return lp;
    //return the longest palindrome
}

int main()
{
    string input,lp;
    cout <<"Enter the string"<<endl;
    //get the input string from the user
    getline(cin, input);
    lp = long_palindrome(input);
    if(lp[0]=='\0')
    //check if lp is empty or not
        cout<<"No palindrome"<< endl;
    else
        cout<<lp<<endl;
    return 0;
}
