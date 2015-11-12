/* C code for program noraceTest, generated by snc from ../norace.st */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"
# line 7 "../raceCommon.st"
#include "../testSupport.h"
# line 16 "../raceCommon.st"
static const EF_ID efx = 1;

/* Variable declarations */
struct seqg_vars {
# line 9 "../raceCommon.st"
	string x;
# line 13 "../raceCommon.st"
	string y;
	struct seqg_vars_race1 {
# line 27 "../raceCommon.st"
		string z;
	} seqg_vars_race1;
	struct seqg_vars_race3 {
# line 104 "../raceCommon.st"
		string z;
	} seqg_vars_race3;
	struct seqg_vars_stop {
# line 135 "../raceCommon.st"
		int seconds;
	} seqg_vars_stop;
};


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
	{
# line 135 "../raceCommon.st"
	static int seqg_initvar_seconds = 10;
	memcpy(&seqg_var->seqg_vars_stop.seconds, &seqg_initvar_seconds, sizeof(seqg_initvar_seconds));
	}
}

/* Program entry func */
static void seqg_entry(SS_ID seqg_env)
{
# line 22 "../raceCommon.st"
	seq_test_init(10);
# line 23 "../raceCommon.st"
	testDiag("This test will run for %d seconds...", 10);
}

/****** Code for state "init" in state set "race1" ******/

/* Event function for state "init" in state set "race1" */
static seqBool seqg_event_race1_0_init(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
	if (TRUE)
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "init" in state set "race1" */
static void seqg_action_race1_0_init(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 31 "../raceCommon.st"
			seqg_var->x[0] = 0;
		}
		return;
	}
}

/****** Code for state "wait" in state set "race1" ******/

/* Event function for state "wait" in state set "race1" */
static seqBool seqg_event_race1_0_wait(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 35 "../raceCommon.st"
	if (seq_delay(seqg_env, 0.001))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
# line 52 "../raceCommon.st"
	if ((seqg_var->x[0] && seqg_var->x[1] && seqg_var->x[0] != seqg_var->x[1]) || (seqg_var->y[0] && seqg_var->y[1] && seqg_var->y[0] != seqg_var->y[1]) || (seqg_var->seqg_vars_race1.z[0] && seqg_var->seqg_vars_race1.z[1] && seqg_var->seqg_vars_race1.z[0] != seqg_var->seqg_vars_race1.z[1]))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 1;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "wait" in state set "race1" */
static void seqg_action_race1_0_wait(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 36 "../raceCommon.st"
			int j;
# line 37 "../raceCommon.st"
			for (j = 0; j < 1000; j++)
			{
# line 38 "../raceCommon.st"
				int i;
# line 39 "../raceCommon.st"
				for (i = 0; i < MAX_STRING_SIZE; i++)
				{
# line 41 "../raceCommon.st"
					if (!seqg_var->x[i])
						break;
# line 42 "../raceCommon.st"
					if (seqg_var->x[i] != seqg_var->x[0])
					{
# line 44 "../raceCommon.st"
						testFail("x[0]=%c!=%c=x[%d]", seqg_var->x[0], seqg_var->x[i], i);
						break;
					}
				}
			}
		}
		return;
	case 1:
		{
# line 54 "../raceCommon.st"
			testFail("%c/%c", seqg_var->x[0], seqg_var->x[1]);
		}
		return;
	}
}

/****** Code for state "init" in state set "race2" ******/

/* Event function for state "init" in state set "race2" */
static seqBool seqg_event_race2_1_init(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
	if (TRUE)
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "init" in state set "race2" */
static void seqg_action_race2_1_init(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 62 "../raceCommon.st"
			seqg_var->x[0] = 0;
		}
		return;
	}
}

/****** Code for state "wait" in state set "race2" ******/

/* Event function for state "wait" in state set "race2" */
static seqBool seqg_event_race2_1_wait(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 66 "../raceCommon.st"
	if (seq_delay(seqg_env, 0.001))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
# line 81 "../raceCommon.st"
	if (seq_delay(seqg_env, 0.002))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 1;
		return TRUE;
	}
