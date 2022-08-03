/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SUPERVISOR_SHARED_BLUETOOTH_H
#define MICROPY_INCLUDED_SUPERVISOR_SHARED_BLUETOOTH_H

#include <stdbool.h>

void supervisor_bluetooth_background(void);
void supervisor_bluetooth_init(void);
void supervisor_start_bluetooth(void);
void supervisor_stop_bluetooth(void);

// Enable only works if it hasn't been set yet.
void supervisor_bluetooth_enable_workflow(void);
void supervisor_bluetooth_disable_workflow(void);

// Title bar status
bool supervisor_bluetooth_status_dirty(void);
void supervisor_bluetooth_status(void);

#endif // MICROPY_INCLUDED_SUPERVISOR_SHARED_BLUETOOTH_H
