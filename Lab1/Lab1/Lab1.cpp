// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "myfile2.h"; 


int surface(int radius) {

    double area = Pi * radius;
    cout << "Surface area is " << area << "\n";
    s++; 
    return s;

} //closes surface method

int volume(int radius, int height) {

    double volume = Pi * radius * radius * height;
    cout << "Volume of the cylinder is: " << volume << "\n";
    v++; 
    return v;

} //closes volume method



//main method

void main(void)
{

    char choice;
    int nvolume = 0;
    int nsurface = 0;
    double radius, height;

    //std::cout << "main method!\n";


    while (1) {

       // std::cout << "while loop\n";

        choice = menu(); //write menu method

        switch (choice) {

        case '1':
            std::cout << "\nSurface area calculation:\n";
            std::cout << "Enter the radius\n";
            cin >> radius;
            nsurface = surface(radius);
            break;

        case '2':
            std::cout << "\nVolume calculation:\n";
            std::cout << "Enter the radius:\n";
            cin >> radius;
            std::cout << "Enter the height:\n";
            cin >> height;
            nvolume = volume(radius, height);
            break;

        case '3':
            std::cout << "Exit the program\n";
            cout << "The volume function has been executed " << nvolume << " times\n"; //get the counting right
            cout << "The surface area function has been executed " << nsurface << " times\n"; //get the counting right
            exit(0);

        default:
            break;

        } //closes switch block 


    }//closes while block

    //std::cout << "back in main method\n";
    //return 0;

} //closes main method

char menu(void) {

    char choice;

    cout << "\nPlease pick from the menu:\n";
    cout << "\t-Calculate area of disk: 1\n";
    cout << "\t-Calculate volume of cylinder: 2\n";
    cout << "\t-Exit program: 3\n";
    cin >> choice;

    return choice;
    cout << endl;

}
