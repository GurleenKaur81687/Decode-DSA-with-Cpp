//how can you output phyics and walalh in two different lines in c++?
#include<iostream>
using namespace std;
int main(){

    cout<<"Physics" <<endl;
    cout<<"Wallah";
    
    return 0;
}

//print 10 in c++ as output using 2 numbers less than 6 as input
#include<iostream>
using namespace std;
int main(){

    int a = 5;
    int b = a;
    
    cout<<a+b;

    return 0;
} 

//how much spae does the following data type take?
#include<iostream>
using namespace std;
int main(){

    cout<<sizeof(int)<<endl;;
    cout<<sizeof(bool)<<endl;;
    cout<< sizeof(float);

    return 0;
}

//find output of the given program
#include<iostream>
using namespace std;
int main(){

    int a = 4;
    int b = 5;
    a++ , b--;
    cout<< ++a <<" "<< b--;
    return 0;        // 6 4
}

//wap to find circumference of a circle of radius 10 cm
#include<iostream>
using namespace std;
int main(){

    int radius = 10;
    float circumference;
    circumference = 3.14*2*radius;
    
    cout<<"the circumference of the circle is : "<< circumference;
    return 0;
}

