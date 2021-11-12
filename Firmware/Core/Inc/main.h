/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ESP_nRST_Pin GPIO_PIN_0
#define ESP_nRST_GPIO_Port GPIOA
#define ESP_RUN_Pin GPIO_PIN_1
#define ESP_RUN_GPIO_Port GPIOA
#define ESP_TX_Pin GPIO_PIN_2
#define ESP_TX_GPIO_Port GPIOA
#define ESP_RX_Pin GPIO_PIN_3
#define ESP_RX_GPIO_Port GPIOA
#define DAC_nCS_Pin GPIO_PIN_4
#define DAC_nCS_GPIO_Port GPIOA
#define DAC_SCK_Pin GPIO_PIN_5
#define DAC_SCK_GPIO_Port GPIOA
#define DAC_MOSI_Pin GPIO_PIN_7
#define DAC_MOSI_GPIO_Port GPIOA
#define JMP_nRST_Pin GPIO_PIN_0
#define JMP_nRST_GPIO_Port GPIOB
#define HV_SHDN_Pin GPIO_PIN_10
#define HV_SHDN_GPIO_Port GPIOB
#define SR_nCS_Pin GPIO_PIN_12
#define SR_nCS_GPIO_Port GPIOB
#define SR_SCK_Pin GPIO_PIN_13
#define SR_SCK_GPIO_Port GPIOB
#define SR_MOSI_Pin GPIO_PIN_15
#define SR_MOSI_GPIO_Port GPIOB
#define SYS_JTMS_Pin GPIO_PIN_13
#define SYS_JTMS_GPIO_Port GPIOA
#define SYS_JTCK_Pin GPIO_PIN_14
#define SYS_JTCK_GPIO_Port GPIOA
#define SYS_JTDI_Pin GPIO_PIN_15
#define SYS_JTDI_GPIO_Port GPIOA
#define SYS_JTDO_Pin GPIO_PIN_3
#define SYS_JTDO_GPIO_Port GPIOB
#define RTC_SCL_Pin GPIO_PIN_6
#define RTC_SCL_GPIO_Port GPIOB
#define RTC_SDA_Pin GPIO_PIN_7
#define RTC_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define RTC_I2C hi2c1
#define DAC_SPI hspi1
#define SR_SPI hspi2
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
