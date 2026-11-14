Based on MAME 0.152.
Fixes in MAME 0.154 to 0.289 are applied.

Additional fixes are applied:

Mr. cracyc
https://github.com/mamedev/mame/commit/1bc96ab8fe65abef29fcf2f74446fe83aea9cad8
Mr. Kenji Mouri
https://github.com/mamedev/mame/commit/6c1c0f93b147fff56cce0a397d8939c474570532
https://github.com/mamedev/mame/commit/894903e9a44d4f257436a2558f059940388e60fd
Mr. BlueRain-debug
https://github.com/mamedev/mame/commit/ce4fc166e50628c765e051ab0f356a3862f57ed3
Mr. Dark Best
https://github.com/mamedev/mame/commit/b2e5b579c118cda83692b9fb9abf41241c77ddbf

i386_state are removed and all its members are changed to global variables.
All registers can be accessed directly without cpustate->.

cycle_table_rm/pm are changed from dynamic array to static array.

i386_limit_check is improved to consider data size.

Modified to raise INT 06h (illegal opcode) after all params are fetched
when ignore_illegal_insn is true.
This is to get the EIP of the next opcode as correct as possible.

Mr.Jason Hood fixed to use unaligned reads/writes only when necessary
for a minor speed improvement.
