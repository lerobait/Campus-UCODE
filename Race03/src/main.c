#include "../inc/header.h"

int main(int argc, char *argv[]) 
{
    initscr();

	if(argc == 2)
		if(mx_strlen(argv[1]) == 2 && (argv[1])[0] == '-' && (argv[1])[1] == 's')
			mx_matrix_rain();
		else
			mx_printerr();
	else if (argc == 1) {
		mx_preview();
		mx_matrix_rain();
	}
	else {
		mx_printerr();
	}

  	endwin();  
	return 0;
}
