#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream read("a.txt");
    string file_content;
    // Syntax for using the getline():
    // getline(object, string)
    getline(read, file_content);
    cout << "The first line contains: " << endl;
    cout << file_content << endl;   
    read.close();

    // To print all the lines, we need to make use of some loop
    ifstream show("a.txt");
    string all_lines;
    cout << "The file contains: " << endl;
    while(getline(show, all_lines)){
        cout << all_lines << endl;
    }
    read.close();

    // To print the first character of the file
    ifstream fin("a.txt");
    char letter;
    fin.get(letter);
    cout << "The first letter of the file is: " << letter;
    fin.close();
}