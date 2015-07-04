/** 
 * @file Core1.c
 * @generated by C6678CPrinter
 * @date Sun Jul 05 00:33:40 BST 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateMatrices_arr__12;  // explode_generateMatrices_arrayA > addMatrices_2 size:= 32*char defined in Core0
extern char *const explode_generateMatrices_arr__4;  // explode_generateMatrices_arrayB > addMatrices_2 size:= 32*char defined in Core0
extern long *const arrayA_16__arrayA__0;  // explode_generateMatrices_arrayA_arrayA_16 > addMatrices_2_arrayA size:= 8*long defined in Core0
extern long *const arrayB_16__arrayB__0;  // explode_generateMatrices_arrayB_arrayB_16 > addMatrices_2_arrayB size:= 8*long defined in Core0
extern long *const arrayC__arrayC_16__0;  // addMatrices_2_arrayC > implode_displayMatrices_arrayC_arrayC_16 size:= 8*long defined in Core0
extern char *const addMatrices_2__implode_displ__0;  // addMatrices_2 > implode_displayMatrices_arrayC size:= 32*char defined in Core0

// Core Global Definitions

void core1(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core1: explode_generateMatrices_arr__12 
		receiveEnd(0); // Core0 > Core1: explode_generateMatrices_arr__12 
		cache_inv(explode_generateMatrices_arr__12, 32*sizeof(char));
		receiveStart(); // Core7 > Core1: explode_generateMatrices_arr__4 
		receiveEnd(7); // Core7 > Core1: explode_generateMatrices_arr__4 
		cache_inv(explode_generateMatrices_arr__4, 32*sizeof(char));
		add(8/*rowsA*/,8/*columnsA*/,arrayA_16__arrayA__0,arrayB_16__arrayB__0,arrayC__arrayC_16__0); // addMatrices_2
		cache_inv(arrayA_16__arrayA__0, 8*sizeof(long));
		cache_inv(arrayB_16__arrayB__0, 8*sizeof(long));
		cache_wbInv(addMatrices_2__implode_displ__0, 32*sizeof(char));
		sendStart(7); // Core1 > Core7: addMatrices_2__implode_displ__0 
		sendEnd(); // Core1 > Core7: addMatrices_2__implode_displ__0 
	}
}