#include <iostream>
#include <cmath>

using namespace std;

    float deg2rad( float a1 ){
        return a1/180*(M_PI); 
    }

    float rad2deg( float a2){
        return a2*180/(M_PI);
    }

    float findXComponent(float l1 , float l2 , float a1 , float a2){
        return l1*cos(a1) + l2*cos(a2);
    }

    float findYComponent(float l1 , float l2 , float a1 , float a2){
        return l1*sin(a1) + l2*sin(a2);
    }

    float pythagoras(float x , float y){
        return sqrt((pow(x,2)) + (pow(y,2)));
    }

    void showResult(float result , float deg){
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
        cout << "Length of the resultant vector = " << result << "\n";
        cout << "Direction of the resultant vector (deg) = " << deg << "\n";
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    }

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
