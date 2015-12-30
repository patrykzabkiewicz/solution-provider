/*
 *
 *  Priority queue structure
 *
 *  Desribes the main server running
 *
 * 	Author: 	Patryk Zabkiewicz
 * 	Date:		24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#ifndef PQUEUE_INT
#define PQUEUE_INT

/* The integer priority queue structure */
typedef struct {
        /* List bases and ends, (indexed by height) */
        int * first;
        int * last;

        /* Arrays of previous/next node indices for each pixel (indexed by pixel) */
        int * prev;
        int * next;

        /* Current height of highest active, source height, and maximum allowable height */
        int curHeight;
        int sourceHeight;
        int maxHeight;
} PQUEUE_INT;

#endif // PQUEUE_INT
