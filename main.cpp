//
//  main.cpp
//  pre mid term
//
//  Created by Mukhammadrasul Akramhujaev on 24/10/22.
//

#include <iostream>
using namespace std;

float m_s(float distance, float time);
float km_h(float distance, float time);

int main() {

    int distance, time;
   
    cout << "input distance and time -> ";
    cin >> distance >> time;
    cout << "m/s: " << m_s(distance, time) << endl;
    cout << "km/h: " << km_h(distance, time) << endl;
    return 0;
}

float m_s(float distance, float time) {
    return distance / time;
}

float km_h(float distance, float time) {
    return m_s(distance, time)  * 3.6;
}
