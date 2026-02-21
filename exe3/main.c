#include "hardware/gpio.h"
#include "pico/stdlib.h"
#include <stdio.h>

const int BTN_R = 28;
const int BTN_G = 26;
const int LED_R = 4;
const int LED_G = 6;

int main() {
  stdio_init_all();

  gpio_init(BTN_R);
  gpio_set_dir(BTN_R, GPIO_IN);
  gpio_pull_up(BTN_R);

  gpio_init(BTN_G);
  gpio_set_dir(BTN_G, GPIO_IN);
  gpio_pull_up(BTN_G);

  
  gpio_init(LED_R);
  gpio_set_dir(LED_R, GPIO_OUT);

  gpio_init(LED_G);
  gpio_set_dir(LED_G, GPIO_OUT);

  int estadoR = 0;
  int estadoG = 0;



  while (true) {
    if (!gpio_get(BTN_R)) {
      estadoR = !estadoR;
      gpio_put(LED_R, estadoR);
      sleep_ms(300);               
    }

    if (!gpio_get(BTN_G)) {
      estadoG = !estadoG;
      gpio_put(LED_G, estadoG);
      sleep_ms(300);               
    }
    
     
    }
  }

