#include <iostream>

int main()
{
    double value;
    char unit;

    if (!(std::cin >> value >> unit))
    {
        std::cout << "Invalid input\n";
        return 0;
    }

    switch (unit)
    {
        case 'C':
            std::cout << value * 9.0 / 5.0 + 32.0 << " F\n";
            break;
        case 'F':
            std::cout << (value - 32.0) * 5.0 / 9.0 << " C\n";
            break;
        default:
            std::cout << "Invalid input\n";
            break;
    }
}
