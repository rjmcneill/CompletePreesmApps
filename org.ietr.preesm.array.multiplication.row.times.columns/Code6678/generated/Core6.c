/** 
 * @file Core6.c
 * @generated by C6678CPrinter
 * @date Wed Feb 18 14:31:07 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const broadcastArrayB__multiplyMat__2;  // broadcastArrayB > multiplyMatricies_3 size:= 67108864*char defined in Core0
extern char *const explode_generateMatricies_ar__4;  // explode_generateMatricies_arrayA > multiplyMatricies_3 size:= 8388608*char defined in Core0
extern long *const arrayA_6291456__arrayA__0;  // explode_generateMatricies_arrayA_arrayA_6291456 > multiplyMatricies_3_arrayA size:= 2097152*long defined in Core0
extern long *const arrayBOut_50331648__arrayB__0;  // broadcastArrayB_arrayBOut_50331648 > multiplyMatricies_3_arrayB size:= 16777216*long defined in Core0
extern long *const output__arrayC_6291456__0;  // multiplyMatricies_3_output > implode_displayMatrix_arrayC_arrayC_6291456 size:= 2097152*long defined in Core0
extern char *const multiplyMatricies_3__implode__0;  // multiplyMatricies_3 > implode_displayMatrix_arrayC size:= 8388608*char defined in Core0

// Core Global Definitions

void core6(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core7 > Core6: broadcastArrayB__multiplyMat__2 
		receiveEnd(7); // Core7 > Core6: broadcastArrayB__multiplyMat__2 
		cache_inv(broadcastArrayB__multiplyMat__2, 67108864*sizeof(char));
		receiveStart(); // Core0 > Core6: explode_generateMatricies_ar__4 
		receiveEnd(0); // Core0 > Core6: explode_generateMatricies_ar__4 
		cache_inv(explode_generateMatricies_ar__4, 8388608*sizeof(char));
		multiply(4096/*rowsA*/,4096/*columnsA*/,4096/*rowsB*/,4096/*columnsB*/,arrayA_6291456__arrayA__0,arrayBOut_50331648__arrayB__0,output__arrayC_6291456__0); // multiplyMatricies_3
		cache_inv(arrayA_6291456__arrayA__0, 2097152*sizeof(long));
		cache_inv(arrayBOut_50331648__arrayB__0, 16777216*sizeof(long));
		cache_wbInv(multiplyMatricies_3__implode__0, 8388608*sizeof(char));
		sendStart(7); // Core6 > Core7: multiplyMatricies_3__implode__0 
		sendEnd(); // Core6 > Core7: multiplyMatricies_3__implode__0 
	}
}