# line 96 "../raceCommon.st"
	if (seqg_var->x[0] && seqg_var->x[1] && seqg_var->x[0] != seqg_var->x[1])
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 2;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "wait" in state set "race2" */
static void seqg_action_race2_1_wait(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 67 "../raceCommon.st"
			int j;
# line 68 "../raceCommon.st"
			for (j = 0; j < 1000; j++)
			{
# line 69 "../raceCommon.st"
				int i;
# line 70 "../raceCommon.st"
				for (i = 0; i < MAX_STRING_SIZE; i++)
				{
# line 72 "../raceCommon.st"
					if (!seqg_var->x[i])
						break;
# line 73 "../raceCommon.st"
					if (seqg_var->x[i] != seqg_var->x[0])
					{
# line 75 "../raceCommon.st"
						testFail("x[0]=%c!=%c=x[%d]", seqg_var->x[0], seqg_var->x[i], i);
						break;
					}
				}
			}
		}
		return;
	case 1:
		{
# line 82 "../raceCommon.st"
			int j;
# line 83 "../raceCommon.st"
			for (j = 0; j < 1000; j++)
			{
# line 84 "../raceCommon.st"
				int i;
# line 85 "../raceCommon.st"
				for (i = 0; i < MAX_STRING_SIZE; i++)
				{
# line 87 "../raceCommon.st"
					if (!seqg_var->x[i])
						break;
# line 88 "../raceCommon.st"
					if (seqg_var->x[i] != seqg_var->x[0])
					{
# line 90 "../raceCommon.st"
						testFail("x[0]=%c!=%c=x[%d]", seqg_var->x[0], seqg_var->x[i], i);
						break;
					}
				}
			}
		}
		return;
	case 2:
		{
# line 98 "../raceCommon.st"
			testFail("x[0]=%c!=%c=x[1]", seqg_var->x[0], seqg_var->x[1]);
		}
		return;
	}
}

/****** Code for state "init" in state set "race3" ******/

/* Event function for state "init" in state set "race3" */
static seqBool seqg_event_race3_2_init(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
	if (TRUE)
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "init" in state set "race3" */
static void seqg_action_race3_2_init(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 108 "../raceCommon.st"
			seqg_var->x[0] = 0;
		}
		return;
	}
}

/****** Code for state "wait" in state set "race3" ******/

/* Event function for state "wait" in state set "race3" */
static seqBool seqg_event_race3_2_wait(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 112 "../raceCommon.st"
	if (seq_delay(seqg_env, 0.001))
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
# line 127 "../raceCommon.st"
	if (seqg_var->x[0] && seqg_var->x[1] && seqg_var->x[0] != seqg_var->x[1])
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 1;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "wait" in state set "race3" */
static void seqg_action_race3_2_wait(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 113 "../raceCommon.st"
			int j;
# line 114 "../raceCommon.st"
			for (j = 0; j < 1000; j++)
			{
# line 115 "../raceCommon.st"
				int i;
# line 116 "../raceCommon.st"
				for (i = 0; i < MAX_STRING_SIZE; i++)
				{
# line 118 "../raceCommon.st"
					if (!seqg_var->x[i])
						break;
# line 119 "../raceCommon.st"
					if (seqg_var->x[i] != seqg_var->x[0])
					{
# line 121 "../raceCommon.st"
						testFail("x[0]=%c!=%c=x[%d]", seqg_var->x[0], seqg_var->x[i], i);
						break;
					}
				}
			}
		}
		return;
	case 1:
		{
# line 129 "../raceCommon.st"
			testFail("x[0]=%c!=%c=x[1]", seqg_var->x[0], seqg_var->x[1]);
		}
		return;
	}
}

/****** Code for state "count" in state set "stop" ******/

/* Event function for state "count" in state set "stop" */
static seqBool seqg_event_stop_3_count(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 137 "../raceCommon.st"
	if (seqg_var->seqg_vars_stop.seconds == 0)
	{
		seq_exit(seqg_env);
		*seqg_ptrn = 0;
		return TRUE;
	}
# line 139 "../raceCommon.st"
	if (seq_delay(seqg_env, 1.0))
	{
		*seqg_pnst = 0;
		*seqg_ptrn = 1;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "count" in state set "stop" */
static void seqg_action_stop_3_count(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
		}
		return;
	case 1:
		{
# line 140 "../raceCommon.st"
			seqg_var->seqg_vars_stop.seconds -= 1;
# line 141 "../raceCommon.st"
			testPass("%d seconds left", seqg_var->seqg_vars_stop.seconds);
		}
		return;
	}
}

/* Program exit func */
static void seqg_exit(SS_ID seqg_env)
{
# line 147 "../raceCommon.st"
	seq_test_done();
}

#undef seqg_var

/************************ Tables ************************/

