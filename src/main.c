/*
 *
 * Solution Provider
 *
 * This software is intended to be a long running server for pushing
 * new builds on many nodes and collecting back the results.
 *
 * Needs are that the all steps of the job are configurable.
 *
 * The software must act like an engine where we can build
 * up the whole stack of applications upon it.
 *
 * 	Author: 	Patryk Zabkiewicz
 * 	Date:			24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#include <stdio.h>
#include "server.h"
#include "version.h"

void print_help() {
	printf("\n\nSolution Provider %s",version_number);
	printf("\n\nThis software is provided by Patryk Zabkiewicz");
	printf("\n\nAs is you can use it without any warranty");
	printf("\n\n");
}

int main(int argc, char *argv[]) {

	print_help();

	server_init();

	server_run();

	server_cleanup();

	return 0;
}
