#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* P0_0 */
#define P0_0__0__MASK 0x01u
#define P0_0__0__PC CYREG_PRT0_PC0
#define P0_0__0__PORT 0u
#define P0_0__0__SHIFT 0
#define P0_0__AG CYREG_PRT0_AG
#define P0_0__AMUX CYREG_PRT0_AMUX
#define P0_0__BIE CYREG_PRT0_BIE
#define P0_0__BIT_MASK CYREG_PRT0_BIT_MASK
#define P0_0__BYP CYREG_PRT0_BYP
#define P0_0__CTL CYREG_PRT0_CTL
#define P0_0__DM0 CYREG_PRT0_DM0
#define P0_0__DM1 CYREG_PRT0_DM1
#define P0_0__DM2 CYREG_PRT0_DM2
#define P0_0__DR CYREG_PRT0_DR
#define P0_0__INP_DIS CYREG_PRT0_INP_DIS
#define P0_0__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define P0_0__LCD_EN CYREG_PRT0_LCD_EN
#define P0_0__MASK 0x01u
#define P0_0__PORT 0u
#define P0_0__PRT CYREG_PRT0_PRT
#define P0_0__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define P0_0__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define P0_0__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define P0_0__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define P0_0__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define P0_0__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define P0_0__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define P0_0__PS CYREG_PRT0_PS
#define P0_0__SHIFT 0
#define P0_0__SLW CYREG_PRT0_SLW

/* DMA_1 */
#define DMA_1__DRQ_CTL CYREG_IDMUX_DRQ_CTL2
#define DMA_1__DRQ_NUMBER 8u
#define DMA_1__NUMBEROF_TDS 0u
#define DMA_1__PRIORITY 3u
#define DMA_1__TERMIN_EN 0u
#define DMA_1__TERMIN_SEL 0u
#define DMA_1__TERMOUT0_EN 1u
#define DMA_1__TERMOUT0_SEL 8u
#define DMA_1__TERMOUT1_EN 0u
#define DMA_1__TERMOUT1_SEL 0u

/* DMA_2 */
#define DMA_2__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define DMA_2__DRQ_NUMBER 0u
#define DMA_2__NUMBEROF_TDS 0u
#define DMA_2__PRIORITY 0u
#define DMA_2__TERMIN_EN 0u
#define DMA_2__TERMIN_SEL 0u
#define DMA_2__TERMOUT0_EN 1u
#define DMA_2__TERMOUT0_SEL 0u
#define DMA_2__TERMOUT1_EN 0u
#define DMA_2__TERMOUT1_SEL 0u

/* DMA_3 */
#define DMA_3__DRQ_CTL CYREG_IDMUX_DRQ_CTL2
#define DMA_3__DRQ_NUMBER 9u
#define DMA_3__NUMBEROF_TDS 0u
#define DMA_3__PRIORITY 2u
#define DMA_3__TERMIN_EN 0u
#define DMA_3__TERMIN_SEL 0u
#define DMA_3__TERMOUT0_EN 1u
#define DMA_3__TERMOUT0_SEL 9u
#define DMA_3__TERMOUT1_EN 0u
#define DMA_3__TERMOUT1_SEL 0u

/* DMA_4 */
#define DMA_4__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define DMA_4__DRQ_NUMBER 1u
#define DMA_4__NUMBEROF_TDS 0u
#define DMA_4__PRIORITY 2u
#define DMA_4__TERMIN_EN 0u
#define DMA_4__TERMIN_SEL 0u
#define DMA_4__TERMOUT0_EN 1u
#define DMA_4__TERMOUT0_SEL 1u
#define DMA_4__TERMOUT1_EN 0u
#define DMA_4__TERMOUT1_SEL 0u

