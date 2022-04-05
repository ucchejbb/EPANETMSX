#define MAXSEGMENTS 5000

typedef enum {
	XHEAD,         // pump cannot deliver head (closed)
	TEMPCLOSED,    // temporarily closed
	CLOSED,        // closed
	OPEN,          // open
	ACTIVE,        // valve active (partially open)
	XFLOW,         // pump exceeds maximum flow
	XFCV,          // FCV cannot supply flow
	XPRESSURE,     // valve cannot supply pressure
	FILLING,       // tank filling
	EMPTYING,      // tank emptying
	OVERFLOWING    // tank overflowing
} StatusType;


void	dispersion_pipe(int m, long tstep);			//effective dispersion coefficient and upstream/downstream node impact calculation
void    solve_nodequal(int m, long tstep);			//solve nodal concentration
void    segqual_update(int m, long tstep);			//update pipe segment concentration
void	tridiag(int n, double *a, double *b, double *c, double *r, double *y);