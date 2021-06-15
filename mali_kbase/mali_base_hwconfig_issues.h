/* SPDX-License-Identifier: GPL-2.0 */
/*
 *
 * (C) COPYRIGHT 2014-2021 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 */

/* AUTOMATICALLY GENERATED FILE. If you want to amend the issues/features,
 * please update base/tools/hwconfig_generator/hwc_{issues,features}.py
 * For more information see base/tools/hwconfig_generator/README
 */

#ifndef _BASE_HWCONFIG_ISSUES_H_
#define _BASE_HWCONFIG_ISSUES_H_

enum base_hw_issue {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_T76X_3953,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_7940,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TMIX_8138,
	BASE_HW_ISSUE_TMIX_8206,
	BASE_HW_ISSUE_TMIX_8343,
	BASE_HW_ISSUE_TMIX_8463,
	BASE_HW_ISSUE_TMIX_8456,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TMIX_8438,
	BASE_HW_ISSUE_TNOX_1194,
	BASE_HW_ISSUE_TGOX_R1_1234,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TSIX_1792,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_3076,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_TTRX_3485,
	BASE_HW_ISSUE_GPU2019_3212,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_generic[] = {
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tMIx_r0p0_05dev0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_T76X_3953,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TMIX_8138,
	BASE_HW_ISSUE_TMIX_8206,
	BASE_HW_ISSUE_TMIX_8343,
	BASE_HW_ISSUE_TMIX_8463,
	BASE_HW_ISSUE_TMIX_8456,
	BASE_HW_ISSUE_TMIX_8438,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tMIx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_7940,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TMIX_8138,
	BASE_HW_ISSUE_TMIX_8206,
	BASE_HW_ISSUE_TMIX_8343,
	BASE_HW_ISSUE_TMIX_8463,
	BASE_HW_ISSUE_TMIX_8456,
	BASE_HW_ISSUE_TMIX_8438,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tMIx_r0p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_7940,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TMIX_8138,
	BASE_HW_ISSUE_TMIX_8206,
	BASE_HW_ISSUE_TMIX_8343,
	BASE_HW_ISSUE_TMIX_8463,
	BASE_HW_ISSUE_TMIX_8456,
	BASE_HW_ISSUE_TMIX_8438,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tMIx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_7940,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TMIX_8138,
	BASE_HW_ISSUE_TMIX_8206,
	BASE_HW_ISSUE_TMIX_8343,
	BASE_HW_ISSUE_TMIX_8456,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tHEx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tHEx_r0p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tHEx_r0p2[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tHEx_r0p3[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_10682,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tHEx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_7891,
	BASE_HW_ISSUE_TMIX_8042,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tSIx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TSIX_1792,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tSIx_r0p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TSIX_1792,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tSIx_r1p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_11054,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tSIx_r1p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tSIx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tDVx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tDVx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tNOx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TNOX_1194,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tNOx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tGOx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TNOX_1194,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tGOx_r1p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TGOX_R1_1234,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tGOx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TMIX_8133,
	BASE_HW_ISSUE_TSIX_1116,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tTRx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_3076,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_TTRX_3485,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tTRx_r0p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_3076,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_TTRX_3485,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tTRx_r0p2[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_3076,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tTRx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tNAx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_3076,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_TTRX_3485,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tNAx_r0p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_3076,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_GPU2017_1336,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tNAx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tBEx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_TTRX_3485,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tBEx_r0p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tBEx_r1p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tBEx_r1p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tBEx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_lBEx_r1p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_TTRX_3485,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_lBEx_r1p1[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tBAx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tBAx_r1p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_2968_TTRX_3162,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tBAx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_TTRX_3470,
	BASE_HW_ISSUE_TTRX_3464,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tDUx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_921,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tDUx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_TTRX_3414,
	BASE_HW_ISSUE_TTRX_3083,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_tODx_r0p0[] = {
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_GPU2019_3212,
	BASE_HW_ISSUE_END
};

static const enum base_hw_issue base_hw_issues_model_tODx[] = {
	BASE_HW_ISSUE_5736,
	BASE_HW_ISSUE_9435,
	BASE_HW_ISSUE_TSIX_2033,
	BASE_HW_ISSUE_TTRX_1337,
	BASE_HW_ISSUE_GPU2019_3212,
	BASE_HW_ISSUE_END
};


#endif /* _BASE_HWCONFIG_ISSUES_H_ */
