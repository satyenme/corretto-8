/*
 * reserved comment block
 * DO NOT REMOVE OR ALTER!
 */
/*
 * $XFree86: xc/include/extensions/randr.h,v 1.4 2001/11/24 07:24:58 keithp Exp $
 *
 * Copyright © 2000, Compaq Computer Corporation,
 * Copyright © 2002, Hewlett Packard, Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Compaq or HP not be used in advertising
 * or publicity pertaining to distribution of the software without specific,
 * written prior permission.  HP makes no representations about the
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * HP DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL HP
 * BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * Author:  Jim Gettys, HP Labs, Hewlett-Packard, Inc.
 */

#ifndef _RANDR_H_
#define _RANDR_H_

typedef unsigned short  Connection;
typedef unsigned short  Rotation;
typedef unsigned short  SizeID;
typedef unsigned short  SubpixelOrder;

#define RANDR_NAME              "RANDR"
#define RANDR_MAJOR             1
#define RANDR_MINOR             1

#define RRNumberErrors          0
#define RRNumberEvents          1

#define X_RRQueryVersion        0
/* we skip 1 to make old clients fail pretty immediately */
#define X_RROldGetScreenInfo    1
#define X_RR1_0SetScreenConfig  2
/* V1.0 apps share the same set screen config request id */
#define X_RRSetScreenConfig     2
#define X_RROldScreenChangeSelectInput  3
/* 3 used to be ScreenChangeSelectInput; deprecated */
#define X_RRSelectInput         4
#define X_RRGetScreenInfo       5

/* used in XRRSelectInput */

#define RRScreenChangeNotifyMask  (1L << 0)

#define RRScreenChangeNotify    0

/* used in the rotation field; rotation and reflection in 0.1 proto. */
#define RR_Rotate_0             1
#define RR_Rotate_90            2
#define RR_Rotate_180           4
#define RR_Rotate_270           8

/* new in 1.0 protocol, to allow reflection of screen */

#define RR_Reflect_X            16
#define RR_Reflect_Y            32

/*
 * Mode flags (RandR 1.2), used in XRRModeInfo.modeFlags.
 * Mirrored from X.Org randrproto randr.h; the vendored copy above is a
 * RandR 1.1 snapshot and predates these definitions.
 */
#define RR_HSyncPositive        0x00000001
#define RR_HSyncNegative        0x00000002
#define RR_VSyncPositive        0x00000004
#define RR_VSyncNegative        0x00000008
#define RR_Interlace            0x00000010
#define RR_DoubleScan           0x00000020
#define RR_CSync                0x00000040
#define RR_CSyncPositive        0x00000080
#define RR_CSyncNegative        0x00000100
#define RR_HSkewPresent         0x00000200
#define RR_BCast                0x00000400
#define RR_PixelMultiplex       0x00000800
#define RR_DoubleClock          0x00001000
#define RR_ClockDivideBy2       0x00002000

/* Connection states (RandR 1.2), used in XRROutputInfo.connection. */
#define RR_Connected            0
#define RR_Disconnected         1
#define RR_UnknownConnection    2

#define RRSetConfigSuccess              0
#define RRSetConfigInvalidConfigTime    1
#define RRSetConfigInvalidTime          2
#define RRSetConfigFailed               3

#endif  /* _RANDR_H_ */
