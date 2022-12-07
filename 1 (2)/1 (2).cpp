
#include <iostream>
#include <string>

using namespace std;
//математика, фізика, біологія, іноземна мова, географія
int main() {
    setlocale(0, "");
    cout << "бал з математики \n";
    float a;
    cin >> a;
    float b;
    cout << "бал з Фiзики  \n";
    cin >> b;
    float d;
    float c;
    float e;
    float f;
    cout << "бал з iноземної мови \n";
    cin >> c;
    cout << "бал з географiї \n";
    cin >> d;
    cout << "бал з бiологiї \n";
    cin >> e;
    f = (a + b + c + d + e) / 5;
    cout << f;
}