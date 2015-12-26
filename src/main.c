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
 * 	Date:		24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#include <stdio.h>

typedef int int32;

typedef struct jobs_ {
	int32 id;
	int32 name;
	int32 time;
	int32 schedule;
} JOB;

typedef struct job_list_ {
	JOB job;
	JOB *next;
} JOB_list;

void add_job_to_list(JOB_list *list, JOB *j) {
	list->next = j;
}

void server_init();
void server_run();

//
//	main.c
//
int main(int argc, char *argv[]) {

	// init the server
	JOB_list *jobs_list = malloc(sizeof(JOB_list));

	server_init();

	server_run();

	return 0;
}

void server_init() {

}

void server_run() {
	int quit = 1;
	char buf[35] = {0};

	do {
		printf("solution-provider# ");
		scanf("%s",buf);

		niezalezn

		if(srtcmp(buf,"")) {
			quit = 0;
		}

	} while(quit);
}
