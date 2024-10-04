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
	// default constructor
	Color() {

		red = 0;
		green = 0;
		blue = 0;

	}

	// constructor with parameters for the red, green, and blue components (parameter constructor)
	Color(int r, int g, int b) {

		red = r;
		green = g;
		blue = b;

	}

	// constructor with just the red component parameter (partial constructor)
	Color(int r) {

		red = r;
		green = 0;
		blue = 0;

	}

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

	// create orange using the default constructor and the setter methods
	Color orange;
	orange.setRed(255);
	orange.setGreen(165);
	orange.setBlue(0);

	// create green using the parameter constructor
	Color green = Color(0, 255, 0);

	// create red using the partial constructor
	Color red = Color(255);

	// create blue using the default constructor and the setter methods
	Color blue;
	blue.setRed(0);
	blue.setGreen(0);
	blue.setBlue(255);

	// create purple using the parameter constructor
	Color purple = Color(128, 0, 128);

	orange.print();
	green.print();
	red.print();
	blue.print();
	purple.print();

	return 0;

}