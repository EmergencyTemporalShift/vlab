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

#ifndef YY_L2C_L2C_TAB_H_INCLUDED
# define YY_L2C_L2C_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int l2cdebug;
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
    tAXIOM = 258,                  /* tAXIOM  */
    tMODULE = 259,                 /* tMODULE  */
    tPRODUCE = 260,                /* tPRODUCE  */
    tNPRODUCE = 261,               /* tNPRODUCE  */
    tSTART = 262,                  /* tSTART  */
    tSTARTEACH = 263,              /* tSTARTEACH  */
    tENDEACH = 264,                /* tENDEACH  */
    tEND = 265,                    /* tEND  */
    tMAXDEPTH = 266,               /* tMAXDEPTH  */
    tPROPENSITY = 267,             /* tPROPENSITY  */
    tGGROUP = 268,                 /* tGGROUP  */
    tCONSIDER = 269,               /* tCONSIDER  */
    tIGNORE = 270,                 /* tIGNORE  */
    tDERIVLENGTH = 271,            /* tDERIVLENGTH  */
    tRINGLSYSTEM = 272,            /* tRINGLSYSTEM  */
    tINTERPRETATION = 273,         /* tINTERPRETATION  */
    tDECOMPOSITION = 274,          /* tDECOMPOSITION  */
    tPRODUCTION = 275,             /* tPRODUCTION  */
    tGROUP = 276,                  /* tGROUP  */
    tENDGROUP = 277,               /* tENDGROUP  */
    tVGROUP = 278,                 /* tVGROUP  */
    tENDVGROUP = 279,              /* tENDVGROUP  */
    tCOLON = 280,                  /* tCOLON  */
    tLPAREN = 281,                 /* tLPAREN  */
    tRPAREN = 282,                 /* tRPAREN  */
    tSEMICOLON = 283,              /* tSEMICOLON  */
    tCOMMA = 284,                  /* tCOMMA  */
    tLESSTHAN = 285,               /* tLESSTHAN  */
    tLEFTSHIFT = 286,              /* tLEFTSHIFT  */
    tGREATERTHAN = 287,            /* tGREATERTHAN  */
    tRIGHTSHIFT = 288,             /* tRIGHTSHIFT  */
    tENDPRODPROTO = 289,           /* tENDPRODPROTO  */
    tEQUALS = 290,                 /* tEQUALS  */
    tINTEGER = 291,                /* tINTEGER  */
    tIDENT = 292,                  /* tIDENT  */
    tMODULEIDENT = 293,            /* tMODULEIDENT  */
    tERROR = 294,                  /* tERROR  */
    tVERIFYSTRING = 295,           /* tVERIFYSTRING  */
    tINRIGHTCONTEXT = 296,         /* tINRIGHTCONTEXT  */
    tINLEFTCONTEXT = 297,          /* tINLEFTCONTEXT  */
    tINNEWRIGHTCONTEXT = 298,      /* tINNEWRIGHTCONTEXT  */
    tINNEWLEFTCONTEXT = 299        /* tINNEWLEFTCONTEXT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 77 "l2c.y"

  char Ident[__lc_eMaxIdentifierLength+1];
  int ModuleId;
  int Integer;
  ParametersList ParamsList;
  FormalModuleDt* pFormalModuleData;
  FormalModuleDtList* pFormalModuleDataList;
  ContextData context;

#line 118 "l2c.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE l2clval;


int l2cparse (void);


#endif /* !YY_L2C_L2C_TAB_H_INCLUDED  */
