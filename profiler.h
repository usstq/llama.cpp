// Copyright (C) 2018-2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//
#ifdef __cplusplus
extern "C" {
#endif

void * startProfile(int ithr, const char * cat, const char * name);
void stopProfile(void * pv);

void createProfilers(int nthr);

#ifdef __cplusplus
}
#endif