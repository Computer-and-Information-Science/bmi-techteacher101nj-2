#include <iostream>
using namespace std;

int main() {
 
    int height, weight;
    height = 61;
    weight = 130;
    
    double kg, meters, bmi;

    kg = weight*0.453592;
    meters = height * 0.0254;

    bmi = kg/(meters*meters);

    cout << "The BMI for this person is: " << bmi << endl;

}
