#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}

//    INPUT 
//    5
//    1 2 3 4 5
//    OUTPUT
//    1 2 3 4 5
