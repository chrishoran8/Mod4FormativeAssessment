// Mod4FormativeAssessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "myFunctions.h"



int main()
{
    webPage bbcWebPage;    
    bbcWebPage.text = populateWithBBCWebPage;  

}

//this code is designed to manipulate strings from websites. It uses a strucxt to store the strings from the website
//task 1 - the code is not currently working due to more than one error, fix it so that it populates this first struct field
//task 2 - write some code which which calculates the length of text field used within the bbcWebPage, and then assigns this value to bbcWebPage.charactersUsed 
//task 4 - write some code which swaps all mentions of the word Virgin with Branson
//task 5 - adjust the webPage struct to include a text field called uRL and one called title. Assign bbcWebPage with a relevant title and https://www.bbc.co.uk/news/technology-56281224 and
//task 6 - write a function which outputs the length of the struct, plus the uRL, PLUS the title
//task 7 - download text from another webPage yourself, create a function similar to the one already created, and populate a new struct
//task 8 - complete the new struct in a similar way to the bbcWebPage
//task 9 - create an array of structs of two elements with the bbcWebPage and your webPage
//task 9 - create another function which outputs an array of structs including the lenght of the struct, plus uRL, and title
//task 10 - write a function which clears the text from the struct - ensure the struct is updated on the main program
