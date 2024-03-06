#include<iostream>
using namespace std;
int main(){

// predict the output
     while('1' < '2'){
        cout << "in while loop" << endl;
    }   // infinite loop

//predict the output
     int t = 10;
    while(t /= 2){
        cout << "hello" << endl;
    } // hello hello hello

//predict the output
    for(int x = 1 ; x*x <= 10 ; x++)
    cout << "in for loop" << endl; //in for loop will be printed thrice

//predict the output
    int x = 10, y = 0;
    while( x >= y ){

        x--;
        y++;
        cout << x <<" " << y << endl;
    } //(9 1) (8 2) (7 3) (6 4) (5 5) (4 6)

//print sum of even digits of a number
    int x;
    cout << "enter the number ";
    cin >> x;

    int sum=0;
    int a=x;
    while(a>0){
        if((a%10)%2 == 0)
             sum += a%10;
        a /= 10;
    }
    cout << sum;

//sum of a number and its reverse
     int x;
    cout << "enter the number ";
    cin >> x;

    int rev = 0;
    int a = x;

    while(a>0){
       rev = rev * 10 + (a % 10);
        a /= 10;
    }
    cout << rev;
    cout << endl << rev+x;

//factorial of first n numbers
     int n;
   cout <<"enter a number";
   cin >> n;
    int fact = 1;
    for(int j=1 ; j<=n ; j++){ 
        fact = 1;
        for(int i=j ; i>0 ; i--){
        fact = fact*i;
        }
    
   cout << fact << endl;
    }

//first n fibonacci numbers
     int n;
   cout <<"enter a number";
   cin >> n;
   int sum = 1;
   int a,b;
   a =0; b = 1;
   
   for(int i=1 ; i<=n ; i++){
        sum = a+b;
        cout << sum <<"   ";
        a = b;
        b = sum;
   }

   //armstrong numbers between 1 to 500
   for(int i=1 ; i<=500 ; i++){
        int x=0 , temp=i;
        while(temp>0){
            int m = temp%10;
            x += m*m*m;
            temp /= 10;
        }
        if(i == x) cout << i <<endl;
    }
}