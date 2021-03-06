/** 
 * @file Core2.c
 * @generated by C6678CPrinter
 * @date Sun Jul 05 00:55:54 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char SharedMem[1796]; //  size:= 1796*char
extern long *const init_out__runningTotal__5;  // accumulateMatrices_0_init_runningTotal_init_out > accumulateMatrices_0_runningTotal size:= 8*long defined in Core0
extern char *const accumulateMatrices_0_init_ru__0;  // accumulateMatrices_0_init_runningTotal > accumulateMatrices_0 size:= 32*char defined in Core0
extern char *const accumulateMatrices_2_init_ru__0;  // accumulateMatrices_2_init_runningTotal > accumulateMatrices_2 size:= 32*char defined in Core0
extern char *const explode_generateMatrices_sta__0;  // explode_generateMatrices_startArray > accumulateMatrices_2 size:= 32*char defined in Core0
extern long *const init_out__runningTotal__0;  // accumulateMatrices_2_init_runningTotal_init_out > accumulateMatrices_2_runningTotal size:= 8*long defined in Core0
extern long *const startArray_16__inputArray__0;  // explode_generateMatrices_startArray_startArray_16 > accumulateMatrices_2_inputArray size:= 8*long defined in Core0
extern long *const output__input_16__0;  // accumulateMatrices_2_output > implode_broadcastOutput_input_input_16 size:= 8*long defined in Core0
extern char *const accumulateMatrices_2__implod__0;  // accumulateMatrices_2 > implode_broadcastOutput_input size:= 32*char defined in Core0
extern char *const broadcastOutput__broadcastOu__3;  // broadcastOutput > broadcastOutput_end_output1_24 size:= 32*char defined in Core0
extern char *const FIFO_Head_broadcastOutput_en__3;  // FIFO_Head_broadcastOutput_end_output1_24 > accumulateMatrices_3_init_runningTotal size:= 32*char defined in Core1
extern long *const output1_24__end_in__0;  // broadcastOutput_output1_24 > broadcastOutput_end_output1_24_end_in size:= 8*long defined in Core0

// Core Global Definitions
char *const FIFO_Head_broadcastOutput_en__1 = (char*) (SharedMem+1600);  // FIFO_Head_broadcastOutput_end_output1_0 > accumulateMatrices_0_init_runningTotal size:= 32*char

void core2(void){
	// Initialisation(s)
	communicationInit();
	fifoInit(FIFO_Head_broadcastOutput_en__1, 32*sizeof(char), NULL, 0);
	cache_wbInv(FIFO_Head_broadcastOutput_en__1, 32*sizeof(char));

	// Begin the execution loop 
	while(1){
		busy_barrier();
		cache_inv(FIFO_Head_broadcastOutput_en__1, 32*sizeof(char));
		fifoPop(init_out__runningTotal__5, FIFO_Head_broadcastOutput_en__1, 32*sizeof(char), NULL, 0);
		cache_wbInv(accumulateMatrices_0_init_ru__0, 32*sizeof(char));
		sendStart(7); // Core2 > Core7: accumulateMatrices_0_init_ru__0 
		sendEnd(); // Core2 > Core7: accumulateMatrices_0_init_ru__0 
		receiveStart(); // Core5 > Core2: accumulateMatrices_2_init_ru__0 
		receiveEnd(5); // Core5 > Core2: accumulateMatrices_2_init_ru__0 
		cache_inv(accumulateMatrices_2_init_ru__0, 32*sizeof(char));
		receiveStart(); // Core7 > Core2: explode_generateMatrices_sta__0 
		receiveEnd(7); // Core7 > Core2: explode_generateMatrices_sta__0 
		cache_inv(explode_generateMatrices_sta__0, 32*sizeof(char));
		add(8/*rows*/,8/*columns*/,init_out__runningTotal__0,startArray_16__inputArray__0,output__input_16__0); // accumulateMatrices_2
		cache_inv(init_out__runningTotal__0, 8*sizeof(long));
		cache_inv(startArray_16__inputArray__0, 8*sizeof(long));
		cache_wbInv(accumulateMatrices_2__implod__0, 32*sizeof(char));
		sendStart(7); // Core2 > Core7: accumulateMatrices_2__implod__0 
		sendEnd(); // Core2 > Core7: accumulateMatrices_2__implod__0 
		receiveStart(); // Core7 > Core2: broadcastOutput__broadcastOu__3 
		receiveEnd(7); // Core7 > Core2: broadcastOutput__broadcastOu__3 
		cache_inv(broadcastOutput__broadcastOu__3, 32*sizeof(char));
		fifoPush(output1_24__end_in__0, FIFO_Head_broadcastOutput_en__3, 32*sizeof(char), NULL, 0);
		cache_wbInv(FIFO_Head_broadcastOutput_en__3, 32*sizeof(char));
		cache_inv(output1_24__end_in__0, 8*sizeof(long));
	}
}
