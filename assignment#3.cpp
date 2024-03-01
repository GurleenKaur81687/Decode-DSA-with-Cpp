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

   // tell weather the point lies on x axis, origin or y axis
   int x , y;
    cout << "enter x coordinates ";
    cin >> x;
    cout << "enter y coordinates ";
    cin >> y;
    if (x == 0 && y !=0){
        cout << "the point lies on y axis";
    }
    else if(y == 0 && x != 0) cout << "the point lies on x axis";
    else if (x == 0 && y==0) cout <<"the point lies on origin";
    else cout << "the point lies somewhere in the graph";

    //given coordinates of three points, check weather they form a straight line or not
    int x1 , y1;
    cout << "enter coordinates of first point ";
    cin >> x1 >> y1;
    int x2 , y2;
    cout << "enter oordinates of second point ";
    cin >> x2 >> y2;
    int x3 , y3;
    cout << "enter coordinates of third point ";
    cin >> x3 >> y3;

    float slope1 , slope2;
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);
    if (slope1 == slope2) cout << "yes the points are collinear";
    else cout << "no, they are not collinear";

    //cheak weather a character is an alphabet , digit or a special character
    char character;
    cout << "enter a character ";
    cin >> character;
    if (character >= 65 && character <= 90) cout << "upper case alphabet";
    if(character >= 48 && character <= 57) cout << "number";
    if(character >= 97 && character <= 122) cout << "lower case number";
    else{
        cout << "special character";
    
    }

    // predict the output
    int a = 500 , b , c;
    if (a >= 400)
    b = 300;
    c = 200;
    cout << "value of b and c are respectively " << b << " and " << c; // 300 and 200
}