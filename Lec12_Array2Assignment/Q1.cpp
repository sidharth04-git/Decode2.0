// Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    int n = v.size();
    for(int i=0; i<=n-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    int x;
    cout<<"Enter Target : ";
    cin>>x;
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>x)
            count++;
    }
    cout<<"elements strictly greater than x are : "<<count;
}