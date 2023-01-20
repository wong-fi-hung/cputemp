#!/bin/bash

if [ -e /bin/cputemp ] || [ /sbin/cputemp ] || [ /usr/bin/cputemp] || [ /usr/sbin/cputemp ] || [ /usr/local/bin/cputemp ]; then
	while [ 1 ]; do cputemp; sleep 1; clear; done
elif [ -e $(pwd)/cputemp ]; then
	while [ 1 ]; do cputemp; sleep 1; clear; done
else
	echo "cannot find 'cputemp' program"
fi
fi
