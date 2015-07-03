#ifndef __GTIFSTAT_H
#define __GTIFSTAT_H

/*********************************************************
 *������:init_gtifstat();
 *����:	 ��ʼ��
 *����ֵ:��ȷ����0�����󷵻ظ���
 *��ע:	��
 * ********************************************************/
int init_gtifstat(void);


/**********************************************************
 *������:get_send_pkts();
 *����:��ȡָ���ӿڵķ��ͳ�ȥ�����ݰ�����
 *����ֵ:���ͳ�ȥ�����ݰ��ĸ���
 *��ע:����ǰΪֹ�����ͳ�ȥ�����ݰ��ĸ���
 **********************************************************/
unsigned long get_send_pkts(void);


/**********************************************************
 *������:get_recv_pkts();
 *����:��ȡָ���ӿڵĽ��յ������ݰ�����
 *����ֵ:���յ������ݰ��ĸ���
 *��ע:����ǰΪֹ�����յ������ݰ��ĸ���
 **********************************************************/
unsigned long get_recv_pkts(void);


/*********************************************************
 *������:init_gtifstat();
 *����:	 ��ʼ��
 *����ֵ:��ȷ����0�����󷵻ظ���
 *��ע:	��
 * ********************************************************/
int close_gtifstat(void);
#endif