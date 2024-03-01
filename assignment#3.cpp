#include<iostream>
using namespace std;
int main(){
    
    //greatest of two integers
     int a , b;

    cout << "enter the numbers ";
    cin >> a >> b;

    if( a > b) cout << " the greatest number is" << a;
    else cout << " the greatest number is" << b;

    //check weather circumference is greater than area
    float radius;
    cout << "enter the radius of circle ";
    cin >> radius;

    float circumference , area;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    if ( circumference > area) cout <<"circumference is greater than area";
    else cout << "the area is greater";

    //leap year or not
    int year;
    cout << "enter the year";
    cin >> year;

    if( year % 4 == 0 ) cout << "leap year";
    else cout << "not a leap year";

    //check weather area of rectabgle is greater than perimeter
     float length , breadth;
    cout << "enter length ";
    cin >> length;
    cout << "enter breadth ";
    cin >> breadth;

    float area , perimeter;
    area = length * breadth;
    perimeter = 2 * ( length + breadth);

    if( area > perimeter) cout << "area is greater than the perimeter";
    else cout << "the perimeter is greater";

    //equilateral , isosceles or scalene triangle
    
    int a , b, c;
    cout << "enter the sides of the triangle ";
    cin >> a >> b >> c;

    if ( a != b && a!= c && b !=c) cout << "scalene";
    else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)) cout << "isosceles";
    else if (a==b && b==c && c==a) cout << "equilateral";

    //least marks out of 3 students
    int A , B , C;
    cout << "enter marks of first person ";
    cin >> A;
    cout << "enter marks of second person ";
    cin >> B;
    cout << "Enter marks of third person ";
    cin >> C;

    if ( A < B){
        if ( A < C){
            cout << "A has the least mmarks";
        }
        else {
            cout  << "C has the least marks";
        }
    }

}