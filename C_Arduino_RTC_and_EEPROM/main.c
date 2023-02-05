/*
 * C_Arduino_RTC_and_EEPROM.c
 *
 * Created: 23.1.2023. 09:08:12
 * Author : Aleksandar Bogdanovic
 */ 

#include <avr/io.h>
#include "src/config/config.h"
#include <util/delay.h>
#include "src/rtc/rtc.h"
#include "src/rtc/rtc_define.h"
#include "src/twi/twi.h"
#include "src/eeprom/eeprom.h"
#include "src/eeprom/eeprom_define.h"

int main(void)
{
	RTC_setup();
	_delay_ms(EEPROM_DELAY);
	EEPROM_setup();
	
    while (1) 
    {
    }
}

