/**
* pdcutil.c
*
* Utility functions for pdcurses.
**/ 

#include "pdclvgl.h"

const char *PDC_sysname(void) {
  return "lvgl";
}

enum PDC_port PDC_port_val = PDC_PORT_LVGL;
