def case_check(s):
up= sum(1 for c in s if c.isupper())
low= sum(1 for c in s if c.islower())
if up> low:
print(s.upper())
else:
print(s.lower())
s = raw_input() 
case_check(s)
