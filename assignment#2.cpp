#include<iostream>
using namespace std;
int main(){

    // predict output of the following
    int x;
    cout<<"Enter the first number : \n";
    cin >> x;
    int y,m;
    cout<< "Enter the second number and value for taking modulus\n";
    cin >> y >> m;
    int z = ( x * y ) % m;
    cout << "output is: " << z; //0

    //predict the output of the following code
    int x;
    cout << "Enter first number \n";
    cin >> x;
    int y;
    cout << "Enter second number \n";
    cin >> y;
    cout << ( x != y) << " " << ( x >= y); // boolean value 1 1

    //predict the output
    int x,y;
    cin >> x >> y;

    x += y;
    x -= y;
    x %= y;

    cout << x;    // 1

    // volume of a cylinder
    float radius;
    float height;
    float volume;

    cout<< "Enter radius and height of cylinder";

    cin >> radius >> height;

    volume = 3.14 * radius * radius * height;
    cout << volume;

    // difference between ASCII characters
    char ch1 , ch2;
    cout<< " Enter first character";
    cin >> ch1;
    cout<< " Enter second character";
    cin >> ch2;

    int x;
    x = ch1 - ch2;

    cout<< " The difference between these characers is" << x;

    //predict the output
    int i;
    i = ( 4 + 7 / 5 * 6 * 6 + 9) % 100;
    cout << i; //49

}