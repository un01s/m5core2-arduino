# m5core2-arduino

## setup

```
$ idf.py create-project m5core2-arduino
$ cd m5core2-arduino
$ mkdir components
$ cd components
$ git submodule add https://github.com/espressif/arduino-esp32 arduino
$ cd arduino
$ git submodule update --init --recursive
$ git checkout tags/2.0.5
$ idf.py --version
ESP-IDF v4.4.2
```

Before menuconfig, make sure CONFIG_FREERTOS_HZ=1000 instead of 100.

Another warning to fix.

```
Component config -> mbedTLS -> TLS Key Exchange Methods -> Enable pre-shared-key ciphersuites and then check `Enable PSK based cyphersuite modes`. Save and Quit
```