/* Pin_1 */
#define Pin_1__0__MASK 0x02u
#define Pin_1__0__PC CYREG_PRT0_PC1
#define Pin_1__0__PORT 0u
#define Pin_1__0__SHIFT 1
#define Pin_1__AG CYREG_PRT0_AG
#define Pin_1__AMUX CYREG_PRT0_AMUX
#define Pin_1__BIE CYREG_PRT0_BIE
#define Pin_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_1__BYP CYREG_PRT0_BYP
#define Pin_1__CTL CYREG_PRT0_CTL
#define Pin_1__DM0 CYREG_PRT0_DM0
#define Pin_1__DM1 CYREG_PRT0_DM1
#define Pin_1__DM2 CYREG_PRT0_DM2
#define Pin_1__DR CYREG_PRT0_DR
#define Pin_1__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_1__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_1__MASK 0x02u
#define Pin_1__PORT 0u
#define Pin_1__PRT CYREG_PRT0_PRT
#define Pin_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_1__PS CYREG_PRT0_PS
#define Pin_1__SHIFT 1
#define Pin_1__SLW CYREG_PRT0_SLW

/* Pin_2 */
#define Pin_2__0__MASK 0x04u
#define Pin_2__0__PC CYREG_PRT0_PC2
#define Pin_2__0__PORT 0u
#define Pin_2__0__SHIFT 2
#define Pin_2__AG CYREG_PRT0_AG
#define Pin_2__AMUX CYREG_PRT0_AMUX
#define Pin_2__BIE CYREG_PRT0_BIE
#define Pin_2__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_2__BYP CYREG_PRT0_BYP
#define Pin_2__CTL CYREG_PRT0_CTL
#define Pin_2__DM0 CYREG_PRT0_DM0
#define Pin_2__DM1 CYREG_PRT0_DM1
#define Pin_2__DM2 CYREG_PRT0_DM2
#define Pin_2__DR CYREG_PRT0_DR
#define Pin_2__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_2__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_2__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_2__MASK 0x04u
#define Pin_2__PORT 0u
#define Pin_2__PRT CYREG_PRT0_PRT
#define Pin_2__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_2__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_2__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_2__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_2__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_2__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_2__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_2__PS CYREG_PRT0_PS
#define Pin_2__SHIFT 2
#define Pin_2__SLW CYREG_PRT0_SLW

/* Pin_3 */
#define Pin_3__0__MASK 0x08u
#define Pin_3__0__PC CYREG_PRT0_PC3
#define Pin_3__0__PORT 0u
#define Pin_3__0__SHIFT 3
#define Pin_3__AG CYREG_PRT0_AG
#define Pin_3__AMUX CYREG_PRT0_AMUX
#define Pin_3__BIE CYREG_PRT0_BIE
#define Pin_3__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_3__BYP CYREG_PRT0_BYP
#define Pin_3__CTL CYREG_PRT0_CTL
#define Pin_3__DM0 CYREG_PRT0_DM0
#define Pin_3__DM1 CYREG_PRT0_DM1
#define Pin_3__DM2 CYREG_PRT0_DM2
#define Pin_3__DR CYREG_PRT0_DR
#define Pin_3__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_3__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_3__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_3__MASK 0x08u
#define Pin_3__PORT 0u
#define Pin_3__PRT CYREG_PRT0_PRT
#define Pin_3__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_3__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_3__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_3__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_3__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_3__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_3__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_3__PS CYREG_PRT0_PS
#define Pin_3__SHIFT 3
#define Pin_3__SLW CYREG_PRT0_SLW

/* Pin_4 */
#define Pin_4__0__MASK 0x10u
#define Pin_4__0__PC CYREG_PRT0_PC4
#define Pin_4__0__PORT 0u
#define Pin_4__0__SHIFT 4
#define Pin_4__AG CYREG_PRT0_AG
#define Pin_4__AMUX CYREG_PRT0_AMUX
#define Pin_4__BIE CYREG_PRT0_BIE
#define Pin_4__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_4__BYP CYREG_PRT0_BYP
#define Pin_4__CTL CYREG_PRT0_CTL
#define Pin_4__DM0 CYREG_PRT0_DM0
#define Pin_4__DM1 CYREG_PRT0_DM1
#define Pin_4__DM2 CYREG_PRT0_DM2
#define Pin_4__DR CYREG_PRT0_DR
#define Pin_4__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_4__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_4__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_4__MASK 0x10u
#define Pin_4__PORT 0u
#define Pin_4__PRT CYREG_PRT0_PRT
#define Pin_4__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_4__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_4__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_4__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_4__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_4__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_4__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_4__PS CYREG_PRT0_PS
#define Pin_4__SHIFT 4
#define Pin_4__SLW CYREG_PRT0_SLW

