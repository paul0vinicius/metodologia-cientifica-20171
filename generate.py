# coding: utf-8

# first argument m: array size
# second argument n: how many arrays will be generated

import random

n,m = map(int, raw_input().split())

for i in xrange(n):
	my_random = random.sample(xrange(-9999999999, 9999999999), m)
	print m
	print str(my_random).translate(None, '[],')