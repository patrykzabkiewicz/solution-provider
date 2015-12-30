#ifndef JOB_H
#define JOB_H

#include "typedefs.h"
#include "status_list.h"


#define COMMAND_LENGHT 150

enum JOB_STATUS {
	INIT,
	TO_START,
	RUNNING,
	TO_STOPPED,
	STOPPED,
	TO_PAUSED,
	PAUSED,
	TO_RETRY,
	RETRYING,
	SUCCESS,
	FAILURE,
	TIMEOUT,
	NOT_RESPONDING
};

typedef struct jobs_ {
	int32 id;					/* Identifier */
	
	JOB_STATUS status;			/* Current status */
  	int32 priority;				/* Priority on the queue */
  	int32 importance;			/* Importance of the task */
  	int32 ttl;                      	/* Time To Live */

	SCHEDULE schedule;			/* Schedule of running time */
 	
	DATETIME * last_modification_date;	/* Date of last modification */
  	DATETIME * add_date;			/* Date of the creation of the job */
  	
	struct jobs_ * parent;                  /* Tree structure of the jobs */

  	STATUS_list * status_history;    	/* List of status history */
  	int status_history_count;		/* Count of status history records */

  	RUNS_list * schedule_history;    	/* List of run history */
  	int schedule_history_count;		/* Count of scheduled runs history */

	uint8 * name;				/* Name of the job */
  	uint8 * command;			/* Command char string */
	
	struct jobs_ * next;		/* Next job element from the list */
} JOB;

JOB new_job();
JOB new_job_jb(JOB * old_job);
JOB destroy_job(JOB * old_job);

#endif // JOB_H
