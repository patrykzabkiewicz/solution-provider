/***************************************
 *
 *  Server class
 *
 *  Desribes how main server running
 *
 * 	Author: 	Patryk Zabkiewicz
 * 	Date:		24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#include "server.h"


void server_init() {
  	// init the server
  	JOB_list * jobs_list = malloc(sizeof(JOB_list));

	// read all the command mapping

	// create a map (hash tree implementation in C)
}

void server_run() {
	int quit = 1;
	char buf[35] = {0};

	do {
		printf("solution-provider# ");
		scanf("%s",buf);

		// check if quit
		if(srtcmp(buf,"quit") || strcmp(buf,"exit")) {
			quit = 0;
		}

		recive_commands();
		check_jobs(); // both running and scheduled

		sleep(1);
	} while(quit);
}

void check_jobs() {
	// go throu the list of jobs
	JOB *job;

	while(job->next != NULL) {
		job = job->next;

		// start jobs
		if( job->time < current_time && job->status == TO_START) status_controller(job, START);

		//

		// stop timeouted jobs
		if( job->running_time > TIMEOUT ) status_controller(job, TIMEOUT);

		// stop finished jobs
		if( )
	}

}

inline void status_controller(JOB *job, int status) {
	job->status = status;
}
