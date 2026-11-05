// zadachi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //TASK 4
    /*
    char shape;
    double area;
    std::cout << "Enter your shape (s, r, c or t): ";
    std::cin >> shape;
    //double pi = 3.14;
    switch (shape) {
        case 's':
            double sqSide;
            std::cout << "Enter the size of the side of the square: ";
            std::cin >> sqSide;
            area = sqSide * sqSide;
            break;
        case 'r':
            double recLength, recWidth;
            std::cout << "Enter the length and the width of the rectangle: ";
            std::cin >> recLength >> recWidth;
            area = recLength * recWidth;
            break;

        case 'c':
            double radius;
            std::cout << "Enter the radius: ";
            std::cin >> radius;
            double pi;
            pi = 3.14;
            //double pi=3.14; dava greshka, zashtoooo?!?!?!

            area = radius * radius * pi;
            break;
        case 't':
            double trSide, trHeight;
            std::cout << "Enter side and height: ";
            std::cin >> trSide>> trHeight;
            area = trSide * trHeight / 2;
            break;
    }
    std::cout << "Area: " << area; //*/

    //TASK 5
        /*int hour, min;
        std::cout << "Enter hour and minutes: ";
        std::cin >> hour >> min;

        if (min >= 45) {
            min -= 45;
            hour++;
        }
        else min += 15;

        if (hour == 24)
            hour = 0;

        if (hour < 10)
            std::cout << 0 << hour << ":";
        else std::cout << hour << ":";

        if (min < 10)
            std::cout << 0 << min;
        else std::cout << min;*/

    //TASK 6
        /*int a,b,c,d,e;
        std::cin >> a >> b >> c >> d >> e;

        if ((a >= b && b <= c && c >= d && d <= e) ||
            (a <= b && b >= c && c <= d && d >= e))
            std::cout << "yes";
        else std::cout << "no";*/

    //TASK 7

        /*int r, x, y;
        std::cin >> r >> x >> y;

        int length = x * x + y * y;

        if ((r * r) > length)
            std::cout << "In the circle";
        else if((r * r) == length)
            std::cout << "On the circle";
        else std::cout << "Out of the circle";*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
