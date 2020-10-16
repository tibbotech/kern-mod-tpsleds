# kern-mod-tpsleds
LTPS Blue LEDs kernel module

The module is loaded by compatible="tpsleds" dts node, but it is out-of-tree, so better
```
cp tpsleds.conf ${sysconfdir}/modules-load.d/
```
to load sooner.

Binary interface is at
```
/proc/tpsleds
```
tpsled app is required.
