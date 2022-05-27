#include <iostream>

int main()
{
    std::cout << "This tiny app will help you getting the maximum or minimum of a quadratic function depends on the user inputs for the function's constants\n";
    std::cout << "Quadratic function like f(x) = a(x[squared]) + bx + c" << ", where a, b, and c are constants, and a can't be 0.\n";
    std::cout << "These constants can help to find out if the parabola of the function looks upward or downward, and to determine the parabola\'s vertex, which represents at the same time the function\'s maximize or minimize value" << "\n" << std::endl;
    
    float a, b, c;
    float h, k;

    std::cout << "Isnert value -rather than zero- for \'a\' in a(x[squared]): ";
    std::cin >> a;
    while (a == 0) {
        std::cout << "a can't be 0, plese insert a valid \'a\' value ";
        std::cin >> a;
    }
    std::cout << "Isnert value for \'b\' in bx: ";
    std::cin >> b;
    std::cout << "Isnert value for \'c\' in c: ";
    std::cin >> c;

    h = -b / (2 * a);
    k = (a * (h * h)) + (b * h) + c;

    std::cout << std::endl << std::endl;

    if (a > 0) {
        std::cout << "The function has a parabols that opens upward, and has a minimum value of (" << h << ", " << k << ")" << std::endl;
    }
    else
    {
        std::cout << "The function has a parabols that opens downward, and has a maximum value of (" << h << ", " << k << ")" << std::endl;
    }


}
