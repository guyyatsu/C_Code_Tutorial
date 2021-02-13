/*
 * As you will see; they both do the same thing;
 * however, it takes more lines to do so in C.
 *
 * This is okay though, because C is a much
 * SMALLER language than python; despite 
 * the fact that there's  more letters,
 * C operates on the BIT level, as opposed
 * to Python's more user-friendly GUI level.
 */

#include <stdio.h>
    /*
     * This imports the ability to interact with
     * the terminal at all; it stands for STanDard Input/Output, .h is
     * just the file extention.
     */

int main(void) {
   /*
    * Clears the ram of any currently In-The-Way
    * processes.
    * 
    * it VOIDS everything, then defines the MAIN function.
    */

    printf("Hello World!\n");/*
                              * In C, we also have to denote
                              * when the COMMAND LINE is meant
                              * to break to a new line.
                              * 
                              * This is the '\n' character
                              * after "Hello World!"
                              */
    /*
     * Prints the string "Hello World";
     * 
     * Notice we have to end every line with something. Be it a
     * BRACKET or a SEMICOLON, you have to signal the end of a
     * line.
     * 
     * Otherwise the next and previous lines will be considered part
     * of the same broken line.
     */

}//Close the curly brace we opened with MAIN.

/*
 * Click the +/- boxes here to the left to unfold a lines 
 * comments and children.
 */
