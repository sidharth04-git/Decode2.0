 // using two pointer i and j
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
    bool flag = true; // Palindrome Hai
    int i = 0;  // Points at 0th idx
    int j = n-1; // Points at last idx
    while(i<j){
        if(arr[i]!=arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true)
        cout<<"Array is Palindrome";
    else
        cout<<"Array is Not Palindrome";
}