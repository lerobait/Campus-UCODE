#!bin/bash

git log -3 --pretty=format:"%h %t %s" > git_history.txt
