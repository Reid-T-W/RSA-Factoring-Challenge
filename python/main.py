#!/usr/bin/python3
from updated_factors import factorize
import time;

start = time.time()
factorize(4);
factorize(12);
factorize(34);
factorize(128);
factorize(1024);
factorize(4958);
factorize(1718944270642558716715);
factorize(9);
factorize(99);
factorize(999);
factorize(9999);
factorize(9797973);
factorize(49);
factorize(239809320265259);
end = time.time()
total_time = end - start
print ("Total execution time equals {}".format(total_time))
