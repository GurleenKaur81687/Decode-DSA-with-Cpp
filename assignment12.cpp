#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){

    //count the number of elements strictly greater than x
    int arr[6] = {3,5,7,3,9,8};
    int x = 4;
    int count = 0;
    for(int i=0 ; i<6 ; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout << "number of elements stictly greater than x are " << count << endl;

    //find largest 3 elements in the array
    int max1 , max2 ,max3;
    max1 = max2 = max3 = INT_MIN;
    for(int i=0 ; i<6 ; i++){
        if(arr[i]>max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2){
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i]>max3){
            max3 = arr[i];
        }
    }
    cout << "maximum three elements are " << max1 << " " << max2 << " " << max3 << endl;
    
    //check if given array is sorted or not
    bool flag = true;
    for(int i=0 ; i<5 ; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout << "array is sorted " << endl;
    }
    else {
        cout << "array is not sorted " << endl;
    }

    // difference between sum of elemts at even indices to sum of elemets at odd indices

    int even , odd;
    even = odd = 0;
    for(int i=0 ; i<6 ;i++){
        if(i%2 == 0){
            even += arr[i];
        }
        else{
            odd += arr[i];
        }
    }
    cout << "the difference between sum of elemets at even indices and odd indices are " << even - odd << endl;

    //change all odd indexed elemts to its second multiple and icrement even indexed elemts by 10
    for(int i=0 ; i<6 ; i++){
        if(i%2 == 0){
            arr[i] += 10;
        }
        else{
            arr[i] *= 2;
        }
    }
    cout << "the new array is ";
    for(int i=0 ; i<6 ;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    //find unique element in an array where all elemts are being repeated twice but one elemet is unique
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(8);
    for(int i=0 ; i<v1.size()-1 ; i++){
        int count = 0;
        for(int j=0 ; j<v1.size() ; j++){
            if(v1[i] == v1[j]){
                count++;
            }
        }
        if(count == 1){
            cout << v1[i] << "is unique" << endl;
        }
    }
    bool flag1 = true;
    //check if given array is palindrome
    for(int i=0,j=v1.size()-1 ; i<=j ; i++,j--){
        if(v1[i]!=v1[j])
        flag1 = false;
        break;
    }
    if(flag1 == true){
        cout << "is palindrome " << endl;
    }
    else{
        cout << "not palindrome " << endl;
    }
}