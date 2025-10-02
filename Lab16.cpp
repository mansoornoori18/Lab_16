#include<iostream>  // COMSC-210 | Lab 16 | Mansoor Noori
#include<iomanip>   // IDE Visual Studio,

using namespace std; // to void using std over and over

// Color class definition
class Color {
    private:
    // Private member variables to store RGB values
    int red;
    int green;
    int blue;

    public:

    // Default constructor: initializes color to black (0, 0, 0)
    Color() : red(0), green(0), blue(0) {}

    // Parameterized constructor: initializes with given RGB values
    Color(int r, int g, int b){
        setRed(r);
        setGreen(g);
        setBlue(b);
    }
    // Partial constructor red and green, blue default to 0.
    Color(int r, int g){
        setRed(r);
        setGreen(g);
        blue = 0;
    }

    // Setter for red value
    void setRed(int r){
        red = (r >= 0 && r <= 255) ? r : 0;
    }

    // Setter for green value
    void setGreen(int g){
        green = (g >= 0 && g <= 255) ? g : 0;
    }

    // Setter for blue value
    void setBlue(int b){
        blue = (b >= 0 && b <= 255) ? b : 0;
    }

    // Getter for red value
    int getRed() const{
        return red;
    }

    // Getter for green value
    int getGreen() const {
         return green;
    }

    // Getter for blue value
    int getBlue() const {
        return blue;
    }
    
    // to print the RGB values in formatted output
    void print() const {
        cout << left << setw(10) << "Red:" << red << endl;
        cout << left << setw(10) << "Green:" << green << endl;
        cout << left << setw(10) << "Blue:" << blue << endl;
        cout << "-----------------------" << endl;
    }
};

// Main function
int main (){
    // Create several Color objects using constructors
    Color color1(255, 0, 0);     // Red
    Color color2(0, 255, 0);      // Green
    Color color3(0, 0, 255);      // Blue
    Color color4(128, 128, 128);  // Gray

    // Create a Color object using default constructor, then set values
    Color color5;
    color5.setRed(75);
    color5.setGreen(160);
    color5.setBlue(220);

    // Output all Color objects using print() method
    cout << "Color Values\n";
    cout << "=======================\n";

    cout << "Color 1:\n"; color1.print();
    cout << "Color 2:\n"; color2.print();
    cout << "Color 3:\n"; color3.print();
    cout << "Color 4:\n"; color4.print();
    cout << "Color 5:\n"; color5.print();

    return 0;

}