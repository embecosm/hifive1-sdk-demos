# Copyright (C) 2017 Embecosm Limited
# Contributor Graham Markall <graham.markall@embecosm.com>
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not
# use this file except in compliance with the License.  You may obtain a copy
# of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
# License for the specific language governing permissions and limitations
# under the License.

AS=riscv32-unknown-elf-gcc
CC=riscv32-unknown-elf-gcc
LD=riscv32-unknown-elf-gcc
LDSCRIPT="-Tfreedom-e300-hifive1/hifive1.ld"
INCLUDES="-Ifreedom-e300-hifive1/include"


all:
	${CC} ${INCLUDES} -c led_fade.c
	${AS} ${INCLUDES} -c entry.S
	${AS} ${INCLUDES} -c start.S
	${LD} ${LDSCRIPT} -nostartfiles start.o entry.o led_fade.o -o led_fade

clean:
	rm -rf start.o entry.o led_fade.o led_fade
