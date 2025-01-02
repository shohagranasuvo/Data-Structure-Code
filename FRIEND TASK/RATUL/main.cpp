#include "MyString.h"

int main() {
    MyString str1("Hello");
    MyString str2(" World");

    // Concatenate
    MyString str3 = str1 + str2;

    // Display
    std::cout << "Concatenated String: " << str3 << std::endl;
    std::cout << "Length: " << str3.getLength() << std::endl;

    return 0;
}
