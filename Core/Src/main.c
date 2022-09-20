/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int num = 0;
  void display7SEG(int num){
	  if(num == 0){	// set number 0
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	  }
	  if(num == 1){	// set number 1
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	  }
	  if(num == 2){	// set number 2
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  }
	  if(num == 3){	// set number 3
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  }
	  if(num == 4){	// set number 4
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  }
	  if(num == 5){	// set number 5
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  }
	  if(num == 6){	// set number 6
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  }
	  if(num == 7){	// set number 7
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	  }
	  if(num == 8){	// set number 8
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  }
	  if(num == 9){	// set number 9
		  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	  }
  }
  void display7SEG2(int num){ // set 7seg cho nhanh duong con lai
	  if(num == 0){	// set number 0
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, SET);
	  }
	  if(num == 1){	// set number 1
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, SET);
	  }
	  if(num == 2){	// set number 2
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, RESET);
	  }
	  if(num == 3){	// set number 3
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, RESET);
	  }
	  if(num == 4){	// set number 4
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, RESET);
	  }
	  if(num == 5){	// set number 5
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, RESET);
	  }
	  if(num == 6){	// set number 6
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, RESET);
	  }
	  if(num == 7){	// set number 7
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, SET);
	  }
	  if(num == 8){	// set number 8
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, RESET);
	  }
	  if(num == 9){	// set number 9
		  HAL_GPIO_WritePin(SEG_0_2_GPIO_Port, SEG_0_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_1_2_GPIO_Port, SEG_1_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_2_2_GPIO_Port, SEG_2_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_3_2_GPIO_Port, SEG_3_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_4_2_GPIO_Port, SEG_4_2_Pin, SET);
		  HAL_GPIO_WritePin(SEG_5_2_GPIO_Port, SEG_5_2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_6_2_GPIO_Port, SEG_6_2_Pin, RESET);
	  }
  }
  int d1 = 5;
  int v1 = -2;
  int x1 = -2;
  int d2 = -2;
  int v2 = -2;
  int x2 = 3;
  while (1)
  {
	  if(d1 >= 0){	// countdown red 1
		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		  display7SEG(d1);//ap dung ham cua bai 4
		  if(d1 == 0){
			  d1 = -1;
			  x1 = 3;
		  }
	  }
		  d1--;
		  if(x2 >= 0){	// countdown green 2
		  	  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
		  	  display7SEG2(x2);//ap dung ham cua bai 4 cho nhanh duong con lai
		  	  if(x2 == 0){
		  		  x2 = -1;
		  		  v2 = 2;
		  	  }
		  	  x2--;
		  }
		  if(v2 >= 0){	// countdown yellow 2
			  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
			  display7SEG2(v2);//ap dung ham cua bai 4 cho nhanh duong con lai
			  if(v2 == 0){
				  v2 = -2;
				  d2 = 5;
			  }
			  v2--;
		  }
	  if(d2 >= 0){	// countdown red 2
	  		  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
	  		  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
	  		  display7SEG2(d2);//ap dung ham cua bai 4 cho nhanh duong con lai
	  		  if(d2 == 1){
	  			  d2 = -1;
	  			  x2 = 3;
	  		  }
	  }
	  		  d2--;
	  		  if(x1 >= 0){	// countdown green 1
	  			  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	  			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	  			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	  			  display7SEG(x1);//ap dung ham cua bai 4
	  			  if(x1 == 0){
	  				  x1 = -1;
	  				  v1 = 2;
	  			  }
	  			  x1--;
	  		  }
	  		  if(v1 >= 0){	// countdown yellow 1
	  			  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	  			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	  			  display7SEG(v1);//ap dung ham cua bai 4
	  			  if(v1 == 1){
	  				  v1 = -2;
	  				  d1 = 5;
	  			  }
	  			  v1--;
	  		  }

	  HAL_Delay(1000);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_2_Pin
                          |SEG_4_2_Pin|SEG_5_2_Pin|SEG_6_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|SEG_5_Pin|SEG_6_Pin|SEG_0_2_Pin
                          |SEG_1_2_Pin|SEG_2_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin LED_RED_2_Pin
                           LED_YELLOW_2_Pin LED_GREEN_2_Pin */
  GPIO_InitStruct.Pin = LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG_0_Pin SEG_1_Pin SEG_2_Pin SEG_3_2_Pin
                           SEG_4_2_Pin SEG_5_2_Pin SEG_6_2_Pin SEG_3_Pin
                           SEG_4_Pin SEG_5_Pin SEG_6_Pin SEG_0_2_Pin
                           SEG_1_2_Pin SEG_2_2_Pin */
  GPIO_InitStruct.Pin = SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_2_Pin
                          |SEG_4_2_Pin|SEG_5_2_Pin|SEG_6_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|SEG_5_Pin|SEG_6_Pin|SEG_0_2_Pin
                          |SEG_1_2_Pin|SEG_2_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
