#include<iostream>
using namespace std;
int main(){

    //minimum number of notes
    int x;
    cout << "enter the amount";
    int n1 , n2 , n5 , n50 , n100 , n200 , n500;
    n1 = n2 = n5 = n50 = n100 = n200 = n500 = 0;
    cin >> x;
    switch(x >= 500){
        case 1:
            cout << "500 notes " << x/500 << endl;
            x -= x/500*500;
    }
    switch(x >= 200){
        case 1:
            cout << "200 notes " << x/200 << endl;
            x -= x/200*200;
    }
    switch(x >= 100){
        case 1:
            cout << "100 notes " << x/100 << endl;
            x -= x/100*100;
    }
    switch(x >= 50){
        case 1:
            cout << "50 notes " << x/50 << endl;
            x -= x/50*50;
    }
    switch(x >= 5){
        case 1:
            cout << "5 notes " << x/5 << endl;
            x -= x/5*5;
    }
    switch(x >= 2){
        case 1:
            cout << "2 denomination currency " << x/2;
            x -= x/2*2;
    }
    switch(x >= 1){
        case 1:
            cout << "1 denomination notes " << x/1;
            
    }

    //predict the output 
    int x = 3;
    float y = 3.0;
    if(x == y)
        cout << "x and y are equal";
    else
        cout << "x and y are not equal"; 
    // x and y are equal

    //predict the output
    int test = 0;
    cout << "first character " << '1' << endl;
    cout << "second character " << (test?3:'1') << endl; // 49

    //predict the output
    int a=18 ; int b=12;
    bool t= (a>20 && b<15)?true:false;
    cout << "value of t " << t; //0

    //predict the output
    int number = -4;
    char result;
    result = number>0 ? 'p':'n';
    cout << result << endl; // n
    return 0; 

}