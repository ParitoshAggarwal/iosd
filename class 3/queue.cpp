// https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/tutorial/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s.push(p);
    }
    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }

    return 0;
}

//    INPUT
//    5
//    1 2 3 4 5
//    OUTPUT
//    1 2 3 4 5




#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s1.push(p);
    }
    queue<int> s2;
    s1.swap(s2);
    cout<<"queue1 after swapping ";
    while(!s1.empty()){
        cout<<s1.front()<<" ";
        s1.pop();
    }
    cout<<endl<<"queue2 after swapping ";
    while(!s2.empty()){
        cout<<s2.front()<<" ";
        s2.pop();
    }


    return 0;
}

//    INPUT
//    5
//    1 2 3 4 5
//    OUTPUT
//    queue1 after swapping
//    queue2 after swapping 1 2 3 4 5

