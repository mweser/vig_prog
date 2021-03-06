/***************************************************************************************************************
 * FILE: File.h
 *
 * DESCRIPTION
 * File I/O routines.
 *
 * AUTHOR INFORMATION
 * Kevin R. Burger [KRB]
 *
 * Mailing Address:
 * Computer Science & Engineering
 * School of Computing, Informatics, and Decision Systems Engineering
 * Arizona State University
 * Tempe, AZ 85287-8809
 *
 * Email: burgerk@asu
 * Web:   http://kevin.floorsoup.com
 *
 * MODIFICATION HISTORY:
 * -------------------------------------------------------------------------------------------------------------
 * 24 Jan 2012 [KRB] Initial revision.
 *
 * March 16, 2014- Ashley Krueger, alkruege@asu.edu
 **************************************************************************************************************/
#ifndef FILE_H  /* Preprocessor guard to File.h from being included more than once */
#define FILE_H  /* See comments in Main.h. */

/*==============================================================================================================
 * Global function declarations.
 *
 * See comments in Main.h concerning what global function declarations are for.
 *============================================================================================================*/

/* Look at the function definitions in File.c to see what declarations you should write here. */
void FileReadStr(char *pFilename,char *pString);
void FileWriteStr(char *pFilename,char *pString);

#endif /* __FILE_H__ */