/* Pin_5 */
#define Pin_5__0__MASK 0x80u
#define Pin_5__0__PC CYREG_PRT0_PC7
#define Pin_5__0__PORT 0u
#define Pin_5__0__SHIFT 7
#define Pin_5__AG CYREG_PRT0_AG
#define Pin_5__AMUX CYREG_PRT0_AMUX
#define Pin_5__BIE CYREG_PRT0_BIE
#define Pin_5__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_5__BYP CYREG_PRT0_BYP
#define Pin_5__CTL CYREG_PRT0_CTL
#define Pin_5__DM0 CYREG_PRT0_DM0
#define Pin_5__DM1 CYREG_PRT0_DM1
#define Pin_5__DM2 CYREG_PRT0_DM2
#define Pin_5__DR CYREG_PRT0_DR
#define Pin_5__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_5__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_5__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_5__MASK 0x80u
#define Pin_5__PORT 0u
#define Pin_5__PRT CYREG_PRT0_PRT
#define Pin_5__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_5__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_5__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_5__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_5__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_5__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_5__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_5__PS CYREG_PRT0_PS
#define Pin_5__SHIFT 7
#define Pin_5__SLW CYREG_PRT0_SLW

/* Pin_6 */
#define Pin_6__0__MASK 0x20u
#define Pin_6__0__PC CYREG_PRT0_PC5
#define Pin_6__0__PORT 0u
#define Pin_6__0__SHIFT 5
#define Pin_6__AG CYREG_PRT0_AG
#define Pin_6__AMUX CYREG_PRT0_AMUX
#define Pin_6__BIE CYREG_PRT0_BIE
#define Pin_6__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_6__BYP CYREG_PRT0_BYP
#define Pin_6__CTL CYREG_PRT0_CTL
#define Pin_6__DM0 CYREG_PRT0_DM0
#define Pin_6__DM1 CYREG_PRT0_DM1
#define Pin_6__DM2 CYREG_PRT0_DM2
#define Pin_6__DR CYREG_PRT0_DR
#define Pin_6__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_6__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_6__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_6__MASK 0x20u
#define Pin_6__PORT 0u
#define Pin_6__PRT CYREG_PRT0_PRT
#define Pin_6__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_6__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_6__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_6__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_6__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_6__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_6__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_6__PS CYREG_PRT0_PS
#define Pin_6__SHIFT 5
#define Pin_6__SLW CYREG_PRT0_SLW

