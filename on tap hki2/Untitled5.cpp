#include <iostream> 
#include <stdio.h> 
using namespace std; 
int main() 
{ 
const char *filePath = "D:\\folder1\\file1.txt"; 
FILE *fp; 
fp = fopen(filePath, "Wt");
if (!fp) 
cout << "Can not open this file" << endl; 
else 
cout << "File is opened" << endl;
return 0; 
} 

