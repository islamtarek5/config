/*********************************************************************************************************************************************/
/*                                                          Author      : Islam Tarek                                                        */
/*                                                          SW Module   : Project configuration file                                         */
/*                                                          Last Update : 27 / 7 /2022                                                       */
/*********************************************************************************************************************************************/
#ifndef CONFIG_PROJ_CONFIG_H_
#define CONFIG_PROJ_CONFIG_H_

#define DRIVER_EXISTED_IN_PROJECT                       0
#define DRIVER_NOT_EXISTED_IN_PROJECT                   1


#define LED         DRIVER_EXISTED_IN_PROJECT


#if  (LED == DRIVER_EXISTED_IN_PROJECT)
/**
 * @brief  This part defines which leds are used in the project
 * @note   Don't define any led after LED_MAX but you can define any number of leds before LED_MAX
 * @note   Don't remove LED_MAX because it will be usd to indicate Number of leds in the project
 * @note   The order which will be used to define leds will be same used in config file
 * @note   Order of leds must start from 0
 * @example typedef enum { LED_RED, LED_BLUE, ........ , LED_MAX}led_id_t;
 */
typedef enum
{
    /* Enter IDs of Leds in your project here following the instructions above */
    LED_MAX  /* Don't remove it and don't define any leds after it */
}led_id_t;
#endif 


#endif 