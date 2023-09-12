/*!*****************************************************************************
 * @file      filename.h
 * @brief     A brief definition.
 * @details   Detailed explanation.
 * @author    Name Surnames <mail@facomsa.com>
 * @date      20YY-MM-DD
 * @copyright FACOMSA
 * @version   v0:[20XX-XX-XX XXX] - Creation of the library
 * @warning   Library not validated
 * @bug       No known bugs
 ******************************************************************************/

#ifndef _INCLUDE_GUARD_H
#define _INCLUDE_GUARD_H 1

/* Unrecognized pragma warning disable (used for code organization) */
/* For GreenHillsSoftware */
#pragma ghs nowarning 161
/* For CodeWarrior */
#pragma warning off(10186)
/* For IAR it is not needed */

/*******************************************************************************
 *                            1. FILE INCLUDES
 ******************************************************************************/
#pragma region

#include <stdint.h>
#include "typedefs.h"

#pragma endregion

/*******************************************************************************
 *                           2. LIBRARY DEFINES
 ******************************************************************************/
#pragma region

#pragma endregion

/*******************************************************************************
 *                          3. LIBRARY TYPEDEFS
 ******************************************************************************/
#pragma region

#pragma endregion

/*******************************************************************************
 *                       4. LIBRARY GLOBAL VARIABLES
 ******************************************************************************/
#pragma region


#pragma endregion

/*******************************************************************************
 *                     5. LIBRARY FILE PUBLIC FUNCTIONS
 ******************************************************************************/
#pragma region

uint32_t u32_Trace(                         uint8_t _u08_matrixSize, uint8_t _uu8_matrix[][_u08_matrixSize]);
uint32_t u132_DiagonalProduct(              uint8_t _u08_matrixSize, uint8_t _u8_matrix[][_08_matrixSize]);
void vfn_FillingMatrix(                     uint8_t _u08_matrixSize, uint8_t **_08_matrixToBeFilled);
void vfn_PrintingMatrix(                    uint8_t _u08_matrixSize, uint8_t _u8_matrixToBePrinted[][_08_matrixSize]);
r_bool_t bln_IsDiagonal(                    uint8_t _u08_matrixSize, uint8_t _uu8_matrix[][_u08_matrixSize]);

#pragma endregion

/* For GreenHillsSoftware */
#pragma ghs endnowarning 161
/* For CodeWarrior */
#pragma warning on(10186)

#endif
