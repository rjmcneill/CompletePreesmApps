/** 
 * @file Core3.c
 * @generated by C6678CPrinter
 * @date Wed Jan 21 04:32:02 GMT 2015
 */
 

#include "cores.h"
#include "utils.h"
#include "communication.h"
#include "fifo.h"
#include "cache.h"

// Core Global Declaration
extern char *const explode_generateMatricies_ar__4;  // explode_generateMatricies_arrayB > multiplyMatricies_6 size:= 8388608*char defined in Core0
extern char *const explode_transposeMatrix_outp__6;  // explode_transposeMatrix_output > multiplyMatricies_6 size:= 8388608*char defined in Core0
extern long *const output_12582912__arrayA__0;  // explode_transposeMatrix_output_output_12582912 > multiplyMatricies_6_arrayA size:= 2097152*long defined in Core0
extern long *const arrayB_12582912__arrayB__0;  // explode_generateMatricies_arrayB_arrayB_12582912 > multiplyMatricies_6_arrayB size:= 2097152*long defined in Core0
extern long *const output__input_100663296__0;  // multiplyMatricies_6_output > implode_sumResults_input_input_100663296 size:= 16777216*long defined in Core0
extern char *const multiplyMatricies_6__implode__0;  // multiplyMatricies_6 > implode_sumResults_input size:= 67108864*char defined in Core0

// Core Global Definitions

void core3(void){
	// Initialisation(s)
	communicationInit();

	// Begin the execution loop 
	while(1){
		busy_barrier();
		receiveStart(); // Core0 > Core3: explode_generateMatricies_ar__4 
		receiveEnd(0); // Core0 > Core3: explode_generateMatricies_ar__4 
		cache_inv(explode_generateMatricies_ar__4, 8388608*sizeof(char));
		receiveStart(); // Core0 > Core3: explode_transposeMatrix_outp__6 
		receiveEnd(0); // Core0 > Core3: explode_transposeMatrix_outp__6 
		cache_inv(explode_transposeMatrix_outp__6, 8388608*sizeof(char));
		multiply(4096/*rowsA*/,4096/*columnsA*/,4096/*rowsB*/,4096/*columnsB*/,output_12582912__arrayA__0,arrayB_12582912__arrayB__0,output__input_100663296__0); // multiplyMatricies_6
		cache_inv(output_12582912__arrayA__0, 2097152*sizeof(long));
		cache_inv(arrayB_12582912__arrayB__0, 2097152*sizeof(long));
		cache_wbInv(multiplyMatricies_6__implode__0, 67108864*sizeof(char));
		sendStart(0); // Core3 > Core0: multiplyMatricies_6__implode__0 
		sendEnd(); // Core3 > Core0: multiplyMatricies_6__implode__0 
	}
}