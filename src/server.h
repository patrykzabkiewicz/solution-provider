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

#ifndef SERVER_H
#define SERVER_H

typedef enum {
	INITIAL,
	OPERATIONAL,
	PAUSED,
	WAITING_TO_REBOOT,
	REBOOTING,
	ERROR,
	STOPPED
} SERVER_STATUS;

/* Main server structure */
typedef struct server_ {
	SERVER_STATUS status;			/* Current server status */
	SERVER_STATUS * status_history; /* Server status history */
	
	int32 capacity;					/* Capacity of jobs the server could run */
	int32 jobs_slots;				/* How many jobs can be the runned at the same time */
	
	JOB_list * jobs_list;			/* List of job the server has to maintain */
	int32 jobs_count;				/* Total amount of jobs controlled by server */
	
	JOB_list * jobs_waiting_list;	/* List of jobs in waiting state */
	int32 jobs_waiting_count;		/* Current number of jobs in waiting queue to be executed */
	
	JOB_list * jobs_running_list;	/* List of currently running jobs */
	int32 jobs_running_count;		/* Current number of running jobs */
	
	LOG * log_entries;				/* Roll logs from the server */
} SERVER;

/* Server resources allocation */
void server_init();

/* Main server loop */
void server_run();		

/* Server deallocation of resources */
void server_cleanup();	

/* Go throu all jobs and check what's changed */
void check_jobs();		

/* Recive commands from outside world via API */
void recive_commands();	

/* Status change controller assumes that status changes are done in proper way */
inline void status_controller(JOB *job, int status);

#endif // SERVER_H
