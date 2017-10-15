/*
 * k30/k30.c
 * 
 * Copyright (C) 2017 wkcs(Qihang Hu), <hqh2030@gmail.com>
 * 
 * 加载驱动，检查硬件，启动飞控主任务
 */

 #include "sys_log.h"

int k30_start(void)
{
    #ifdef __LOG_SYS
    /*
     * 如果使用日志系统则在正式开始工作前要最先保证日志系统可用
     */
    sys_log_init();
    #endif   

    sys_init();              
    check_hardware();
    sys_check();
    start_main_task();
}

