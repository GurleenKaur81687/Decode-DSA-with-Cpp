#include<iostream>
using namespace std;
int main(){

    // print odd numbers from 1 to 100

    // using for loop
    //for(int i=1 ; i<=100 ; i+=2) cout << i << "   ";   

    // using while loop    
    //int i=1;
    // while(i<100){
    //     cout << i << "    ";
    //     i += 2;
    // }

    //using do while loop
    // int i=1;
    // do{
    //     cout << i <<"    ";
    //     i += 2;
    // } while(i<100);

    //print all numbers between 1 to 100 divisible by 3
    //using for loop
    // for(int i=1 ; i<=100 ; i++){
    //     if(i%3 == 0){
    //         cout << i << "   ";
    //     }
    // }

    //using while loop
    // int i=3;
    // while(i<=100){
    //     cout << i <<"     ";
    //     i += 3;
    // }

    //using do while loop
    // int i=1;
    // do{
    //     if (i%3 == 0){
    //         cout << i  << "   ";
    //     }
    //     i++;
    // }while(i<=100);

    //print n table
    // int n;
    // cout << "enter number";
    // cin >> n;
    // for(int i=1 ; i <= 10 ; i++){
    //     cout << i*n << "  ";
    // }
    // int i = 1;
    // while(i<11){
    //     cout << i*n << "  ";
    //     i++;
    // }
    // int i = 1;
    // do{
    //     cout << i*n <<"   ";
    //     i++;
    // } while(i<=10);

    // print the following ap 4,7,10,13,16.....
    // int n;
    // cout<< "enter number of terms" ;
    // cin >> n;

    // for(int i=4 ; i<=3*n+1 ; i += 3){
    //     cout << i << "   ";
    // }

    // int i=4;
    // while(i<=3*n+1){
    //     cout << i << "   ";
    //     i += 3;
    // }

    // display the following gp upto n terms 3,12,48
    // int n;
    // cout << "enter the number of terms ";
    // cin >> n;
    // int a = 3;
    // for(int i=1 ; i<=n ; i++){
    //     cout << a << " ";
    //     a *= 4;
    // }

    //print ascii and their equivalent
    for(int i=65 ; i<91 ; i++){
        cout << i << " " << (char)i << endl;
    }
    int j = 97;
    while(j<=122){
        cout << j << ' ' << (char)j << endl;
        j++;
    }
}