#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <string>
#include <sstream>
#include <istream>
#include <chrono>
#include <ctime>
#include"File.h"
#include"User.h"
#include<stdio.h>
//#include"Image.cpp"
#include"/usr/local/cs/cs251/react.h"
using namespace std;


int main() {
    Pixel** myPixel = new Pixel*[10];
    for(int i = 0; i < 10; i++) {
        myPixel[i] = new Pixel[10];
        for(int j = 0; j < 10; j++) {
            myPixel[i][j].red = 100;
            myPixel[i][j].green = 100;
            myPixel[i][j].blue = 100;
        }
    }
    _write_image("TestingMyImage.ppm", reinterpret_cast<char **>(myPixel), 10, 10);


    /*User myUser("Zack");
    cout << myUser.get_Images() << endl;
    cout << myUser.get_Images().size() << endl;*/

    /*string temp = "convert Images/003/ImageData.ppm Images/003/ImageData.png";
    system(temp.c_str());*/


    /*string user;
    bool LoggedIn;
    string password;
    string current;
    string Data;

    fstream i("startup_mem");


    string holder;
    string temp;
    //getline(i, temp, '[');
    //istringstream ss(temp);
    i >> temp;
    if (temp == "0") {
        LoggedIn = false;
        //cout << "Logged In" << endl;
    } else {
        LoggedIn = true;
       // cout << "Not Logged In" << endl;
    }

    i >> temp;
    user = temp;
    cout << "User:" << user << endl;
    i >> temp;
    password = temp;
    cout << "Password:" << password << endl;

    i >> temp;
    current = temp;
    cout << "Current:" << current << endl;

    getline(i, temp, '|');
    //cout << temp << endl;
    getline(i, temp, '|');
    cout << "Data:" << temp << endl;
    Data = temp;
    
    ofstream os("test_File.txt");

    os << LoggedIn;
    os << " ";
    os << user;
    os << " ";
    os << password;
    os << " ";
    os << current;
    os << " ";
    cout << "Data2:" << Data << endl;
    string s = "|" + Data + "| |" + "Testinggg";
    //cout << "status_text:" << status_text[10] << endl;
    os << s;
    */
    /*
    i >> temp;
    //getline(i, temp, '');
    getline(i, temp, '|');
    Data = temp;
    cout << "Data:" << Data << endl;*/


    /*cout << "working3" << endl;
    int width = 10;
    int height = 10;
    Pixel** myImage = new Pixel*[height];

    for(int i = 0; i < 10; i++) {
        myImage[i] = new Pixel[width];
        for(int j = 0; j < 10; j++) {
            myImage[i][j].red = i*25;
            myImage[i][j].green = 255 - i*25;
            myImage[i][j].blue = j*25;
        }
    }

    FileImage(width, height, 0, "11", "TestImage", "Zack", myImage, "");
    cout << "working2" << endl;*/


    //system("mkdir Accounts");


    /*File myFile("Images/ImageCounter");
    string temp = myFile.ReadFromFile();
    int ImageCounter = stoi(temp);
    ImageCounter++;
    char hundreds = ((char)((ImageCounter/100)+'0'));
    char tens = ((char)(((ImageCounter%100)/10)+'0'));
    char ones = ((char)(((ImageCounter%10)/1)+'0'));
    temp = "";
    temp = temp + hundreds + tens + ones;
    myFile.AddToFile(temp);*/
    /*int i = 0;
    int j = 0;

    string Data[] = {"0", "1"};

    Pixel** myImage = new Pixel*[16];
    //for(int i = 0; i < 16; i++) {
        myImage[i] = new Pixel[16];
        //for(int j = 0; j < 16; j++) {
            if (Data[(i*16)+j] == "0") {
                myImage[i][j].red = 240;
                myImage[i][j].green = 248;
                myImage[i][j].blue = 255;
            }
        //}
    //} 

    delete [] myImage[i];
    delete [] myImage;*/


    /*string Colors[] = {"aliceblue", "cornsilk", "gold", "deepskyblue", "darkorchid", "lime", "red", "black"};

    int x = 11;
    int y = 4;
    char hundreds = ((char)(((x*16)+y)/100)+'1');
    char tens = ((char)((((x*16)+y)%100)/10)+'0');
    char ones = ((char)((((x*16)+y)%10)/1)+'0');
    string id = "Button_";
    id = id + hundreds + tens + ones;
    cout << id << endl;;
    string data = {"314212312"};
    x = 0;
    y = 5;

    cout << Colors[data[(x*16)+y]-'0'] << endl;*/



    /*string type = "damn";
    string file = "test_File.txt";
    fstream f(file);
    string beginning;
    string temp;
    string end;
    f >> beginning;
    f >> temp;
    beginning = beginning + " " + temp;
    f >> temp;
    getline(f, end, '\0');
    f.close();
    ofstream of(file);
    of << beginning << " " << type << end << endl;
    cout << type << endl;
    of.close();*/

    /*string file = "test_File.txt";
    string holder1;
    string temp;
    fstream f(file);
    f >> holder1;
    f >> temp;
    temp = "";
    getline(f, temp, '\0');
    cout << temp << endl;
    f.close();
    string command = "rm " + file;
    //system(command.c_str());
    command = "code " + file;
    //system(command.c_str());
    ofstream of(file);
    cout << of.good() << " Is it good?" << endl;
    string temp2;
    of << holder1;
    string myInput;
    cin >> myInput;
    of << " " << myInput << temp;
    cout << temp;
    

    f.close();*/


    /*auto start = chrono::system_clock::now();
    auto end = chrono::system_clock::now();

    Hello! e world
Well I dunno   

    string temp;
    time_t now = time(0);
    string date_time = ctime(&now);
    date_time[date_time.size()-1] = '|';
    temp = "|" + date_time;
    cout << temp << endl;*/


    /*string z = "Zack |HelloWorld";
    string temp;
    stringstream ss(z);
    getline(ss, temp, '|');
    getline(ss, temp);
    cout << temp << endl;*/

    /*string holder = "Accounts/" + z + ".txt";
    fstream f;
    f.open(holder);
    if (f.good()) {
        cout << "good" << endl;
    }*/
}