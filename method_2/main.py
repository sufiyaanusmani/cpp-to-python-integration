import os
import signal
from subprocess import Popen, PIPE, STDOUT
import platform

process = Popen('./Subprocess', stdin=PIPE,stdout=PIPE, universal_newlines = True, shell = True, preexec_fn = os.setsid)
while True:
        output = process.stdout.readline()
        if output == '' and process.poll is not None:
            break
        if output:
            print(output)