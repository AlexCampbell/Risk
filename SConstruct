env = Environment(CC = 'clang',
                  CXX = 'clang')

print "CC is: ", env['CC']
print "CSS is:", env['CXX']

shared_sources = Split("""
Battle.cpp
DiceRoll.cpp
Sorter.cpp
""")

Export('shared_sources')
Export('env')

SConscript('SConscript', variant_dir='engine')

Import('engine')

Default(engine)