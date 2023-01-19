#!bin/bash

read characters
awk '/^bluepill/' characters
grep -lr -e 'bluepill' . | xargs sed -i 's/bluepill/bluepill/g' characters
