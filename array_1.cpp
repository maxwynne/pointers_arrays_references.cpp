#include <iostream>

using namespace std;

char v[6]; // array of 6 characters

char* p; // pointer to character

// prefix * means CONTENTS OF
// prefit & means ADDRESS OF

char* p = &v[3]; // p pointing to v's fourth character: 0123 (4)
char x = *p;
