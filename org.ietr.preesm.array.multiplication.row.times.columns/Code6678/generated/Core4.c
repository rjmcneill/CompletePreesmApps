/** 
 * @file Core4.c
 * @generated by C6678CPrinter
 * @date Wed Feb 18 14:31:07 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const broadcastArrayB__multiplyMat__1;  // broadcastArrayB > multiplyMatricies_6 size:= 67108864*char defined in Core0
extern char *const explode_generateMatricies_ar__5;  // explode_generateMatricies_arrayA > multiplyMatricies_6 size:= 8388608*char defined in Core0
extern long *const arrayA_12582912__arrayA__0;  // explode_generateMatricies_arrayA_arrayA_12582912 > multiplyMatricies_6_arrayA size:= 2097152*long defined in Core0
extern long *const arrayBOut_100663296__arrayB__0;  // broadcastArrayB_arrayBOut_100663296 > multiplyMatricies_6_arrayB size:= 16777216*long defined in Core0
extern long *const output__arrayC_12582912__0;  // multiplyMatricies_6_output > implode_displayMatrix_arrayC_arrayC_12582912 size:= 2097152*long defined in Core0
extern char *const multiplyMatricies_6__implode__0;  // multiplyMatricies_6 > implode_displayMatrix_arrayC size:= 8388608*char defined in Core0

// Core Global Definitions

void core4(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core7 > Core4: broadcastArrayB__multiplyMat__1 
		receiveEnd(7); // Core7 > Core4: broadcastArrayB__multiplyMat__1 
		cache_inv(broadcastArrayB__multiplyMat__1, 67108864*sizeof(char));
		receiveStart(); // Core0 > Core4: explode_generateMatricies_ar__5 
		receiveEnd(0); // Core0 > Core4: explode_generateMatricies_ar__5 
		cache_inv(explode_generateMatricies_ar__5, 8388608*sizeof(char));
		multiply(4096/*rowsA*/,4096/*columnsA*/,4096/*rowsB*/,4096/*columnsB*/,arrayA_12582912__arrayA__0,arrayBOut_100663296__arrayB__0,output__arrayC_12582912__0); // multiplyMatricies_6
		cache_inv(arrayA_12582912__arrayA__0, 2097152*sizeof(long));
		cache_inv(arrayBOut_100663296__arrayB__0, 16777216*sizeof(long));
		cache_wbInv(multiplyMatricies_6__implode__0, 8388608*sizeof(char));
		sendStart(7); // Core4 > Core7: multiplyMatricies_6__implode__0 
		sendEnd(); // Core4 > Core7: multiplyMatricies_6__implode__0 
	}
}
