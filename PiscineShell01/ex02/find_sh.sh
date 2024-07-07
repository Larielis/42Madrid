#!bin/bash

#man find, examples section
find . -type f -name "*.sh" -exec basename {} .sh \;