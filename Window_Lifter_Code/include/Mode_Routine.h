/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Mode_Routine.h $
 * $Revision: 2 $
 * $Author: Guillermo Hern�ndez $
 * $Date: 11/02/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/**
    "Mode_Routine.h" file from the Window Lifter code.

    Contains the prototype of the functions of "Mode_Routine.c" file

    Down_Mode_Routine()
    Up_Mode_Routine()

    This function is related to the ID:
  	   DSD_00
  	   DSD_23
  	   DSD_24
      (ID Traceable to "DSD_Template" file)

*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*       AUTHOR        |      VERSION       |          DESCRIPTION            */
/*----------------------------------------------------------------------------*/
/* Guillermo Hern�ndez |          1         |  Template & Description Added   */
/*                     |                    |          to this file           */
/*----------------------------------------------------------------------------*/
/* Guillermo Hern�ndez |           2        |   Add Traceability ID�s         */
/*                     |                    |          to the code            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
  ============================================================================*/
#ifndef MODE_ROUTINE_H
#define MODE_ROUTINE_H

/* Includes */
/*============================================================================*/


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/

void Down_Mode_Routine (int *window_level);

void Up_Mode_Routine (int *window_level);

/* Exported functions prototypes */
/*============================================================================*/
void Down_Mode_Routine (int *window_level);

void Up_Mode_Routine (int *window_level);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
