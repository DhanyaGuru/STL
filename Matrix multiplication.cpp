//C++ program to performs matrix multiplication using the STL vector and algorithms

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
//header file to use vector and algorithm
using namespace std;

vector<vector<int>>matrix_mul(vector<int>& A,vector<int>& B,int rA,int cA,int cB);
//function declaration

int main()
{
    int rowA,colA,rowB,colB;
    cout<<"Enter the number of rows in matrix A"<<endl;
    cin >>rowA;
    cout<<"Enter the number of columns in matrix A"<<endl;
    cin >>colA;
    cout<<"Enter the number of rows in matrix B"<<endl;
    cin >>rowB;
    cout<<"Enter the number of columns in matrix B"<<endl;
    cin >>colB;
    //get the number of rows and columns in matrix A and B
    vector<int>A(rowA*colA);
    vector<int>B(rowB*colB);
    //create two vectors A and B to store matrix value
    cout<<"Enter the elements of matrix A"<<endl;
    for (int i=0;i<rowA;i++)
    {
        for (int j=0;j<colA;j++)
        {
            cin>>A[(i*colA)+j];
        }
    }
    //get the vector A(matrix) element from the user
    cout<<"Enter the elements of matrix B"<<endl;
    for (int i=0;i<rowB;i++)
    {
        for (int j=0;j<colB;j++)
        {
            cin>>B[(i*colB)+j];
        }
    }
    //get the vector B(matrix) element from the user
    vector<vector<int>>C=matrix_mul(A, B, rowA, colA, colB);
    //create a vector of type vector to store the value
    //call the matrix_mul function
    cout<<"Matrix A"<<endl;
    for (int i=0;i<rowA;i++)
    {
        for (int j=0;j<colA;j++)
        {
            cout<<A[(i*colA)+j]<<" ";
        }
        cout<<endl;
    }
    //print the vector A(matrix)
    cout<<"Matrix B"<<endl;
    for (int i=0;i<rowB;i++)
    {
        for (int j=0;j<colB;j++)
        {
            cout<<B[(i*colB)+j]<<" ";
        }
        cout<<endl;
    }
    //print the vector B(matrix)
    cout<<"Matrix C"<<endl;
    for(vector<int>&i:C)
    {
        for(int j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //print the vector C(matrix)
    return 0;
}

vector<vector<int>>matrix_mul(vector<int>& A,vector<int>& B,int rA,int cA,int cB)
//function definition to multiply the matrix A and matrix B
//the function matrix_mul is of the type vector<vector<int>> since it return the multiplied matrix
{
    vector<vector<int>>c(rA,vector<int>(cB, 0));
    //create a vector to store the multiplied matrix
    for(int i=0;i<rA;i++)
    {
        for(int j=0;j<cB;j++)
        {
            for(int k=0;k<cA;k++)
            {
                //c[i][j] += A[i][k]*B[k][j];
                c[i][j] += A[i*cA+k]*B[k*cB+j];
                //multiply the one row in matrix A and one column in matrix B
            }
        }
    }
    return c;
    //return the matrix C(A x B)
}
