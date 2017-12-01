// Copyright 2016 SiFive, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License.  You may obtain a copy
// of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations
// under the License.

#ifndef _SECTIONS_H
#define _SECTIONS_H

extern unsigned char _rom[];
extern unsigned char _rom_end[];

extern unsigned char _ram[];
extern unsigned char _ram_end[];

extern unsigned char _ftext[];
extern unsigned char _etext[];
extern unsigned char _fbss[];
extern unsigned char _ebss[];
extern unsigned char _end[];

#endif /* _SECTIONS_H */
