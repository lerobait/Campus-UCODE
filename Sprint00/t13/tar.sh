#!/bin/bash

if [ $1 = -c ]
then
    tar -cf $2 ${@:3}
elif [ $1 = -e ]
then
    tar -xr $2
fi
