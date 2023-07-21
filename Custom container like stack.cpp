//Program to implement a custom container that behaves like a stack using the STL algorithms and data structures

#include <iostream>
#include <list>//header file to use list functions
using namespace std;

template <class T>
//Creating a container using class template
class  Custom_container{
    private:
        list <T> Cstack;
        //Creating a list to implement a custom container(stack)
    public:
    //Push, Pop, top, empty and size functions
        void push(T v) {
            Cstack.push_back(v);
            //push the arguments to the stack
        }
        void pop() {
            if(Cstack.empty())
                cout<<"Stack is empty"<<endl;
            Cstack.pop_back();
            //it checks if the stack is empty and then pop the top element in the stack
        }
        T& top() {
            if(Cstack.empty())
                cout<<"Stack is empty"<<endl;
            return Cstack.back();
            //return the top element if the stack is not empty
        }
        int ssize() {
            return Cstack.size();
            //return the size of the stack
        }
        int sempty() {
            return Cstack.empty();
            //check if the stack is empty or not and return 1/0
        }
};

int main() {

  Custom_container<int> s;
  //creating stack using custom container
  s.push(10);
  s.push(4);
  s.push(26);
  s.push(27);
  s.push(30);
  //Push elements to the stack
  cout<<"Top of the stack before pop : "<<s.top()<<endl;
  //print the top of the stack
  cout<<"Size of the stack before pop : "<<s.ssize()<<endl;
  //print the size of the stack
  s.pop();
  //pop elements to the stack
  cout<<"Top of the stack after pop : "<<s.top()<<endl;
  //print the top of the stack
  cout<<"Size of the stack after pop : "<<s.ssize()<<endl;
  //print the size of the stack
  return 0;
}
