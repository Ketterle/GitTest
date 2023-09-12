/*!*****************************************************************************
 * @file filename.c
 ******************************************************************************/

/* Unrecognized pragma warning disable (used for code organization) */
/* For GreenHillsSoftware */
#pragma ghs nowarning 161
/* For CodeWarrior */
#pragma warning off(10186)
/* For IAR it is not needed */

/*******************************************************************************
 *                             1. FILE INCLUDES
 ******************************************************************************/
#pragma region

#include <stdint.h>
#include <stdio.h>
#include "ops.h"

#pragma endregion

/*******************************************************************************
 *                             2. FILE LOCAL DEFINES
 ******************************************************************************/
#pragma region

#pragma endregion

/*******************************************************************************
 *                             3. FILE LOCAL TYPEDEFS
 ******************************************************************************/
#pragma region

#pragma endregion

/*******************************************************************************
 *                      4. PUBLIC FILE GLOBAL VARIABLES
 ******************************************************************************/
#pragma region

#pragma endregion

/*******************************************************************************
 *                      5. PRIVATE FILE GLOBAL VARIABLES
 ******************************************************************************/
#pragma region

    static uint8_t _u08_size = 3;
    static uint8_t _u08_matrix[_u08_size][_u08_size];

#pragma endregion

/*******************************************************************************
 *                         6. FILE PRIVATE FUNCTIONS
 ******************************************************************************/
#pragma region

#pragma region PROTOTYPES

#pragma endregion PROTOTYPES

#pragma endregion

/*******************************************************************************
 *                          7. FILE PUBLIC FUNCTIONS
 ******************************************************************************/
#pragma region

void main()
{
    vfn_FillingMatrix( _u08_size,  _u08_matrix);
    vfn_PrintingMatrix( _u08_size,  _u08_matrix);    
}

#pragma endregion

/* For GreenHillsSoftware */
#pragma ghs endnowarning 161
/* For CodeWarrior */
#pragma warning on(10186)
