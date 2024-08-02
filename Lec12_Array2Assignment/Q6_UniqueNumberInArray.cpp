 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    //  Conditon
    for(int i=0; i<=n-1; i++){
        bool flag = true; // Unique hai element
        for(int j=0; j<=n-1; j++){
            if(j==i)
                continue;
            if(arr[i]==arr[j]){
                flag = false; // Unique nahi hai element
                break;
            }
        }
        if(flag==true)
            cout<<arr[i]<<endl; // Element unique hai check krne ke baad
    }
 }