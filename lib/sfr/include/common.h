#pragma once

#include <inttypes.h>

#define SFR_MMIO8(addr) (*(volatile uint8_t *)(addr))
#define SFR_MMIO16(addr) (*(volatile uint16_t *)(addr))
#define SFR_MMIO32(addr) (*(volatile uint32_t *)(addr))
