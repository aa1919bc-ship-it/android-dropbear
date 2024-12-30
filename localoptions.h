/*
 * Copyright © 2020-2024 Matt Robinson
 *
 * SPDX-License-Identifier: MIT
 */

// Disable server password auth as crypt() isn't available under Android
#define DROPBEAR_SVR_PASSWORD_AUTH 0

// Disable client password auth as getpass() isn't available under Android
#define DROPBEAR_CLI_PASSWORD_AUTH 0

// Speed up symmetrical ciphers and hashes at the expense of larger binaries
#define DROPBEAR_SMALL_CODE 0

// Build all but the most verbose level of trace messages into the binaries
#define DEBUG_TRACE 4

// Include non-standard shell path prior to Android 11 in default shell list
#define COMPAT_USER_SHELLS "/bin/sh","/system/bin/sh"
