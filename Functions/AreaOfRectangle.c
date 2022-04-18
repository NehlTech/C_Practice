#include <stdio.h>

int main(){

    int leg = 10, bread = 5;

    int area;
    area = areaOfRect(leg, bread);

    printf("%d\n", area);

}


int areaOfRect(int length, int breadth){

    int area = length * breadth;

    return area;
}