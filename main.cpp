// COMSC-210 | Lab 16 | Vevaan Verma
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

// class Color represents a color with red, green, and blue components
// the class has getter and setter methods for each component, as well as a print method
class Color {

private:
	// the red, green, and blue components are integers in the range [0, 255]
	int red;
	int green;
	int blue;

public:
	// getter and setter for the red component
	int getRed() const { return red; }
	void setRed(int r) { red = r; }

	// getter and setter for the green component
	int getGreen() const { return green; }
	void setGreen(int g) { green = g; }

	// getter and setter for the blue component
	int getBlue() const { return blue; }
	void setBlue(int b) { blue = b; }

	// print() prints the color in the format "Color: [RED VALUE], [GREEN VALUE], [BLUE VALUE]"
	// arguments: none
	// returns: void
	void print() const { cout << "RGB Code: " << setw(3) << red << ", " << setw(3) << green << ", " << setw(3) << blue << endl; }

};

// main() is the entry point of the program
// arguments: none
// returns: int - the exit code of the program
int main() {

	// create a Color object for each of the following colors, then print them for testing purposes
	Color red;
	red.setRed(255);
	red.setGreen(0);
	red.setBlue(0);

	Color green;
	green.setRed(0);
	green.setGreen(255);
	green.setBlue(0);

	Color blue;
	blue.setRed(0);
	blue.setGreen(0);
	blue.setBlue(255);

	Color orange;
	orange.setRed(255);
	orange.setGreen(165);
	orange.setBlue(0);

	Color purple;
	purple.setRed(128);
	purple.setGreen(0);
	purple.setBlue(128);

	red.print();
	green.print();
	blue.print();
	orange.print();
	purple.print();

	return 0;

}