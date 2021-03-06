/*!
    \file  gd32f1x0_it.h
    \brief the header file of the ISR
*/

/*
    Copyright (C) 2016 GigaDevice

    2014-12-26, V1.0.0, firmware for GD32F1x0(x=3,5)
    2016-01-15, V2.0.0, firmware for GD32F1x0(x=3,5,7,9)
    2016-04-30, V3.0.0, firmware update for GD32F1x0(x=3,5,7,9)
*/

#ifndef GD32F1X0_IT_H
#define GD32F1X0_IT_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "iap_core.h"

/* function declarations */
/* NMI handle function */
void NMI_Handler(void);
/* HardFault handle function */
void HardFault_Handler(void);
/* MemManage handle function */
void MemManage_Handler(void);
/* BusFault handle function */
void BusFault_Handler(void);
/* UsageFault handle function */
void UsageFault_Handler(void);
/* SVC handle function */
void SVC_Handler(void);
/* DebugMon handle function */
void DebugMon_Handler(void);
/* PendSV handle function */
void PendSV_Handler(void);
/* USBD handle function */
void USBD_LP_IRQHandler(void);

#ifdef USBD_LOWPWR_MODE_ENABLE
/* USBD wakeup handle function */
void  USBDWakeUp_IRQHandler (void);
#endif /* USBD_LOWPWR_MODE_ENABLE */

#ifdef __cplusplus
}
#endif

#endif /* GD32F1X0_IT_H */
