#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring> 

class MyString {
private:
    char* str;      
    int length;     

public:
    // Constructors
    MyString();                    
    MyString(const char* s);        
    MyString(const MyString& other); 

    // Destructor
    ~MyString();

    // Member functions
    int getLength() const;                   
    void copy(const MyString& other);          
    void concatenate(const MyString& other);   
    const char* c_str() const;                 

    // Operator overloads
    MyString& operator=(const MyString& other);
    MyString operator+(const MyString& other);  
    char& operator[](int index);                

    // Friend function for output
    friend std::ostream& operator<<(std::ostream& os, const MyString& myString);
};

#endif // MYSTRING_H
