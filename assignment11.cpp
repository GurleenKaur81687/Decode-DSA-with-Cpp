#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[6] = {6,7,4,6,8,9};

    //product of all elements
    int product = 1;
    for(int i=0 ; i<6 ; i++){
        product = product*arr[i];
    }
    cout << product << endl;

    //minumum value
    int min = INT_MAX;
    for(int i=0 ; i<6 ; i++){
        if(arr[i] < min) min=arr[i];
    }
    cout << min << endl;

    //duplicates
    bool dup = false;
    for(int i=0 ; i<6 ; i++){
        for(int j=i+1 ; j<6 ; j++){
            if (arr[i] == arr[j]) dup = true;
        }
    }
    if (dup==true) cout << "duplicates found";
    else cout << "duplicates not found";

    //wap to find smallest missing positive element in sorted array that contains only positive elements
    int sorted_arr[10] = {1,2,3,4,5,6,8,9,10,11};
                //method 1
    bool flag = false;
    for(int i=0 ; i<10 ; i++){
        if(arr[i] != i+1){
            flag = true;
            cout << "missing element" << i+1;
            break;
        }
    }

    //predict the output
        int sub[50] , i;
        for(i=0 ; i<=48 ; i++){
            sub[i] = i;
            cout << sub[i] << endl;
        }
    

    //second largest element in array in one pass
    int max1 , max2 ;
    max1 = max2 = INT_MIN;
    for(int i=0 ; i<6 ; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
    }
    cout << "maximum element is " << max2;

}

