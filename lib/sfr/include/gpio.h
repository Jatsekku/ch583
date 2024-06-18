#pragma once

#include "common.h"

#define R32_PA_DIR          SFR_MMIO32(0x400010A0) // RW, GPIO PA I/O direction: 0=in, 1=out
#define R32_PA_PIN          SFR_MMIO32(0x400010A4) // RO, GPIO PA input
#define R32_PA_OUT          SFR_MMIO32(0x400010A8) // RW, GPIO PA output
#define R32_PA_CLR          SFR_MMIO32(0x400010AC) // WZ, GPIO PA clear output: 0=keep, 1=clear
#define R32_PA_PU           SFR_MMIO32(0x400010B0) // RW, GPIO PA pullup resistance enable
#define R32_PA_PD_DRV       SFR_MMIO32(0x400010B4) // RW, PA pulldown for input or PA driving capability for output

#define PA0  (0)
#define PA1  (1)
#define PA2  (2)
#define PA3  (3)
#define PA4  (4)
#define PA5  (5)
#define PA6  (6)
#define PA7  (7)
#define PA8  (8)
#define PA9  (9)
#define PA10 (10)
#define PA11 (11)
#define PA12 (12)
#define PA13 (13)
#define PA14 (14)
#define PA15 (15)

#define R32_PB_DIR          SFR_MMIO32(0x400010C0) // RW, GPIO PB I/O direction: 0=in, 1=out
#define R32_PB_PIN          SFR_MMIO32(0x400010C4) // RO, GPIO PB input
#define R32_PB_OUT          SFR_MMIO32(0x400010C8) // RW, GPIO PB output
#define R32_PB_CLR          SFR_MMIO32(0x400010CC) // WZ, GPIO PB clear output: 0=keep, 1=clear
#define R32_PB_PU           SFR_MMIO32(0x400010D0) // RW, GPIO PB pullup resistance enable
#define R32_PB_PD_DRV       SFR_MMIO32(0x400010D4) // RW, PB pulldown for input or PB driving capability for output

#define PB0  (0)
#define PB1  (1)
#define PB2  (2)
#define PB3  (3)
#define PB4  (4)
#define PB5  (5)
#define PB6  (6)
#define PB7  (7)
#define PB8  (8)
#define PB9  (9)
#define PB10 (10)
#define PB11 (11)
#define PB12 (12)
#define PB13 (13)
#define PB14 (14)
#define PB15 (15)
#define PB16 (16)
#define PB17 (17)
#define PB18 (18)
#define PB19 (19)
#define PB20 (20)
#define PB21 (21)
#define PB22 (22)
#define PB23 (23)
