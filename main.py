#!/usr/bin/python3
from recursive_updated_factors import factorize
import time;

start = time.time()
factorize(4, 2);
factorize(12, 2);
factorize(34, 2);
factorize(128, 2);
factorize(1024, 2);
factorize(4958, 2);
factorize(1718944270642558716715, 2);
factorize(9, 2);
factorize(99, 2);
factorize(999, 2);
factorize(9999, 2);
factorize(9797973, 2);
factorize(49, 2);
factorize(239809320265259, 2);
end = time.time()
total_time = end - start
print ("Total execution time equals {}".format(total_time))
