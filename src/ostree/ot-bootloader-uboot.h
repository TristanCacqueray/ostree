/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2013 Collabora Ltd
 *
 * Based on ot-bootloader-syslinux.h by Colin Walters <walters@verbum.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the licence or (at
 * your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: Javier Martinez Canillas <javier.martinez@collabora.co.uk>
 */

#pragma once

#include "ot-bootloader.h"

G_BEGIN_DECLS

#define OT_TYPE_BOOTLOADER_UBOOT (ot_bootloader_uboot_get_type ())
#define OT_BOOTLOADER_UBOOT(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), OT_TYPE_BOOTLOADER_UBOOT, OtBootloaderUboot))
#define OT_IS_BOOTLOADER_UBOOT(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), OT_TYPE_BOOTLOADER_UBOOT))

typedef struct _OtBootloaderUboot OtBootloaderUboot;

GType ot_bootloader_uboot_get_type (void) G_GNUC_CONST;

OtBootloaderUboot * ot_bootloader_uboot_new (GFile *sysroot);

G_END_DECLS
