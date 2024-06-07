#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){

    //wap to store 10 at every index od a 2-d matrix with 5 rows and 5 columns
    int arr1[5][5];
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            arr1[i][j] = 10;
        }
    }

    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cout << arr1[i][j] <<" ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    //wap to add two matrices and store result in third matrix
    int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr3[3][3] = {10,11,12,1,3,14,15,16,17};
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            arr2[i][j] += arr3[i][j];
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << arr2[i][j] <<" "; 
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;

    //wap to find largest element in a 2-d array
    int arr4[4][5] = {5,41,3,14,65,21,6,1,15,3,152,3,1,31,2232,21,6,21,6,46};
    int max1 = INT_MIN;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(arr4[i][j]>max1){
                max1 = arr4[i][j];
            }
        }
    }
    cout << "the maximum element is " << max1 << endl;

    //wap to print row number having maximum sum
    int arr5[5][3] = {5,1,31,47,6,21,3,56,2,46,2,47,8,1,3};
    int rsum = 0;
    int max_row = -1;
    for(int i=0 ; i<5 ; i++){
        int temp = 0;
        for(int j=0 ; j<3 ; j++){
            temp += arr5[i][j];
        }
        if(temp > rsum){
            rsum = temp;
            max_row = i;
        }
    }
    cout << "row having maximum sum is " << max_row << endl;

    //function that displays elements of middle rows and middle columns
    int arr6[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(i == 3/2 || j==3/2){
                cout << arr6[i][j]<<" ";}
            else cout << "  ";
        }    
        cout << endl;
    }

    //given a matrix. Write a program to return sum from (l1,r1) to (l2,r2)
    int arr7[4][4] = {1,2,-3,4,0,0,-4,2,1,-1,2,3,-4,-5,-7,0};
    int l1 = 1;
    int l2 = 3;
    int r1 = 2;
    int r2 = 3;
    int sum = 0;
    for(int i=min(l1,l2) ; i<=max(l1,l2) ; i++){
        for(int j=min(r1,r2) ; j<=max(r2,r1) ; j++){
            sum += arr7[i][j];
        }
    }
    cout << "the sum of rectangle is " << sum;

}