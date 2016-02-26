import os
import sys
import random
import numpy as np
import matplotlib.pyplot as plt

size = 500
# print size
for i in xrange(0, size):
	seed = random.randint(0, 1000);
	if seed < 400:
		print 'enqueue ' + str(random.randint(0, 100))
	elif seed >= 400 and seed < 800:
		print 'dequeue'
	elif seed >= 800 and seed < 900:
		print 'is_empty'
	elif seed >= 900 and seed < 950:
		print 'head'
	elif seed >= 950 and seed < 1000:
		print 'tail'