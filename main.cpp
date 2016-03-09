

#include <cstdio>
#include "String.h"

int main(int argc, char* argv[]){
    printf("Hello\n");
    String h=String();
    String h2(5,'x');
    String h3=h2;
    //printf ("%s \n",h3.c_str());
    printf ("%c \n",h2.getChar(1));
    printf ("%c \n",h3.getChar(1));
    printf ("%s \n",h2.c_str());
    h2.clear();
    printf ("%s \n",h2.c_str());
    h2=h3;
    printf ("%s \n",h2.c_str());
    h3=h2+'c';
    printf ("%s \n",h3.c_str());
    // test capacity
    size_t d=h2.capacity();
    printf("capacité : %zu \n",d);
  
    //test reserve
    h2.reserve(15);
    d=h2.capacity();
    printf("capacité : %zu \n",d);
    printf("length before: %zu \n", h2.length());
    //test = with char*
    char* c1= new char('a');
    h=c1;
    delete c1;
  
    //test + with string
    String h6(5,'a');
    String h4= h6 + h2;
    printf("Hi there \n");
    // Test for operator+(const String& lhs, const char* rhs)
    printf("Test for operator+(const String& lhs, const char* rhs\n");
    h2=h2+h6;
    printf("length : %zu \n", h2.length());
    printf("capacity : %zu \n", h2.capacity());
    return 0;
}


