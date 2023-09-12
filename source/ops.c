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
#include <time.h>
#include <math.h>
#include "typedefs.h"
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

#pragma endregion

/*******************************************************************************
 *                         6. FILE PRIVATE FUNCTIONS
 ******************************************************************************/
#pragma region

#pragma region PROTOTYPES

uint8_t u08_randomGenerator(              void);

#pragma endregion PROTOTYPES

uint8_t u08_randomGenerator(              void)
{
    srand(time(R_NULL));
    return (uint8_t)(rand()%10);
}

#pragma endregion

/*******************************************************************************
 *                          7. FILE PUBLIC FUNCTIONS
 ******************************************************************************/
#pragma region

uint32_t u32_Trace(                         uint8_t _u08_matrixSize, uint8_t _u08_matrix[][_08_matrixSize]) 
{
    uint32_t _u32_trace = 0U;

    for ( uint8_8 i = 0U; i < _u08_matrixSize; ++i )
    {
        _u32_trace += _u08_matrix[i][i];
    }

    return _u32_trace;
}

uint32_t u132_DiagonalProduct(              uint8_t _08_matrixSize, uint8_t _u8_matrix[][_08_matrixSize])
{
   uint32_t _u32_diagonal = 1U;

    for ( uint8_8 _u08_i = 0U; _u08_i < _u08_matrixSize; ++_u08_i )
    {
        _u32_diagonal *= _u08_matrix[_u08_i][_u08_i];
    }

    return _u32_diagonal; 
}

r_bool_t bln_IsDiagonal(                    uint8_t _u08_matrixSize, uint8_t _u8_matrix[][_u08_matrixSize])
{
    r_bool_t _bln_isDiagonal = r_true;

    for ( uint8_t _u08_i = 0U; _u08_i < _u08_matrixSize; ++_u08_i )
    {
        for( uint8_t _u08_j = 0U; _u08_j < _u08_matrixSize; ++_u08_j )
        {
            if ( ( 0U != _u08_matrix[_u08_i][_u08_j]  && _u08_i != _u08_j ) || 
                ( 1U != _u08_matrix[_u08_i][_u08_j]  && _u08_i == _u08_j ))
            {
                _bln_isDiagonal == r_false;
            }    
        }
    }

    return _bln_isDiagonal;
}

void vfn_FillingMatrix(                     uint8_t _u08_matrixSize, uint8_t **_08_matrixToBeFilled)
{
    for ( uint8_t _u08_i = 0U; _u08_i < _u08_matrixSize; ++_u08_i )
    {
        for( uint8_t _u08_j = 0U; _u08_j < _u08_matrixSize; ++_u08_j )
        {
            _08_matrixToBeFilled[i][j] = u08_randomGenerator();   
        }
    }   
}

void vfn_PrintingMatrix(                    uint8_t _u08_matrixSize, uint8_t _u8_matrixToBePrinted[][_08_matrixSize])
{
    char aux[5];

     for ( uint8_t _u08_i = 0U; _u08_i < _u08_matrixSize; ++_u08_i )
    {
        for( uint8_t _u08_j = 0U; _u08_j < _u08_matrixSize; ++_u08_j )
        {
            if( (_u08_matrixSize - 1) < _u08_j )
            {
                snprintf(aux, 5, "%d ", _u8_matrixToBePrinted[_u08_i][_u08_j]);
            }
            else
            {
                snprintf(aux, 5, "%d\n", _u8_matrixToBePrinted[_u08_i][_u08_j]); 
            }   
        }
    } 
}


#pragma endregion

/* For GreenHillsSoftware */
#pragma ghs endnowarning 161
/* For CodeWarrior */
#pragma warning on(10186)
