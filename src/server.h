/*
 *
 *  Server class
 *
 *  Desribes the main server running
 *
 * 	Author: 	Patryk Zabkiewicz
 * 	Date:		24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#ifndef SERVER_H
#define SERVER_H

typedef struct server_ {
	int32 capacity;
	
} SERVER;

void server_init();		/* Server resources allocation */
void server_run();		/* Main server loop */
void server_cleanup();	/* Server deallocation of resources */
void check_jobs();		/* Go throu all jobs and check what's changed */
void recive_commands();	/* Recive commands from outside world via API */

/* Status change controller assumes that status changes are done in proper way */
inline void status_controller(JOB *job, int status);

#endif // SERVER_H
