#ifndef _SERIALDBG_H_
#define _SERIALDBG_


#ifdef __cplusplus
extern "C" {
#endif
#include "esp_err.h"



void camDebugOK(esp_err_t ret);
void camDebug(char *data);
void camDebugln(char *data);
void camDebugInt(int data);
void camDebugHex(int data);

#ifdef __cplusplus
}
#endif

#endif