/**
  ******************************************************************************
  * @file           : helper.h
  * @brief          : Header for helper.c
  ******************************************************************************
  */

#ifndef HELPER_H_
#define HELPER_H_

#include "main.h"

typedef struct
{
    unsigned int second;
    unsigned int minute;
    unsigned int hour;
    unsigned int weekday;
    unsigned int day;
    unsigned int month;
    unsigned int year;
} DateTime;

void RTC_getTime(I2C_HandleTypeDef * hi2c, DateTime * dateTime);
void RTC_setTime(I2C_HandleTypeDef * hi2c, const DateTime * dateTime);

void DAC_init(SPI_HandleTypeDef * hspi, GPIO_TypeDef * nCS_Port, uint16_t nCS_Pin);
void DAC_setChannel(SPI_HandleTypeDef * hspi, GPIO_TypeDef * nCS_Port, uint16_t nCS_Pin, uint8_t channel, uint8_t value);
void DAC_setAll(SPI_HandleTypeDef * hspi, GPIO_TypeDef * nCS_Port, uint16_t nCS_Pin, uint8_t value);

void SR_clearDigits(SPI_HandleTypeDef * hspi, GPIO_TypeDef * nCS_Port, uint16_t nCS_Pin);
void SR_setDigits(SPI_HandleTypeDef * hspi, GPIO_TypeDef * nCS_Port, uint16_t nCS_Pin, uint8_t * digits);

uint8_t reverseByte(uint8_t b);

#endif