Need to clear 3,4 and 6 bits.Take two variables as n and n1 with declaration hex values.
Then do once complement to ((1<<3)|(1<<4)|(1<<6)) and result will ANDed with n hex value this can be store in the n.
Then print directly (n1>>7)&1, (n1>>1)&1 and (n1>>0)&1) these 3 expressions in hex values as result
