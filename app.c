#include <stdio.h>
#include "term_utils.c"
// TODO: Add the include directive for the custom library header file here

int main(void) {
    
    // TODO: Call the function from the library to clear the screen
    clear_screen();
    // TODO: Call the function to print a divider line
    print_divider();
    // TODO: Set the text color to GREEN using the library function
    set_color(GREEN);
    printf("System Status: ONLINE\n");

    // TODO: Set the text color to RED using the library function
    set_color(RED);
    printf("Alert: Modular compilation in progress...\n");

    // TODO: Reset the text color back to default
    reset_text_color();
    // TODO: Print one last divider line
    print_divider();
    return 0;
}
