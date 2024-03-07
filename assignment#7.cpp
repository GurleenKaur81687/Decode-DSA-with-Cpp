#include<iostream>
using namespace std;
int main(){
    
    //same number rectangle
    int rows , columns;
  cout << "enter number of rows ";
  cin >> rows;
  cout << "enter number of columns ";
  cin >> columns;

  for(int i=1 ; i<=rows ; i++){
    for(int j=1 ; j<=columns ; j++){
      cout << i;
    }
    cout << endl;
  }

  //reverse number triangle
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<=rows-i+1 ; j++){
    cout << " " << j << " ";
  }
  cout << endl;
 }

 //alphabet triangle
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<=i ; j++){
    cout << (char)(j+64);
  }
  cout << endl;
 }

 //number and alphabet triangle
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<=i ; j++){
    if(i%2 != 0){
      cout << j;
    }
    else cout << (char)(j+64);
  }
  cout <<endl;
 }

 //double triangle
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<=i ; j++){
    cout << "*";
  }
  cout << endl;
 }
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<rows-i+1 ; j++){
      cout << "*";
  }
  cout << endl;
 }

 //rhombus
 for(int i=1 ; i<=rows ; i++){
    for(int j=1 ; j<rows+1-i ; j++){
        cout << " ";
    }
    for(int k=1 ; k<=rows ; k++){
        cout << "*";
    }
    cout << endl;
 }

 //outline rectngle
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<=rows ; j++){
    if(i==1 || j==1 || j==rows || i==rows) cout << " * ";
    else cout << "   ";
  }
  cout << endl;
 }
 
 //number triangle
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<=i ; j++){
    cout << j;
  }
  cout << endl;
 }

 //flipped alphabet triangle
 for(int i=1 ; i<=rows ; i++){
  for(int j=1 ; j<rows-i+1 ;j++){
    cout << " ";
  }
  for(int j=1 ; j<=i ; j++){
    cout << (char)(j+64);
  }
  cout << endl;
 }

 //numbers reversed triangle
 for(int i=1 ; i<=rows ; i++){
  int m=i;
  for(int j=1 ; j<=i ; j++){
  
    cout << m;
    m--;
  }
  cout << endl;
 }

 //big triangle
 for(int i=1 ; i <= rows ; i++){
  for(int j=1 ; j<rows-i+1  ;j++){
    cout << "   ";
  }
  for(int k=1 ; k<=i ; k++){
    cout << " * ";
  }
  cout << endl;
 }
 for(int i=1 ; i<rows ; i++){
  for(int j=1 ; j<=i ; j++){
    cout << "   ";
  }
  for(int k=1 ; k<rows+1-i ; k++){
    cout << " * ";
  }
  cout << endl;
 }
}