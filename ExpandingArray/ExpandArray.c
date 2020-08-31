/*
 * Note to self: can be reused for implementation part of a arraylist class.
 */

int * addElement(int theArray[], int newElement){
    int n = sizeof(theArray)++;
    int newArray[n];
    //last element will be the new element so -1 
    for(int i =0; i < n-1; i++){
        newArray[i] = theArray[i];
    }
    newArray[n-1]=newElement;
    return newArray;
}