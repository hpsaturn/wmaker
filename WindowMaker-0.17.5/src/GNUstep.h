/* GNUstep.h-- stuff for compatibility with GNUstep applications
 *
 *  WindowMaker window manager
 * 
 *  Copyright (c) 1997, 1998 Alfredo K. Kojima
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, 
 *  USA.
 */


#ifndef WMGNUSTEP_H_
#define WMGNUSTEP_H_

#include <X11/Xproto.h>

#define WINDOWMAKER_WM_MINIATURIZE_WINDOW "_WINDOWMAKER_WM_MINIATURIZE_WINDOW"

#define GNUSTEP_WM_ATTR_NAME  "_GNUSTEP_WM_ATTR"

/* window stacking level */
enum {
  WMNormalWindowLevel   = 0,
  WMFloatingWindowLevel  = 3,
  WMDockWindowLevel   = 5,
  WMSubmenuWindowLevel  = 10,
  WMMainMenuWindowLevel  = 20
};

/* window attributes */
enum {
  WMBorderlessWindowMask = 0,
  WMTitledWindowMask = 1,
  WMClosableWindowMask = 2,
  WMMiniaturizableWindowMask = 4,
  WMResizableWindowMask = 8
};


/* GNUstep protocols atom names */
#define GNUSTEP_WM_RESIZEBAR "_GNUSTEP_WM_RESIZEBAR"

typedef struct {
    CARD32 flags;
    CARD32 window_style;
    CARD32 window_level;
    CARD32 reserved;
    Pixmap miniaturize_pixmap;	       /* pixmap for miniaturize button */
    Pixmap close_pixmap;	       /* pixmap for close button */
    Pixmap miniaturize_mask;	       /* miniaturize pixmap mask */
    Pixmap close_mask;		       /* close pixmap mask */
    CARD32 extra_flags;
} GNUstepWMAttributes;

#define GSWindowStyleAttr 	(1<<0)
#define GSWindowLevelAttr 	(1<<1)
#define GSMiniaturizePixmapAttr	(1<<3)
#define GSClosePixmapAttr	(1<<4)
#define GSMiniaturizeMaskAttr	(1<<5)
#define GSCloseMaskAttr		(1<<6)
#define GSExtraFlagsAttr	(1<<7)

/* extra flags */
#define GSNoApplicationIconFlag	(1<<5)


#define WMFHideOtherApplications	10
#define WMFHideApplication		12

#endif
