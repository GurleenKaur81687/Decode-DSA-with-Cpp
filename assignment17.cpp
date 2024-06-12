#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // int n;
    // cout << "enter number of cgaracters in string";
    // cin >> n;
    // char arr[n];
    // for(int i=0 ; i<n; i++){
    //     cin >> arr[i];
    // }
    // for(int i=0 ; i<n ; i++){
    //     cout << arr[i];
    // }
    // cout << endl;
    // for(int i=0 ; i<n ; i++){
    //     if(i%2!=0){
    //         arr[i] = '#';
    //     }
    // }
    // cout << endl;
    // cout << "modified string is "
    // for(int i=0 ; i<n ; i++){
    //     cout << arr[i];
    // }
    // int count = 0;
    // for(int i=0 ; arr[i]!='\0' ; i++){
    //     if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
    //         continue;
    //     }
    //     else{
    //         count++;
    //     }

    // }
    // cout << "the numbr of vowels in string are " << count << endl;

    // int i=0;
    // int j=n-1;
    // bool flag=true;
    // while(i<=j){
    //     if(arr[i]!=arr[j]){
    //         flag=false;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }
    // if(flag == false){
    //     cout << "not palindrome " << endl;
    // }
    // else cout << "is palindrome " << endl;

    //reverse second half of the string
    // string a;
    // cout << "enter the string ";
    // getline(cin,a);
    // reverse(a.begin()+a.size()/2,a.end());
    // cout << "the reversed string is "<< a << endl;

    //convert string to integer without builtin function
    string s = "456";
    int p=0;
    for(int i=0 ; i<s.size() ; i++){
        p *= 10;
        p += s[i]-48;
        cout << p << endl;
    }
    cout << "the number is " << p << endl;
    cout << s;
}