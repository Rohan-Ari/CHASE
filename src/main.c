#include <zephyr/kernel.h>
#include <logging/log.h>
#include <dk_buttons_and_leds.h>
#include "remote.h"

#define LOG_MODULE_NAME app
LOG_MODULE_REGISTER(LOG_MODULE_NAME)

int main(void)
{
        int err;
        err = bluetooth_init();
        if(err) {
                LOG_ERR("Bluetooth init returned %d", err);
        }
        LOG_INF("Running...")
        return 0;
}
