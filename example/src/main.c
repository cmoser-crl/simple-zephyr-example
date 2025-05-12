#include <zephyr/kernel.h>

K_TIMER_DEFINE(timer, NULL, NULL);

uint32_t iters = 0;
uint32_t counter = 0;

int main(void)
{
    k_timer_start(&timer, K_MSEC(0), K_MSEC(1));

    while (1)
    {
        k_timer_status_sync(&timer);
        if (++counter > 19)
        {
            printk("hello world %u\n", ++iters);
            counter = 0;
        }
    }

    return 0;
}

