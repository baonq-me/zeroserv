/* 
 * File:   mineip.h
 * Author: khoai
 *
 * Created on October 17, 2014, 5:38 PM
 */

#ifndef MINEIP_H
#define	MINEIP_H

int mineip_init();
int mineip_deinit();
unsigned int is_mine_ip(unsigned int ip);
unsigned int get_ip_nic(const char *name);

#endif	/* MINEIP_H */