/* Pin_7 */
#define Pin_7__0__MASK 0x40u
#define Pin_7__0__PC CYREG_PRT0_PC6
#define Pin_7__0__PORT 0u
#define Pin_7__0__SHIFT 6
#define Pin_7__AG CYREG_PRT0_AG
#define Pin_7__AMUX CYREG_PRT0_AMUX
#define Pin_7__BIE CYREG_PRT0_BIE
#define Pin_7__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_7__BYP CYREG_PRT0_BYP
#define Pin_7__CTL CYREG_PRT0_CTL
#define Pin_7__DM0 CYREG_PRT0_DM0
#define Pin_7__DM1 CYREG_PRT0_DM1
#define Pin_7__DM2 CYREG_PRT0_DM2
#define Pin_7__DR CYREG_PRT0_DR
#define Pin_7__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_7__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_7__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_7__MASK 0x40u
#define Pin_7__PORT 0u
#define Pin_7__PRT CYREG_PRT0_PRT
#define Pin_7__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_7__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_7__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_7__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_7__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_7__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_7__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_7__PS CYREG_PRT0_PS
#define Pin_7__SHIFT 6
#define Pin_7__SLW CYREG_PRT0_SLW

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_1__INTC_MASK 0x01u
#define isr_1__INTC_NUMBER 0u
#define isr_1__INTC_PRIOR_NUM 6u
#define isr_1__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define isr_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* isr_2 */
#define isr_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_2__INTC_MASK 0x02u
#define isr_2__INTC_NUMBER 1u
#define isr_2__INTC_PRIOR_NUM 7u
#define isr_2__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define isr_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Filter_DFB */
#define Filter_DFB__ACU_SRAM_DATA CYREG_DFB0_ACU_SRAM_DATA_MBASE
#define Filter_DFB__COHER CYREG_DFB0_COHER
#define Filter_DFB__CR CYREG_DFB0_CR
#define Filter_DFB__CSA_SRAM_DATA CYREG_DFB0_CSA_SRAM_DATA_MBASE
#define Filter_DFB__CSB_SRAM_DATA CYREG_DFB0_CSB_SRAM_DATA_MBASE
#define Filter_DFB__DALIGN CYREG_DFB0_DALIGN
#define Filter_DFB__DMA_CTRL CYREG_DFB0_DMA_CTRL
#define Filter_DFB__DPA_SRAM_DATA CYREG_DFB0_DPA_SRAM_DATA_MBASE
#define Filter_DFB__DPB_SRAM_DATA CYREG_DFB0_DPB_SRAM_DATA_MBASE
#define Filter_DFB__DSI_CTRL CYREG_DFB0_DSI_CTRL
#define Filter_DFB__FSM_SRAM_DATA CYREG_DFB0_FSM_SRAM_DATA_MBASE
#define Filter_DFB__HOLDA CYREG_DFB0_HOLDA
#define Filter_DFB__HOLDAH CYREG_DFB0_HOLDAH
#define Filter_DFB__HOLDAM CYREG_DFB0_HOLDAM
#define Filter_DFB__HOLDAS CYREG_DFB0_HOLDAS
#define Filter_DFB__HOLDB CYREG_DFB0_HOLDB
#define Filter_DFB__HOLDBH CYREG_DFB0_HOLDBH
#define Filter_DFB__HOLDBM CYREG_DFB0_HOLDBM
#define Filter_DFB__HOLDBS CYREG_DFB0_HOLDBS
#define Filter_DFB__INT_CTRL CYREG_DFB0_INT_CTRL
#define Filter_DFB__PM_ACT_CFG CYREG_PM_ACT_CFG6
#define Filter_DFB__PM_ACT_MSK 0x10u
#define Filter_DFB__PM_STBY_CFG CYREG_PM_STBY_CFG6
#define Filter_DFB__PM_STBY_MSK 0x10u
#define Filter_DFB__RAM_DIR CYREG_DFB0_RAM_DIR
#define Filter_DFB__RAM_EN CYREG_DFB0_RAM_EN
#define Filter_DFB__SEMA CYREG_DFB0_SEMA
#define Filter_DFB__SR CYREG_DFB0_SR
#define Filter_DFB__STAGEA CYREG_DFB0_STAGEA
#define Filter_DFB__STAGEAH CYREG_DFB0_STAGEAH
#define Filter_DFB__STAGEAM CYREG_DFB0_STAGEAM
#define Filter_DFB__STAGEB CYREG_DFB0_STAGEB
#define Filter_DFB__STAGEBH CYREG_DFB0_STAGEBH
#define Filter_DFB__STAGEBM CYREG_DFB0_STAGEBM

