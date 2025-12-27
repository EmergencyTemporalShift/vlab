/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_LSYS_INPUT_LSYS_INPUT_TAB_H_INCLUDED
# define YY_LSYS_INPUT_LSYS_INPUT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int lsys_inputdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tLSTART = 258,                 /* tLSTART  */
    tRING = 259,                   /* tRING  */
    tSEED = 260,                   /* tSEED  */
    tDLENGTH = 261,                /* tDLENGTH  */
    tMDEPTH = 262,                 /* tMDEPTH  */
    tCONSIDER = 263,               /* tCONSIDER  */
    tIGNORE = 264,                 /* tIGNORE  */
    tAXIOM = 265,                  /* tAXIOM  */
    tEND = 266,                    /* tEND  */
    tDEFINE = 267,                 /* tDEFINE  */
    tSTARTBLOCK = 268,             /* tSTARTBLOCK  */
    tENDBLOCK = 269,               /* tENDBLOCK  */
    tSTARTEACH = 270,              /* tSTARTEACH  */
    tENDEACH = 271,                /* tENDEACH  */
    tSTARTHOMO = 272,              /* tSTARTHOMO  */
    tSTARTDECOMP = 273,            /* tSTARTDECOMP  */
    tNOWARNING = 274,              /* tNOWARNING  */
    tWARNING = 275,                /* tWARNING  */
    tLSEP = 276,                   /* tLSEP  */
    tRSEP = 277,                   /* tRSEP  */
    tYIELDS = 278,                 /* tYIELDS  */
    tOYIELDS = 279,                /* tOYIELDS  */
    tNULL = 280,                   /* tNULL  */
    tEOL = 281,                    /* tEOL  */
    tIF = 282,                     /* tIF  */
    tDO = 283,                     /* tDO  */
    tWHILE = 284,                  /* tWHILE  */
    tELSE = 285,                   /* tELSE  */
    tARRAY = 286,                  /* tARRAY  */
    tEXTERNAL = 287,               /* tEXTERNAL  */
    tLPAREN = 288,                 /* tLPAREN  */
    tRPAREN = 289,                 /* tRPAREN  */
    tLBRACE = 290,                 /* tLBRACE  */
    tRBRACE = 291,                 /* tRBRACE  */
    tCOMMA = 292,                  /* tCOMMA  */
    tLBRACKET = 293,               /* tLBRACKET  */
    tRBRACKET = 294,               /* tRBRACKET  */
    tSEMI = 295,                   /* tSEMI  */
    tATAN2 = 296,                  /* tATAN2  */
    tTAN = 297,                    /* tTAN  */
    tSIN = 298,                    /* tSIN  */
    tCOS = 299,                    /* tCOS  */
    tATAN = 300,                   /* tATAN  */
    tASIN = 301,                   /* tASIN  */
    tACOS = 302,                   /* tACOS  */
    tSRAND = 303,                  /* tSRAND  */
    tRAN = 304,                    /* tRAN  */
    tNRAN = 305,                   /* tNRAN  */
    tBRAN = 306,                   /* tBRAN  */
    tBIRAN = 307,                  /* tBIRAN  */
    tEXP = 308,                    /* tEXP  */
    tLOG = 309,                    /* tLOG  */
    tFLOOR = 310,                  /* tFLOOR  */
    tCEIL = 311,                   /* tCEIL  */
    tSIGN = 312,                   /* tSIGN  */
    tSQRT = 313,                   /* tSQRT  */
    tTRUNC = 314,                  /* tTRUNC  */
    tFABS = 315,                   /* tFABS  */
    tINBLOB = 316,                 /* tINBLOB  */
    tPRINT = 317,                  /* tPRINT  */
    tFPRINTF = 318,                /* tFPRINTF  */
    tSTOP = 319,                   /* tSTOP  */
    tFOPEN = 320,                  /* tFOPEN  */
    tFCLOSE = 321,                 /* tFCLOSE  */
    tFFLUSH = 322,                 /* tFFLUSH  */
    tFSCANF = 323,                 /* tFSCANF  */
    tFUNC = 324,                   /* tFUNC  */
    tPLAY = 325,                   /* tPLAY  */
    tSETDERIVLENGTH = 326,         /* tSETDERIVLENGTH  */
    tGETDERIVLENGTH = 327,         /* tGETDERIVLENGTH  */
    tDISPLAY = 328,                /* tDISPLAY  */
    tVVXMIN = 329,                 /* tVVXMIN  */
    tVVXMAX = 330,                 /* tVVXMAX  */
    tVVYMIN = 331,                 /* tVVYMIN  */
    tVVYMAX = 332,                 /* tVVYMAX  */
    tVVZMIN = 333,                 /* tVVZMIN  */
    tVVZMAX = 334,                 /* tVVZMAX  */
    tVVSCALE = 335,                /* tVVSCALE  */
    tCURVEX = 336,                 /* tCURVEX  */
    tCURVEY = 337,                 /* tCURVEY  */
    tCURVEZ = 338,                 /* tCURVEZ  */
    tCURVEGAL = 339,               /* tCURVEGAL  */
    tARRAYREF = 340,               /* tARRAYREF  */
    tARRAYLHS = 341,               /* tARRAYLHS  */
    tARRAYDEF = 342,               /* tARRAYDEF  */
    tARRAYLVAL = 343,              /* tARRAYLVAL  */
    tSYMBOL = 344,                 /* tSYMBOL  */
    tNAME = 345,                   /* tNAME  */
    tNAMELVAL = 346,               /* tNAMELVAL  */
    tNAMELHS = 347,                /* tNAMELHS  */
    tSTRING = 348,                 /* tSTRING  */
    tVALUE = 349,                  /* tVALUE  */
    tINTEGER = 350,                /* tINTEGER  */
    tASSIGN = 351,                 /* tASSIGN  */
    tQUESTION = 352,               /* tQUESTION  */
    tCOLON = 353,                  /* tCOLON  */
    tOR = 354,                     /* tOR  */
    tAND = 355,                    /* tAND  */
    tEQUAL = 356,                  /* tEQUAL  */
    tNOTEQUAL = 357,               /* tNOTEQUAL  */
    tLT = 358,                     /* tLT  */
    tLE = 359,                     /* tLE  */
    tGE = 360,                     /* tGE  */
    tGT = 361,                     /* tGT  */
    tPLUS = 362,                   /* tPLUS  */
    tMINUS = 363,                  /* tMINUS  */
    tTIMES = 364,                  /* tTIMES  */
    tDIVIDE = 365,                 /* tDIVIDE  */
    tREM = 366,                    /* tREM  */
    tPOW = 367,                    /* tPOW  */
    tUMINUS = 368,                 /* tUMINUS  */
    tADDRESS = 369,                /* tADDRESS  */
    tNOT = 370                     /* tNOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 180 "lsys_input.y"

	Module* module;
	int integer;
	int function;
	double value;
	EToken* expression;
	EToken* identifier;
	Parameter* parameter;
	Statement* statement;
	char *name;
	char *operator_;
	char symbol;

#line 193 "lsys_input.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE lsys_inputlval;


int lsys_inputparse (void);


#endif /* !YY_LSYS_INPUT_LSYS_INPUT_TAB_H_INCLUDED  */
