#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int findDistance(string a, string b) {
  
    int x = a.length(); 
  
    char array[x + 1]; 
  
    strcpy(array, a.c_str());
    
  
    int y = b.length(); 
  
    char arr[y + 1]; 
  
    strcpy(arr, b.c_str());
    
    int sum = 0;
    for(int i = 0; i < x && i < y; ++i){
        sum += abs(int(array[i]) - int(arr[i]));
    }
    return sum;
}
// Declaring the array out here will allow you to reference it later in other functions.
string arr[59000];
int dictionary() {
  ifstream inFile;
  inFile.open("dictionary.txt");

  // string arr[59000];

  for(int i = 0; i != 58110; ++i){
  inFile >> arr[i];
  }

	return 0;
}

int main() {
    cout << "input two words of equal length:" << endl;
    string x;
    string y;
    cin >> x;
    cin >> y;
    cout << findDistance(x, y);
    dictionary();
    
    return 0;
}