#include "serialDebug.h"

#include "Arduino.h"
#define CAMDEBUG 1

#ifdef __cplusplus
extern "C" {
#endif



void camDebugOK(esp_err_t ret)
{
	 if(ESP_OK==ret)
		 camDebugln("OK");
	 else
		  camDebugln("Fail");
}

void camDebugln(char *data)
{
	if(CAMDEBUG)
	Serial.println(data);
}

void camDebug(char *data)
{
	if(CAMDEBUG)
	Serial.print(data);
}

void camDebugInt(int data)
{
	if(CAMDEBUG)
	Serial.print(data);
}
void camDebugHex(int data)
{
	if(CAMDEBUG)
	Serial.print(data,HEX);
}


#ifdef __cplusplus
}
#endif


























