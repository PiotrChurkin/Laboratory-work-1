#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    cout << " " << endl << "Integers signed types:" << endl; // Целочисленные знаковые типы данных

    cout << "For \"char\":  size - " << sizeof(char) << " bytes; Can take values: from " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "For \"short\":  size - " << sizeof(short) << " bytes; Can take values: from " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "For \"int\":  size - " << sizeof(int) << " bytes; Can take values: from " << INT_MIN << " to " << INT_MAX << endl;
    cout << "For \"long\":  size - " << sizeof(long) << " bytes; Can take values: from " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "For \"long long\":  size - " << sizeof(long long) << " bytes; Can take values: from " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;


    cout << " " << endl << "Integers unsigned types:" << endl; // Целочисленные беззнаковые типы данных

    cout << "For \"unsigned char\":  size - " << sizeof(unsigned char) << " bytes; Can take values: from 0 to " << UCHAR_MAX << endl;
    cout << "For \"unsigned short\":  size - " << sizeof(unsigned short) << " bytes; Can take values: from 0 to " << USHRT_MAX << endl;
    cout << "For \"unsigned int\":  size - " << sizeof(unsigned int) << " bytes; Can take values: from 0 to " << UINT_MAX << endl;
    cout << "For \"unsigned long\":  size - " << sizeof(unsigned long) << " bytes; Can take values: from 0 to " << ULONG_MAX << endl;
    cout << "For \"unsigned long long\":  size - " << sizeof(unsigned long long) << " bytes; Can take values: from " << numeric_limits<unsigned long long>::min() << " to " << numeric_limits<unsigned long long>::max() << endl;

    cout << " " << endl << "Real number's types:" << endl;  // Вещественные типы данных

    cout << "For \"float\":  size - " << sizeof(float) << " bytes; Can take values: from " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "For \"double\":  size - " << sizeof(double) << " bytes; Can take values: from " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
    cout << "For \"long double\":  size - " << sizeof(long double) << " bytes; Can take values: from " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;

    cout << " " << endl << "Symbolic types:" << endl; // Символьные типы данных

    cout << "For \"char\":  size - " << sizeof(char) << " bytes; Can take values: from " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "For \"wchar_t\":  size - " << sizeof(wchar_t) << " bytes; Can take values: from " << WCHAR_MIN << " to " << WCHAR_MAX << endl;

    cout << " " << endl << "Logical type:" << endl; // Логическиq тип данных

    cout << "For \"bool\":  size - " << sizeof(bool) << " bytes; Can take values: from " << numeric_limits<bool>::min() << " to " << numeric_limits<bool>::max() << "  (False / True)"<<endl;



    return 0;
}