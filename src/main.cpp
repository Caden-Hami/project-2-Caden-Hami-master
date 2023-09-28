#define UNUSED(x) (void) x 
#include <iostream>
using namespace std;
int main(){ 
double userIn;
double entropy;

double lowTempIn;
double lowEntIn;
double highTempIn;
double highEntIn;

cin >> userIn;

if ((userIn < 150) || (userIn > 500)) {
    cout << "Temperature is out of computing range." << endl;
return 1;
}

if ((userIn >= 150) && (userIn < 200)) {
    lowTempIn = 150;
    lowEntIn = 7.281;
    highTempIn = 200;
    highEntIn = 7.5081;
}
if ((userIn >= 200) && (userIn < 250)) {
    lowTempIn = 200;
    lowEntIn = 7.5081;
    highTempIn = 250;
    highEntIn = 7.71;
}
if ((userIn >= 250) && (userIn < 300)) {
    lowTempIn = 250;
    lowEntIn = 7.71;
    highTempIn = 300;
    highEntIn = 7.8941;
}
if ((userIn >= 300) && (userIn < 400)) {
    lowTempIn = 300;
    lowEntIn = 7.8941;
    highTempIn = 400;
    highEntIn = 8.2236;
}
if ((userIn >= 400) && (userIn < 500)) {
    lowTempIn = 400;
    lowEntIn = 8.2236;
    highTempIn = 500;
    highEntIn = 8.5153;
}
entropy = lowEntIn + (highEntIn - lowEntIn) * ((userIn - lowTempIn) / (highTempIn - lowTempIn));
    cout << "Entropy = " << entropy << "kJ/(kg.K)" << endl;
return 0;
}