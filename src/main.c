/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"

// #include "driver.h"

#include "demo.h"

int app_main(void)
{
    lv_init();

    /* Initialize your hardware. */
    
    /* hw_init(); */

    demo_create();

    /* Create the UI or start a task for it.
     * In the end, don't forget to call `lv_task_handler` in a loop. */

    /* hw_loop(); */

    return 0;
}
