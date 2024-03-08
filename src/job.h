#ifndef JOB_H
#define JOB_H

#include "typedefs.h"
#include "status_list.h"


#define COMMAND_LENGHT 150

typedef enum {
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
} JOB_STATUS;

typedef struct jobs_ {
	int32 id;					/* Identifier */
	int32 runs_counter;			/* How many time you have already runned the thing */
	int32 copy_of;				/* Copy of another job id */
	int32 * copy_list;			/* List of jobs copied from this one */
	
	ACL * acl_roles;			/* Access Control Level to this job */
	API_ROLE_ACL * api_role;	/* API Access Control Level */
	
	JOB_STATUS status;			/* Current status */

  	int32 priority;				/* Priority on the queue */
  	int32 importance;			/* Importance of the task */
	int32 severity;				/* Severity of the job */
  	int32 ttl;                	/* Time To Live */

	SCHEDULE * schedule;		/* Schedule of running time */
 	
	DATETIME * last_modification_date;	/* Date of last modification */
  	DATETIME * add_date;				/* Date of the creation of the job */
	
	USER * user_add;					/* Who created this job */
	USER * user_owner;					/* User that owns this process */
	USER * user_transfership;			/* List of ownerships transfers */
  	
	struct jobs_ * parent;              /* Tree structure of the jobs */
	int32 height;						/* Height in a tree of the inheritance */

  	STATUS_list * status_history;    	/* List of status history */
  	int status_history_count;			/* Count of status history records */

  	RUNS_list * schedule_history;    	/* List of run history */
  	int schedule_history_count;			/* Count of scheduled runs history */

	uint8 * name;				/* Name of the job */
  	uint8 * command;			/* Command char string */
	
	struct jobs_ * next;		/* Next job element from the list */
} JOB;

JOB * new_job();
JOB * copy_job(JOB * old_job);
void * destroy_job(JOB * old_job);

#endif // JOB_H
