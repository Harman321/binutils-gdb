#name: dwarf decoded line after gc-sections
#as: -mmcu=avr51 -gdwarf-sections -g
#ld: -mavr51 -gc-sections -u main
#objdump: --dwarf=decodedline
#source: per-function-debugline.s
#target: avr-*-*

.*:     file format elf32-avr

Decoded dump of debug contents of section .debug_line:

.*:
File name                            Line number    Starting address    View
per-function-debugline.s                      39                   0

per-function-debugline.s                      40                 0x2       1

per-function-debugline.s                      41                 0x4       2

per-function-debugline.s                      42                 0x6       3

per-function-debugline.s                      47                 0x8       4

per-function-debugline.s                      48                 0xc       5

per-function-debugline.s                      49                0x10       6

per-function-debugline.s                      50                0x12       7

per-function-debugline.s                      51                0x16       8

per-function-debugline.s                      52                0x1a       9

per-function-debugline.s                      54                0x1c      10

per-function-debugline.s                      55                0x1e      11

per-function-debugline.s                      56                0x20      12

per-function-debugline.s                      56                0x22      13

per-function-debugline.s                      62                0x22

per-function-debugline.s                      63                0x24       1

per-function-debugline.s                      64                0x26       2

per-function-debugline.s                      65                0x28       3

per-function-debugline.s                      70                0x2a       4

per-function-debugline.s                      71                0x2e       5

per-function-debugline.s                      72                0x32       6

per-function-debugline.s                      73                0x36       7

per-function-debugline.s                      74                0x38       8

per-function-debugline.s                      75                0x3c       9

per-function-debugline.s                      76                0x40      10

per-function-debugline.s                      77                0x44      11

per-function-debugline.s                      79                0x48      12

per-function-debugline.s                      80                0x4a      13
#pass