/* Channel table */
static seqChan seqg_chans[] = {
	/* chName, offset, varName, varType, count, eventNum, efId, monitored, queueSize, queueIndex */
	{"x", offsetof(struct seqg_vars, x), "x", P_STRING, 1, 2, 1, 1, 0, 0},
	{"", offsetof(struct seqg_vars, y), "y", P_STRING, 1, 3, 0, 0, 0, 0},
	{"", offsetof(struct seqg_vars, seqg_vars_race1.z), "z", P_STRING, 1, 4, 0, 0, 0, 0},
	{"", offsetof(struct seqg_vars, seqg_vars_race3.z), "z", P_STRING, 1, 5, 0, 0, 0, 0},
};

/* Event masks for state set "race1" */
static const seqMask seqg_mask_race1_0_init[] = {
	0x00000000,
};
static const seqMask seqg_mask_race1_0_wait[] = {
	0x0000001c,
};

/* State table for state set "race1" */
static seqState seqg_states_race1[] = {
	{
	/* state name */        "init",
	/* action function */   seqg_action_race1_0_init,
	/* event function */    seqg_event_race1_0_init,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_race1_0_init,
	/* state options */     (0)
	},
	{
	/* state name */        "wait",
	/* action function */   seqg_action_race1_0_wait,
	/* event function */    seqg_event_race1_0_wait,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_race1_0_wait,
	/* state options */     (0)
	},
};

/* Event masks for state set "race2" */
static const seqMask seqg_mask_race2_1_init[] = {
	0x00000000,
};
static const seqMask seqg_mask_race2_1_wait[] = {
	0x00000004,
};

/* State table for state set "race2" */
static seqState seqg_states_race2[] = {
	{
	/* state name */        "init",
	/* action function */   seqg_action_race2_1_init,
	/* event function */    seqg_event_race2_1_init,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_race2_1_init,
	/* state options */     (0)
	},
	{
	/* state name */        "wait",
	/* action function */   seqg_action_race2_1_wait,
	/* event function */    seqg_event_race2_1_wait,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_race2_1_wait,
	/* state options */     (0)
	},
};

/* Event masks for state set "race3" */
static const seqMask seqg_mask_race3_2_init[] = {
	0x00000000,
};
static const seqMask seqg_mask_race3_2_wait[] = {
	0x00000004,
};

/* State table for state set "race3" */
static seqState seqg_states_race3[] = {
	{
	/* state name */        "init",
	/* action function */   seqg_action_race3_2_init,
	/* event function */    seqg_event_race3_2_init,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_race3_2_init,
	/* state options */     (0)
	},
	{
	/* state name */        "wait",
	/* action function */   seqg_action_race3_2_wait,
	/* event function */    seqg_event_race3_2_wait,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_race3_2_wait,
	/* state options */     (0)
	},
};

/* Event masks for state set "stop" */
static const seqMask seqg_mask_stop_3_count[] = {
	0x00000000,
};

/* State table for state set "stop" */
static seqState seqg_states_stop[] = {
	{
	/* state name */        "count",
	/* action function */   seqg_action_stop_3_count,
	/* event function */    seqg_event_stop_3_count,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_stop_3_count,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "race1",
	/* states */            seqg_states_race1,
	/* number of states */  2
	},

	{
	/* state set name */    "race2",
	/* states */            seqg_states_race2,
	/* number of states */  2
	},

	{
	/* state set name */    "race3",
	/* states */            seqg_states_race3,
	/* number of states */  2
	},

	{
	/* state set name */    "stop",
	/* states */            seqg_states_stop,
	/* number of states */  1
	},
};

/* Program table (global) */
seqProgram noraceTest = {
	/* magic number */      2002003,
	/* program name */      "noraceTest",
	/* channels */          seqg_chans,
	/* num. channels */     4,
	/* state sets */        seqg_statesets,
	/* num. state sets */   4,
	/* user var size */     sizeof(struct seqg_vars),
	/* param */             "",
	/* num. event flags */  1,
	/* encoded options */   (0 | OPT_CONN | OPT_NEWEF | OPT_REENT | OPT_SAFE),
	/* init func */         seqg_init,
	/* entry func */        seqg_entry,
	/* exit func */         seqg_exit,
	/* num. queues */       0
};

#define PROG_NAME noraceTest
#include "seqMain.c"

/* Register sequencer commands and program */
#include "epicsExport.h"
static void noraceTestRegistrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&noraceTest);
}
epicsExportRegistrar(noraceTestRegistrar);