/* Red_LED */
#define Red_LED__0__MASK 0x80u
#define Red_LED__0__PC CYREG_PRT2_PC7
#define Red_LED__0__PORT 2u
#define Red_LED__0__SHIFT 7
#define Red_LED__AG CYREG_PRT2_AG
#define Red_LED__AMUX CYREG_PRT2_AMUX
#define Red_LED__BIE CYREG_PRT2_BIE
#define Red_LED__BIT_MASK CYREG_PRT2_BIT_MASK
#define Red_LED__BYP CYREG_PRT2_BYP
#define Red_LED__CTL CYREG_PRT2_CTL
#define Red_LED__DM0 CYREG_PRT2_DM0
#define Red_LED__DM1 CYREG_PRT2_DM1
#define Red_LED__DM2 CYREG_PRT2_DM2
#define Red_LED__DR CYREG_PRT2_DR
#define Red_LED__INP_DIS CYREG_PRT2_INP_DIS
#define Red_LED__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Red_LED__LCD_EN CYREG_PRT2_LCD_EN
#define Red_LED__MASK 0x80u
#define Red_LED__PORT 2u
#define Red_LED__PRT CYREG_PRT2_PRT
#define Red_LED__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Red_LED__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Red_LED__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Red_LED__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Red_LED__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Red_LED__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Red_LED__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Red_LED__PS CYREG_PRT2_PS
#define Red_LED__SHIFT 7
#define Red_LED__SLW CYREG_PRT2_SLW

/* LCD_Char_1_LCDPort */
#define LCD_Char_1_LCDPort__0__MASK 0x01u
#define LCD_Char_1_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_Char_1_LCDPort__0__PORT 2u
#define LCD_Char_1_LCDPort__0__SHIFT 0
#define LCD_Char_1_LCDPort__1__MASK 0x02u
#define LCD_Char_1_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_Char_1_LCDPort__1__PORT 2u
#define LCD_Char_1_LCDPort__1__SHIFT 1
#define LCD_Char_1_LCDPort__2__MASK 0x04u
#define LCD_Char_1_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_Char_1_LCDPort__2__PORT 2u
#define LCD_Char_1_LCDPort__2__SHIFT 2
#define LCD_Char_1_LCDPort__3__MASK 0x08u
#define LCD_Char_1_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_Char_1_LCDPort__3__PORT 2u
#define LCD_Char_1_LCDPort__3__SHIFT 3
#define LCD_Char_1_LCDPort__4__MASK 0x10u
#define LCD_Char_1_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_Char_1_LCDPort__4__PORT 2u
#define LCD_Char_1_LCDPort__4__SHIFT 4
#define LCD_Char_1_LCDPort__5__MASK 0x20u
#define LCD_Char_1_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_Char_1_LCDPort__5__PORT 2u
#define LCD_Char_1_LCDPort__5__SHIFT 5
#define LCD_Char_1_LCDPort__6__MASK 0x40u
#define LCD_Char_1_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_Char_1_LCDPort__6__PORT 2u
#define LCD_Char_1_LCDPort__6__SHIFT 6
#define LCD_Char_1_LCDPort__AG CYREG_PRT2_AG
#define LCD_Char_1_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_Char_1_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_Char_1_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_Char_1_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_Char_1_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_Char_1_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_Char_1_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_Char_1_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_Char_1_LCDPort__DR CYREG_PRT2_DR
#define LCD_Char_1_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_Char_1_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_Char_1_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_Char_1_LCDPort__MASK 0x7Fu
#define LCD_Char_1_LCDPort__PORT 2u
#define LCD_Char_1_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_Char_1_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_Char_1_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_Char_1_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_Char_1_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_Char_1_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_Char_1_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_Char_1_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_Char_1_LCDPort__PS CYREG_PRT2_PS
#define LCD_Char_1_LCDPort__SHIFT 0
#define LCD_Char_1_LCDPort__SLW CYREG_PRT2_SLW

