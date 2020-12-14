#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <windows.h>
void LoadRun(const char * const s, int i) {
void * lib;
void (*fun1)(void);
void (*fun2)(void);
lib = LoadLibrary(s);
if (!lib) {
printf("cannot open library '%s'\n", s);
return;
}
if(i==1){
fun1 = (void (*)(void))GetProcAddress((HINSTANCE)lib, "Massiv");
if (fun1 == NULL) {
printf("cannot load function func\n");
} else {
fun1();
}

}
if(i==2){
fun2 = (void (*)(void))GetProcAddress((HINSTANCE)lib, "Matrix");
if (fun1 == NULL) {
printf("cannot load function func\n");
} else {
fun2();
}

}
FreeLibrary((HINSTANCE)lib);
}