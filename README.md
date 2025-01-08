# esp32-arduino-template

## Prerequisites
In order to use the template, one must first set up the esp-idf environment. This template is based on the ESP-IDFv5.1-compliant Arduino library, thus the environment can be set up using the official [guide](https://docs.espressif.com/projects/esp-idf/en/release-v5.1/esp32/get-started/linux-macos-setup.html#step-1-install-prerequisites)

After setting up the environment using: 

```bash
source $HOME/esp/esp-idf/export.fish
```

> export.sh ought to be used for Bash

## Installation
After cloning the git-repo the Arduino component must be installed using:

```bash
git submodule update --init

```

## Running

The project can be run using the idf.py tool:

```bash
idf.py build
```

And then flashed as well: 
```bash
idf.py flash -p <port>
```

For more information, please refer to the official guide. 
