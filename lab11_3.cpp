#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string A,B;
    int i = 0 ;
    float sum = 0.0,sum2 = 0.0;
    while(getline(score, A)){
        sum = sum + stof(A.c_str());
        sum2 = sum2 + stof(A.c_str())*stof(A.c_str()) ;
        i++;
    }

    float mean, m2, sd;
    mean = sum/i ;
    m2 = sum2/i;
    sd = sqrt(m2 - pow(mean,2));


    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd;

 
}
