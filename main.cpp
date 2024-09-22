#include <iostream>



int main()
{   
    std::cout << "Short: " << std::endl;        //Short type
    short a = 55;       
    short b = 359;
    std::cout << a << " + " << b << " = " << a+b << std::endl;

    std::cout << "Int: " << std::endl;          // Int type
    int i = 2943;       
    int j = 398;
    std::cout << i << " * " << j << " = " << i*j << std::endl;

    std::cout << "Long: " << std::endl;         // Long type
    long T = 83218942;
    long U = 23874923;
    std::cout << T << " - " << U << " + 24819 = " << T - U + 24819 << std::endl; 

    std::cout << "Bool: " << std::endl;         // Bool type
    bool K = true;      
    bool M = false;
    std::cout << K << " * " << M << " = " << (K&&M) << std::endl;

    std::cout << "Float: " << std::endl;        // Float type
    float L = 0.2893;       
    float N = 3.234;
    std::cout << L << " - " << N << " = " << L - N << std::endl;

    std::cout << "Double: " << std::endl;       // Double type
    double Q = 3.24367823;
    double E = 1.352398573;
    std::cout << Q << " / " << E << " = " << Q / E << std::endl;

    std::cout << "Char: " << std::endl;       // Char type
    char r = 66;
    char y = 88;
    char o = r + y;
    std::cout << r << " + " << y << " = " << o << std::endl; 





    return 0;

}