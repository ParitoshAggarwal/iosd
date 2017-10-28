//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/tutorial/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s.push(p);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}

//    INPUT
//    5
//    1 2 3 4 5
//    OUTPUT
//    5 4 3 2 1







#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s1.push(p);
    }
    stack<int> s2;
    s1.swap(s2);
    cout<<"stack1 after swapping ";
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl<<"stack2 after swapping ";
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }


    return 0;
}

//    INPUT
//    5
//    1 2 3 4 5
//    OUTPUT
//    stack1 after swapping 
//    stack2 after swapping 5 4 3 2 1

