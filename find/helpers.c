/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int high = n - 1 ; 
    int low = 0 ; 
    // binary search 
    while ( low <= high )
    {
        int mid = ( high + low ) / 2 ; 
        
        if ( values[mid] > value )
        {
            high = mid - 1 ; 
            
        }
        else if ( values[mid] < value )
        {
            low = mid + 1; 
        }
        
        else return true ; 
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // insretion sort 
    for (int i = 1 ; i < n ; i++)
    {
        int key = values[i];
        int j = i-1 ; 
        while ( j >= 0 && values[j] > key )
        {
            values[j+1]=values[j];
            values[j]= key;
            j--; 
        }
         
    }
    return;
}