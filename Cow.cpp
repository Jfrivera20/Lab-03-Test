#include <iostream>
#include <string>
#include "Cow.h"
using namespace std;

void Cow :: setWeight(int w){
    weight = w;
    }
void Cow :: setHeight(int h){
        height = h; 
    }
void Cow :: setColor(string black){
        color = black;
    }
int Cow :: getWeight(){
        return weight;
    }
int Cow :: getHeight(){
        return height;
    }
string Cow :: getColor(){
        return color;
    }