/* ADC_DelSig_1_DEC */
#define ADC_DelSig_1_DEC__COHER CYREG_DEC_COHER
#define ADC_DelSig_1_DEC__CR CYREG_DEC_CR
#define ADC_DelSig_1_DEC__DR1 CYREG_DEC_DR1
#define ADC_DelSig_1_DEC__DR2 CYREG_DEC_DR2
#define ADC_DelSig_1_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DelSig_1_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DelSig_1_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DelSig_1_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DelSig_1_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DelSig_1_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DelSig_1_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DelSig_1_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DelSig_1_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DelSig_1_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DelSig_1_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DelSig_1_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DelSig_1_DEC__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DelSig_1_DEC__PM_STBY_MSK 0x01u
#define ADC_DelSig_1_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DelSig_1_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DelSig_1_DEC__SR CYREG_DEC_SR
#define ADC_DelSig_1_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DelSig_1_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DelSig_1_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DelSig_1_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DelSig_1_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DelSig_1_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DelSig_1_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DelSig_1_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DelSig_1_DSM */
#define ADC_DelSig_1_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DelSig_1_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DelSig_1_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DelSig_1_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DelSig_1_DSM__CLK CYREG_DSM0_CLK
#define ADC_DelSig_1_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DelSig_1_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DelSig_1_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DelSig_1_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DelSig_1_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DelSig_1_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DelSig_1_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DelSig_1_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DelSig_1_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DelSig_1_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DelSig_1_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DelSig_1_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DelSig_1_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DelSig_1_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DelSig_1_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DelSig_1_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DelSig_1_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DelSig_1_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DelSig_1_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DelSig_1_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DelSig_1_DSM__MISC CYREG_DSM0_MISC
#define ADC_DelSig_1_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DelSig_1_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DelSig_1_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DelSig_1_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DelSig_1_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DelSig_1_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DelSig_1_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DelSig_1_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DelSig_1_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DelSig_1_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DelSig_1_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DelSig_1_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DelSig_1_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DelSig_1_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DelSig_1_DSM__TST1 CYREG_DSM0_TST1

/* ADC_DelSig_1_Ext_CP_Clk */
#define ADC_DelSig_1_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_DelSig_1_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_DelSig_1_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_Ext_CP_Clk__INDEX 0x00u
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK 0x01u

/* ADC_DelSig_1_IRQ */
#define ADC_DelSig_1_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_DelSig_1_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_DelSig_1_IRQ__INTC_MASK 0x20000000u
#define ADC_DelSig_1_IRQ__INTC_NUMBER 29u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_NUM 7u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_DelSig_1_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_DelSig_1_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_DelSig_1_theACLK */
#define ADC_DelSig_1_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_DelSig_1_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_DelSig_1_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_DelSig_1_theACLK__INDEX 0x00u
#define ADC_DelSig_1_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_DelSig_1_theACLK__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_DelSig_1_theACLK__PM_STBY_MSK 0x01u

/* ADC2Filter_DMA */
#define ADC2Filter_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL2
#define ADC2Filter_DMA__DRQ_NUMBER 10u
#define ADC2Filter_DMA__NUMBEROF_TDS 0u
#define ADC2Filter_DMA__PRIORITY 3u
#define ADC2Filter_DMA__TERMIN_EN 0u
#define ADC2Filter_DMA__TERMIN_SEL 0u
#define ADC2Filter_DMA__TERMOUT0_EN 1u
#define ADC2Filter_DMA__TERMOUT0_SEL 10u
#define ADC2Filter_DMA__TERMOUT1_EN 0u
#define ADC2Filter_DMA__TERMOUT1_SEL 0u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 62600000U
#define BCLK__BUS_CLK__KHZ 62600U
#define BCLK__BUS_CLK__MHZ 62U
#define CY_PROJECT_NAME "Design01"
#define CY_VERSION "PSoC Creator  3.2 SP1"
#define CYDEV_CHIP_DIE_GEN4 2u
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 13u
#define CYDEV_CHIP_DIE_PSOC4A 6u
#define CYDEV_CHIP_DIE_PSOC5LP 12u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 6u
#define CYDEV_CHIP_MEMBER_4C 10u
#define CYDEV_CHIP_MEMBER_4D 3u
#define CYDEV_CHIP_MEMBER_4E 5u
#define CYDEV_CHIP_MEMBER_4F 7u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 4u
#define CYDEV_CHIP_MEMBER_4L 9u
#define CYDEV_CHIP_MEMBER_4M 8u
#define CYDEV_CHIP_MEMBER_5A 12u
#define CYDEV_CHIP_MEMBER_5B 11u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_GEN4_ES 17u
#define CYDEV_CHIP_REV_GEN4_ES2 33u
#define CYDEV_CHIP_REV_GEN4_PRODUCTION 17u
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000703u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
