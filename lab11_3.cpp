#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    int N = 0;
    double sum = 0,sum1 = 0 ,M;
    float SD;
    string score;

    ifstream x;
    x.open("score.txt");
    while(getline(x,score)){
        sum += atof(score.c_str());
        sum1 += pow(atof(score.c_str()),2);
        N++;
    }
    M = sum / N ;

    SD = sqrt((sum1/N)-(M*M));

    x.close();

    cout << "Number of data = "<< N << endl;
    cout << setprecision(3);
    cout << "Mean = "<< M << endl;
    cout << "Standard deviation = "<< SD;
}

//Kong >w<