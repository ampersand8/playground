#!/usr/bin/env python
import os, sys
import yum

yb = yum.YumBase()
yb.conf.cache = os.geteuid() != 1
pl = yb.doPackageLists(pkgnarrow='updates',patterns=sys.argv[1:])
count = 0
if pl.updates:
    print "Available Updates"
    for pkg in sorted(pl.updates):
        count += 1
        print pkg
print count