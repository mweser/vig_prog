/***************************************************************************************************************
 * FILE: View.h
 *
 * DESCRIPTION
 * Handles user interface.
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
 * 24 Jan 2012 [KRB] Initial revision *
 * March 16, 2014- Ashley Krueger, alkruege@asu.edu
 **************************************************************************************************************/
#ifndef VIEW_H  /* Preprocessor guard to prevent View.h from being included more than once */
#define VIEW_H  /* See comments in Main.h. */

/*==============================================================================================================
 * Global function declarations.
 *
 * See comments in Main.h concerning what global function declarations are for.
 *============================================================================================================*/
extern void ViewBegin();

extern void ViewEnd();

extern char ViewGetChar();

extern void ViewGetStr(char *pStr);

extern void ViewHelp();

extern void ViewPrintStr(char *pString);

extern void ViewVersion();

#endif /* __VIEW_H__ */
