#include "MyString.h"

// Default constructor
MyString::MyString() : str(nullptr), length(0) {}

// Constructor with C-string
MyString::MyString(const char* s) {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
}

// Copy constructor
MyString::MyString(const MyString& other) {
    length = other.length;
    str = new char[length + 1];
    strcpy(str, other.str);
}

// Destructor
MyString::~MyString() {
    delete[] str;
}

// Get length of string
int MyString::getLength() const {
    return length;
}

// Copy function
void MyString::copy(const MyString& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }
}

// Concatenate function
void MyString::concatenate(const MyString& other) {
    char* newStr = new char[length + other.length + 1];
    strcpy(newStr, str);
    strcat(newStr, other.str);
    
    delete[] str;
    str = newStr;
    length += other.length;
}

// Return C-style string
const char* MyString::c_str() const {
    return str;
}

// Assignment operator
MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }
    return *this;
}

// Concatenation operator
MyString MyString::operator+(const MyString& other) {
    MyString newStr;
    newStr.length = length + other.length;
    newStr.str = new char[newStr.length + 1];
    strcpy(newStr.str, str);
    strcat(newStr.str, other.str);
    return newStr;
}

// Access operator
char& MyString::operator[](int index) {
    return str[index];
}

// Output operator
std::ostream& operator<<(std::ostream& os, const MyString& myString) {
    os << myString.str;
    return os;
}
