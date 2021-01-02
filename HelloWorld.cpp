#include<bits/stdc++.h>
using namespace std;

int height = 5; 
int width = (2 * height) - 1; 

void printH() 
{ 
    int i, j; 
    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j < height; j++) { 
            if ((j == height - 1) 
                || (i == height / 2)) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
}

void printE() 
{ 
    int i, j; 
    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j < height; j++) { 
            if ((i == 0 || i == height - 1) 
                || (i == height / 2 
                    && j <= height / 2)) 
                printf("*"); 
            else
                continue; 
        } 
        printf("\n"); 
    } 
} 

void printL() 
{ 
    int i, j; 
    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j <= height; j++) { 
            if (i == height - 1) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 

void printO() 
{ 
    int i, j, space = (height / 3); 
    int width = height / 2 + height / 5 + space + space; 
    for (i = 0; i < height; i++) { 
        for (j = 0; j <= width; j++) { 
            if (j == width - abs(space) 
                || j == abs(space)) 
                printf("*"); 
            else if ((i == 0 
                      || i == height - 1) 
                     && j > abs(space) 
                     && j < width - abs(space)) 
                printf("*"); 
            else
                printf(" "); 
        } 
        if (space != 0 
            && i < height / 2) { 
            space--; 
        } 
        else if (i >= (height / 2 + height / 5)) 
            space--; 
        printf("\n"); 
    } 
} 

void printW() 
{ 
    int i, j, counter = height / 2; 
    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j <= height; j++) { 
            if (j == height) 
                printf("*"); 
            else if ((i >= height / 2) 
                     && (j == counter 
                         || j == height - counter - 1)) 
                printf("*"); 
            else
                printf(" "); 
        } 
        if (i >= height / 2) { 
            counter++; 
        } 
        printf("\n"); 
    } 
} 

void printR() 
{ 
    int i, j, half = (height / 2); 
    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j < width; j++) { 
            if ((i == 0 || i == half) 
                && j < (width - 2)) 
                printf("*"); 
            else if (j == (width - 2) 
                     && !(i == 0 || i == half)) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
}
void printD() 
{ 
    int i, j; 
    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j < height; j++) { 
            if ((i == 0 || i == height - 1) 
                && j < height - 1) 
                printf("*"); 
            else if (j == height - 1 && i != 0 
                     && i != height - 1) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 

main() {
	printH();
	cout << endl;
	printE();
	cout << endl;
	printL();
	cout << endl;
	printL();
	cout << endl;
	printO();
	cout << "\n\n\n";
	printW();
	cout << endl;
	printO();
	cout << endl;
	printR();
	cout << endl;
	printL();
	cout << endl;
	printD();
}



















