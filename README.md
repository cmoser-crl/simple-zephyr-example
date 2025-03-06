# Simple Zephyr example

Simple zephyr example that flashes an led at a given rate and prints out the current count.

To build:
```
west init -m https://github.com/cmoser-crl/simple-zephyr-example --mr main workspace
cd workspace
west update
cd simple-zephyr-example
west build -b <board> example
west flash
```
