#ifndef _EVAL_H_
#define _EVAL_H_

typedef enum{
  // simple objects
  OBJ_BOOL,
  OBJ_INT,
  OBJ_LONG,
  OBJ_FLOAT,
  OBJ_DOUBLE,
  OBJ_CHAR,
  OBJ_UCHAR,
  OBJ_SHORT,
  OBJ_USHORT,
  OBJ_UINT,
  OBJ_STRING,
  OBJ_VOID,
  OBJ_NULL
}ObjectType;

typedef union{
    int i;
    long l;
    float f;
    double d;
    char c;
    unsigned char uc;
    short sh;
    unsigned short ush;
    unsigned int ui;
    //int iarray[2];
    //float farray[2];
    //char carray[8];
    //unsigned char ucarray[8];
    char* _string;
    void* _void;
}Val;

typedef struct _object{
    ObjectType type;
    Val value;
}Object;

extern Object new_i(int);
extern Object new_l(long);
extern Object new_f(float);
extern Object new_d(double);
extern Object new_v();
extern Object new_s(char *);
extern Object new_c(char);
extern Object new_uc(unsigned char);
extern Object new_sh(short);
extern Object new_ush(unsigned short);
extern Object new_ui(unsigned int);

extern Object null;
 
extern int get_i(Object);
extern long get_l(Object);
extern float get_f(Object);
extern double get_d(Object);
extern void *get_v(Object);
extern char *get_s(Object);
extern char get_c(Object);
extern unsigned char get_uc(Object);
extern short get_sh(Object);
extern unsigned short get_ush(Object);
extern unsigned int get_ui(Object);
#endif