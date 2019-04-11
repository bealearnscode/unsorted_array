// Beatrix House

#include "listWithDuplicates.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    
    // create an object of the ListWithDuplicates class
    ListWithDuplicates listOfWords;
    
    // create input file to be read
    ifstream inputFile;
    
    // create a variable for the word read from each line
    string word;
    
    // open the file
   inputFile.open("words.in");
    
    // if the file exists
    if (inputFile.good())
    {
        // while there is a word to be read from the input file
        while(getline(inputFile, word))
        {
            // save the word inside the listOfWords object
            listOfWords.Store(word);
        }
    }
    
    // print the list of words
    listOfWords.PrintList();
    
    // close the file
    inputFile.close();
    
    return 0;
}

// constructor
ListWithDuplicates::ListWithDuplicates()
{
    length = 0;
}

bool ListWithDuplicates::IsEmpty()
{
    if (length == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ListWithDuplicates::IsFull()
{
    if (length == MAX_ITEMS)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ListWithDuplicates::Store(ItemType item)
{
    if (!IsFull())
    {
        values[length] = item;
        length++;
    }
}

void ListWithDuplicates::PrintList()
{
    if (!IsEmpty())
    {
        cout << "Empty list" << endl;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            cout << values[i] << endl;
        }
        cout << "There are " << GetLength() << " items in the list." << endl;
    }
}

int ListWithDuplicates::GetLength()
{
    return length;
}
    
