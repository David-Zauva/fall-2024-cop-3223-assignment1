//****************************************************************************
// fracturing.c
// Author: David Zauva
// Date: 9/3/2024
// Class: COP 3223, Professor Parra
// Purpose: This program asks user for two points to calculate the distance
// between them, the perimeter using the distance as radius, the area of a circle
// formed from the radius, the width of the circle, and the height.
// Input: Prompts the user for two sets of coordinates.
// Output: distance between the two points, perimeter of a circle using the two
// points as radius, area of circle using the radius, width of the circle, and height.
//******************************************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159


//*******************************************************
// double calculateDistance()
// Purpose: Calculates the distance between two points
// that the user inputted.
// Input: x1 and x2 coordinate, followed by y1 and y2 coordinate
// Output: Prints the distance between the two points.
// Precondition: input must be numbers.
// Postcondition: returns distance between the two points.
//*******************************************************
double calculateDistance() {
    double x1, y1, x2, y2 = 0.0;


    // Asking the user for the coordinates of the first point
    printf("Enter the coordinates of x1 and x2 (x1 x2): ");
    scanf("%lf %lf", &x1, &x2);


    // Asking the user for the coordinates of the second point
    printf("Enter the coordinates of y1 and y2 (y1 y2): ");
    scanf("%lf %lf", &y1, &y2);


    // Calculate and return the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.3f\n", distance);


    return distance;
}


//*******************************************************
// double calculatePerimeter()
// Purpose: Calculates the perimeter of a circle using the
// two points as radius.
// Input: x1 and x2 coordinate, followed by y1 and y2 coordinate
// Output: Prints the perimeter of a circle.
// Precondition: input must be numbers.
// Postcondition: returns difficulty.
//*******************************************************
double calculatePerimeter() {

    // Use calculateDistance to get the distance (radius)
    double radius = calculateDistance();

    // Calculate the perimeter (circumference) using 2 * PI * radius
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    double difficulty = 3.0;

    // Return difficulty level
    return difficulty;
}

//*******************************************************
// double calculateArea()
// Purpose: Calculates the area of a circle using the
// two points as radius.
// Input: x1 and x2 coordinate, followed by y1 and y2 coordinate
// Output: Prints the area of a circle.
// Precondition: input must be numbers.
// Postcondition: returns difficulty.
//*******************************************************
double calculateArea() {

    // Use calculateDistance to get the distance (radius)
    double radius = calculateDistance();

    // Calculate the area using PI * radius^2
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.3f\n", area);

    double difficulty = 3.0;

    // Return difficulty level
    return difficulty;
}

//*******************************************************
// double calculateWidth()
// Purpose: Calculates the width of a circle using the
// two points as radius. Multiplies radius by 2.
// Input: x1 and x2 coordinate, followed by y1 and y2 coordinate
// Output: Prints the width of a circle.
// Precondition: input must be numbers.
// Postcondition: returns difficulty.
//*******************************************************
double calculateWidth() {

    // Use calculateDistance to get the distance (radius)
    double radius = calculateDistance();

    // Calculate the width (diameter) as 2 * radius
    double width = 2 * radius;
    printf("The width of the city encompassed by your request is %.3f\n", width);

    double difficulty = 3.0;

    // Return difficulty level
    return difficulty;
}

//*******************************************************
// double calculateHeight()
// Purpose: Calculates the height of the city using the user's input.
// Input: user inputs height of their desired city.
// Output: Prints the height of the city.
// Precondition: input must be numbers.
// Postcondition: returns difficulty.
//*******************************************************
double calculateHeight() {

    double height = 0.0;

    // Asks user for the height
    printf("Enter the height of your city: ");
    scanf("%lf", &height);

    printf("The height of the city encompassed by your request is %.3f\n", height);

    double difficulty = 3.0;

    // Return difficulty level
    return difficulty;
}

int main(int argc, char **argv) {

    //Call the functions

    calculateDistance();

    calculatePerimeter();

    calculateArea();

    calculateWidth();

    calculateHeight();

    return 0;
}
