/*
 * rtc_example.hpp
 *
 * Created on: 14 Feb. 2023
 * 		Author: Ricardo
 */

#pragma once

#include "ST-LIB.hpp"

int rtc_example(void){

	STLIB::start(Nucleo);

	//Time::set_RTC_data(0,30,20,10,28,2,2023);
	printf("\n\n\n\n\n\n\n\n\n\n");
	while(1){
		//Time::rtc_data now = Time::get_RTC_data();
		//printf("%d:%d:%d::%d  %d-%d-%d \n",now.hour,now.minute,now.second,now.counter,now.day,now.month,now.year);
	}
}
