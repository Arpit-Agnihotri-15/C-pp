# include <iostream>
using namespace std;
int main() {
    float length, width, area;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
    cout << "Area of the rectangle is: " << area << endl;
    return 0;
}