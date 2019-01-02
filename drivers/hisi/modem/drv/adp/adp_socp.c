/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "bsp_socp.h"
#include "bsp_slice.h"



typedef struct tagSOCP_ADP_DEBUG_INFO_S
{
    unsigned int        u32TimeoutTimes;
    unsigned int        u32TimeoutSlice;
    unsigned int        u32DefaultTimes;
    unsigned int        u32DefaultSlice;
}SOCP_ADP_DEBUG_INFO_S;

SOCP_ADP_DEBUG_INFO_S g_SocpDebugInfo = {0};

void DRV_SOCP_SHOW_DEBUG_INFO(void)
{
    printk(KERN_ERR"u32TimeoutTimes %d, u32TimeoutSlice 0x%x, u32DefaultTimes %d, u32DefaultSlice 0x%x.\n",
        g_SocpDebugInfo.u32TimeoutTimes, g_SocpDebugInfo.u32TimeoutSlice,
        g_SocpDebugInfo.u32DefaultTimes, g_SocpDebugInfo.u32DefaultSlice);
}
EXPORT_SYMBOL(DRV_SOCP_SHOW_DEBUG_INFO);

/*****************************************************************************
* �� �� ��  : DRV_SOCP_INIT
*
* ��������  : ģ���ʼ������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��ʼ���ɹ��ı�ʶ��
*****************************************************************************/
int DRV_SOCP_INIT()
{
    return socp_init();
}
EXPORT_SYMBOL(DRV_SOCP_INIT);

/*****************************************************************************
 �� �� ��  : mdrv_socp_send_data_manager
 ��������  : ����socpĿ�Ķ������ϱ�����״̬��
 �������  : EncDestChanID:����Ŀ��ͨ����
             bEnable:�Ƿ��socpĿ�Ķ��ж�
 �������  : ��
 �� �� ֵ  : ��
*****************************************************************************/
void mdrv_socp_send_data_manager(unsigned int EncDestChanID, unsigned int bEnable)
{
    bsp_socp_data_send_manager(EncDestChanID, bEnable);
}
EXPORT_SYMBOL(mdrv_socp_send_data_manager);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_CORDER_SET_SRC_CHAN
 ��������  : �˽ӿ����SOCP������Դͨ���ķ��䣬���ݱ�����Դͨ����������ͨ�����ԣ�����Ŀ��ͨ�������غ���ִ�н����
 �������  : pSrcAttr:������Դͨ�������ṹ��ָ�롣
             pSrcChanID:���뵽��Դͨ��ID��
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����Դͨ������ɹ���
             SOCP_ERROR:����Դͨ������ʧ�ܡ�
*****************************************************************************/
int mdrv_socp_corder_set_src_chan(SOCP_CODER_SRC_ENUM_U32 enSrcChanID, SOCP_CODER_SRC_CHAN_S *pSrcAttr)
{
    return bsp_socp_coder_set_src_chan(enSrcChanID, pSrcAttr);
}
EXPORT_SYMBOL(mdrv_socp_corder_set_src_chan);

/*****************************************************************************
 �� �� ��  : mdrv_socp_coder_set_dest_chan_attr
 ��������  : �˽ӿ����ĳһ����Ŀ��ͨ�������ã����غ���ִ�еĽ����
 �������  : u32DestChanID:SOCP��������Ŀ��ͨ��ID��
             pDestAttr:SOCP������Ŀ��ͨ�������ṹ��ָ�롣
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����Ŀ��ͨ�����óɹ���
             SOCP_ERROR:����Ŀ��ͨ������ʧ�ܡ�
*****************************************************************************/
int mdrv_socp_coder_set_dest_chan_attr(unsigned int u32DestChanID, SOCP_CODER_DEST_CHAN_S *pDestAttr)
{
    return bsp_socp_coder_set_dest_chan_attr(u32DestChanID, pDestAttr);
}
EXPORT_SYMBOL(mdrv_socp_coder_set_dest_chan_attr);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_DECODER_SET_DEST_CHAN
 ��������  : �˽ӿ����SOCP������Ŀ��ͨ���ķ��䣬
             ���ݽ���Ŀ��ͨ����������ͨ�����ԣ�
             ������Դͨ�������غ���ִ�н����
 �������  : pAttr:������Ŀ��ͨ�������ṹ��ָ��
             pDestChanID:���뵽��Ŀ��ͨ��ID
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����Ŀ��ͨ������ɹ���
             SOCP_ERROR:����Ŀ��ͨ������ʧ�ܡ�
*****************************************************************************/
int DRV_SOCP_DECODER_SET_DEST_CHAN(SOCP_DECODER_DST_ENUM_U32 enDestChanID, SOCP_DECODER_DEST_CHAN_STRU *pAttr)
{
    return bsp_socp_decoder_set_dest_chan(enDestChanID, pAttr);
}
EXPORT_SYMBOL(DRV_SOCP_DECODER_SET_DEST_CHAN);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_DECODER_SET_SRC_CHAN_ATTR
 ��������  : �˽ӿ����ĳһ����Դͨ�������ã����غ���ִ�еĽ����
 �������  : u32SrcChanID:������Դͨ��ID
             pInputAttr:������Դͨ�������ṹ��ָ��
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����Դͨ�����óɹ�
             SOCP_ERROR:����Դͨ������ʧ��
*****************************************************************************/
int DRV_SOCP_DECODER_SET_SRC_CHAN_ATTR ( unsigned int u32SrcChanID,SOCP_DECODER_SRC_CHAN_STRU *pInputAttr)
{
    return bsp_socp_decoder_set_src_chan_attr(u32SrcChanID, pInputAttr);
}
EXPORT_SYMBOL(DRV_SOCP_DECODER_SET_SRC_CHAN_ATTR);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_DECODER_GET_ERR_CNT
 ��������  :�˽ӿڸ�������ͨ���������쳣����ļ���ֵ��
 �������  : u32ChanID:������ͨ��ID
                         pErrCnt:�������쳣�����ṹ��ָ��
 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:�����쳣�����ɹ�
                             SOCP_ERROR:�����쳣����ʧ��
*****************************************************************************/
int DRV_SOCP_DECODER_GET_ERR_CNT (unsigned int u32ChanID, SOCP_DECODER_ERROR_CNT_STRU *pErrCnt)
{
    return bsp_socp_decoder_get_err_cnt(u32ChanID, pErrCnt);
}
EXPORT_SYMBOL(DRV_SOCP_DECODER_GET_ERR_CNT);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_SET_DEC_PKT_LGTH
 ��������  : ���ý�������ȼ���ֵ
 �������  : pPktlgth:��������ȼ�ֵ

 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:���óɹ���
             ����ֵ:����ʧ��
*****************************************************************************/
int DRV_SOCP_SET_DEC_PKT_LGTH(SOCP_DEC_PKTLGTH_STRU *pPktlgth)
{
    return bsp_socp_set_dec_pkt_lgth(pPktlgth);
}
EXPORT_SYMBOL(DRV_SOCP_SET_DEC_PKT_LGTH);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_SET_DEBUG
 ��������  : ���ý���Դͨ����debugģʽ
 �������  : u32ChanID:ͨ��ID
             u32DebugEn: debug��ʶ
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:���óɹ���
             ����ֵ:����ʧ��
*****************************************************************************/
int DRV_SOCP_SET_DEBUG(unsigned int u32DestChanID, unsigned int u32DebugEn)
{
    return bsp_socp_set_debug(u32DestChanID, u32DebugEn);
}
EXPORT_SYMBOL(DRV_SOCP_SET_DEBUG);


/*****************************************************************************
 �� �� ��  : DRV_SOCP_FREE_CHANNEL
 ��������  : �˽ӿڸ���ͨ��ID�ͷŷ���ı����ͨ����
 �������  : u32ChanID:ͨ��ID��
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:ͨ���ͷųɹ���
             SOCP_ERROR:ͨ���ͷ�ʧ�ܡ�
*****************************************************************************/
int DRV_SOCP_FREE_CHANNEL(unsigned int u32ChanID)
{
    return bsp_socp_free_channel(u32ChanID);
}
EXPORT_SYMBOL(DRV_SOCP_FREE_CHANNEL);

/*****************************************************************************
* �� �� ��  : DRV_SOCP_CLEAN_ENCSRC_CHAN
*
* ��������  : ��ձ���Դͨ����ͬ��V9 SOCP�ӿ�
*
* �������  : enSrcChanID       ����ͨ����
*
* �������  : ��
*
* �� �� ֵ  : BSP_OK
*****************************************************************************/
unsigned int DRV_SOCP_CLEAN_ENCSRC_CHAN(SOCP_CODER_SRC_ENUM_U32 enSrcChanID)
{
    return bsp_socp_clean_encsrc_chan(enSrcChanID);
}
EXPORT_SYMBOL(DRV_SOCP_CLEAN_ENCSRC_CHAN);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_REGISTER_EVENT_CB
 ��������  : �˽ӿ�Ϊ����ͨ��ע���¼��ص�������
 �������  : u32ChanID:ͨ��ID��
             EventCB:�¼��ص��������ο�socp_event_cb��������
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:ע���¼��ص������ɹ���
             SOCP_ERROR:ע���¼��ص�����ʧ�ܡ�
*****************************************************************************/
int DRV_SOCP_REGISTER_EVENT_CB(unsigned int u32ChanID, socp_event_cb EventCB)
{
    return bsp_socp_register_event_cb(u32ChanID, EventCB);
}
EXPORT_SYMBOL(DRV_SOCP_REGISTER_EVENT_CB);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_START
 ��������  : �˽ӿ�����Դͨ��������������߽��롣
 �������  : u32SrcChanID:Դͨ��ID��
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:�������������ɹ���
             SOCP_ERROR:������������ʧ�ܡ�
*****************************************************************************/
int mdrv_socp_start(unsigned int u32SrcChanID)
{
    return bsp_socp_start(u32SrcChanID);
}
EXPORT_SYMBOL(mdrv_socp_start);

/*****************************************************************************
 �� �� ��  : mdrv_socp_stop
 ��������  : �˽ӿ�����Դͨ����ֹͣ������߽��롣
 �������  : u32SrcChanID:Դͨ��ID��
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:��������ֹͣ�ɹ���
             SOCP_ERROR:��������ֹͣʧ�ܡ�
*****************************************************************************/
int mdrv_socp_stop(unsigned int u32SrcChanID)
{
    return bsp_socp_stop(u32SrcChanID);
}
EXPORT_SYMBOL(mdrv_socp_stop);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_SET_TIMEOUT
 ��������  : �˽ӿ����ó�ʱ��ֵ��
 �������  : u32Timeout:��ʱ��ֵ

 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:���ó�ʱʱ����ֵ�ɹ���
             SOCP_ERROR:���ó�ʱʱ����ֵʧ��
*****************************************************************************/
int DRV_SOCP_SET_TIMEOUT (SOCP_TIMEOUT_EN_ENUM_UIN32 eTmOutEn, unsigned int u32Timeout)
{
    return bsp_socp_set_timeout(eTmOutEn, u32Timeout);
}
EXPORT_SYMBOL(DRV_SOCP_SET_TIMEOUT);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_GET_WRITE_BUFF
 ��������  : �˽ӿ����ڻ�ȡд����buffer��
 �������  : u32SrcChanID:Դͨ��ID
             pBuff:           :д����buffer

 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:��ȡд����buffer�ɹ���
             SOCP_ERROR:��ȡд����bufferʧ��
*****************************************************************************/
int mdrv_socp_get_write_buff( unsigned int u32SrcChanID, SOCP_BUFFER_RW_STRU *pBuff)
{
    return bsp_socp_get_write_buff(u32SrcChanID, pBuff);
}
EXPORT_SYMBOL(mdrv_socp_get_write_buff);

/*****************************************************************************
 �� �� ��  : mdrv_socp_write_done
 ��������  : �ýӿ��������ݵ�д�������ṩд�����ݵĳ��ȡ�
 �������  : u32SrcChanID:Դͨ��ID
             u32WrtSize:   ��д�����ݵĳ���
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:д�����ݳɹ���
             SOCP_ERROR:д������ʧ��
*****************************************************************************/
int mdrv_socp_write_done(unsigned int u32SrcChanID, unsigned int u32WrtSize)
{
    return bsp_socp_write_done(u32SrcChanID, u32WrtSize);
}
EXPORT_SYMBOL(mdrv_socp_write_done);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_REGISTER_RD_CB
 ��������  : �ýӿ�����ע���RD�������ж�ȡ���ݵĻص�������
 �������  : u32SrcChanID:Դͨ��ID
             RdCB:  �¼��ص�����
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:ע��RD���λ����������ݻص������ɹ���
             SOCP_ERROR:ע��RD���λ����������ݻص�����ʧ��
*****************************************************************************/
int DRV_SOCP_REGISTER_RD_CB(unsigned int u32SrcChanID, socp_rd_cb RdCB)
{
    return bsp_socp_register_rd_cb(u32SrcChanID, RdCB);
}
EXPORT_SYMBOL(DRV_SOCP_REGISTER_RD_CB);

/*****************************************************************************
 �� �� ��  : mdrv_socp_get_rd_buffer
 ��������  : �ô˽ӿ����ڻ�ȡRD buffer������ָ�롣
 �������  : u32SrcChanID:Դͨ��ID
             pBuff:  RD buffer
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:��ȡRD���λ������ɹ�
             SOCP_ERROR:��ȡRD���λ�����ʧ��
*****************************************************************************/
int mdrv_socp_get_rd_buffer( unsigned int u32SrcChanID,SOCP_BUFFER_RW_STRU *pBuff)
{
    return bsp_socp_get_rd_buffer(u32SrcChanID, pBuff);
}
EXPORT_SYMBOL(mdrv_socp_get_rd_buffer);

/*****************************************************************************
 �� �� ��  : bsp_socp_read_rd_done
 ��������  : �˽ӿ������ϲ�֪ͨSOCP��������RD buffer��ʵ�ʶ�ȡ�����ݡ�
 �������  : u32SrcChanID:Դͨ��ID
             u32RDSize:  ��RD buffer��ʵ�ʶ�ȡ�����ݳ���
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:��ȡRDbuffer�е����ݳɹ�
             SOCP_ERROR:��ȡRDbuffer�е�����ʧ��
*****************************************************************************/
int mdrv_socp_read_rd_done(unsigned int u32SrcChanID, unsigned int u32RDSize)
{
    return bsp_socp_read_rd_done(u32SrcChanID, u32RDSize);
}
EXPORT_SYMBOL(mdrv_socp_read_rd_done);

/*****************************************************************************
 �� �� ��  : bsp_socp_register_read_cb
 ��������  : �ýӿ�����ע������ݵĻص�������
 �������  : u32DestChanID:Ŀ��ͨ��ID
             ReadCB: �¼��ص�����
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:ע������ݻص������ɹ�
             SOCP_ERROR:ע������ݻص�����ʧ��
*****************************************************************************/
int DRV_SOCP_REGISTER_READ_CB( unsigned int u32DestChanID, socp_read_cb ReadCB)
{
    return bsp_socp_register_read_cb(u32DestChanID, ReadCB);
}
EXPORT_SYMBOL(DRV_SOCP_REGISTER_READ_CB);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_GET_READ_BUFF
 ��������  : �ô˽ӿ����ڻ�ȡ�����ݻ�����ָ�롣
 �������  : u32DestChanID:Ŀ��ͨ��ID
             ReadCB: ������buffer
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:��ȡ�����ݻ������ɹ���
             SOCP_ERROR:��ȡ�����ݻ������ɹ���
*****************************************************************************/
int DRV_SOCP_GET_READ_BUFF(unsigned int u32DestChanID,SOCP_BUFFER_RW_STRU *pBuffer)
{
    return bsp_socp_get_read_buff(u32DestChanID, pBuffer);
}
EXPORT_SYMBOL(DRV_SOCP_GET_READ_BUFF);

/*****************************************************************************
 �� �� ��  : DRV_SOCP_READ_DATA_DONE
 ��������  : �ýӿ������ϲ����SOCP��������Ŀ��ͨ���ж��ߵ�ʵ�����ݡ�
 �������  : u32DestChanID:Ŀ��ͨ��ID
             u32ReadSize: �Ѷ������ݵĳ���
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:�����ݳɹ���
             SOCP_ERROR:������ʧ��
*****************************************************************************/
int DRV_SOCP_READ_DATA_DONE(unsigned int u32DestChanID,unsigned int u32ReadSize)
{
    return bsp_socp_read_data_done(u32DestChanID, u32ReadSize);
}
EXPORT_SYMBOL(DRV_SOCP_READ_DATA_DONE);




/*****************************************************************************
* �� �� ��  : DRV_SOCP_GET_STATE
*
* ��������  : ��ȡSOCP״̬
*
* �� �� ֵ  : SOCP_IDLE    ����
*             SOCP_BUSY    æµ
*****************************************************************************/
SOCP_STATE_ENUM_UINT32 DRV_SOCP_GET_STATE()
{
    return bsp_socp_get_state();
}
EXPORT_SYMBOL(DRV_SOCP_GET_STATE);


/*****************************************************************************
* �� �� ��  : mdrv_socp_get_sd_logcfg
*
* ��������  : ��ѯˢ�º�LOG2.0 SOCP��ʱ������Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : SOCP_ENC_DST_BUF_LOG_CFG_STRUָ��
*****************************************************************************/
unsigned int mdrv_socp_get_sd_logcfg(SOCP_ENC_DST_BUF_LOG_CFG_STRU* cfg)
{
    return bsp_socp_get_sd_logcfg(cfg);
}
EXPORT_SYMBOL(mdrv_socp_get_sd_logcfg);

/*****************************************************************************
* �� �� ��  : mdrv_socp_set_ind_mode
*
* ��������  : �ϱ�ģʽ�ӿ�
*
* �������  : ģʽ����
*
* �������  : ��
*
* �� �� ֵ  : BSP_S32 BSP_OK:�ɹ� BSP_ERROR:ʧ��
*****************************************************************************/
int mdrv_socp_set_ind_mode(SOCP_IND_MODE_ENUM eMode)
{
    return bsp_socp_set_ind_mode(eMode);
}
EXPORT_SYMBOL(mdrv_socp_set_ind_mode);

/*****************************************************************************
* �� �� ��  : mdrv_socp_set_autodiv_enalbe
*
* ��������  : ʹ��SOCP���Զ���Ƶ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
void mdrv_socp_enalbe_dfs(void)
{
    bsp_socp_set_clk_autodiv_enable();
    return;
}
EXPORT_SYMBOL(mdrv_socp_enalbe_dfs);

/*****************************************************************************
* �� �� ��  : mdrv_socp_set_autodiv_disalbe
*
* ��������  : ȥʹ��SOCP���Զ���Ƶ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
void mdrv_socp_disalbe_dfs(void)
{
    bsp_socp_set_clk_autodiv_disable();
    return;
}
EXPORT_SYMBOL(mdrv_socp_disalbe_dfs);

/*****************************************************************************
* �� �� ��  : mdrv_socp_compress_enable
* ��������  :�˽ӿ�����ʹ��deflateѹ��
* �������  : u32SrcChanID:Դͨ��ID��
* �������  : ��
* �� �� ֵ  : SOCP_OK:ʹ��deflateѹ���ɹ�
     SOCP_ERROR:ʹ��deflateѹ��ʧ��
*****************************************************************************/

int mdrv_socp_compress_enable(unsigned int u32DestChanID)
{
    return bsp_socp_compress_enable(u32DestChanID);
}

/*****************************************************************************
* �� �� ��  : mdrv_socp_compress_disable
* ��������  :�˽ӿ�����ֹͣdeflateѹ��
* �������  : u32SrcChanID:Դͨ��ID��
* �������  : ��
* �� �� ֵ  : SOCP_OK:ֹͣdeflateѹ���ɹ�
     SOCP_ERROR:ֹͣdeflateѹ��ʧ��
*****************************************************************************/

int mdrv_socp_compress_disable(unsigned int u32DestChanID)
{
    return bsp_socp_compress_disable(u32DestChanID);
}

int mdrv_socp_compress_status(void)		
{		
    return bsp_socp_compress_status();		
}


/*****************************************************************************
* �� �� ��  : mdrv_deflate_get_log_ind_mode
*
* ��������  : ��ȡ�ϱ�ģʽ�ӿ�
*
* �������  : ģʽ����
*
* �������  : ��
*
* �� �� ֵ  : ѹ���ϱ�ģʽ
*****************************************************************************/
int mdrv_deflate_get_log_ind_mode(unsigned int *eMode)
{
    return bsp_deflate_get_log_ind_mode(eMode);
}

/*****************************************************************************
* �� �� ��  : mdrv_socp_get_log_ind_mode
*
* ��������  : ��ȡ�ϱ�ģʽ�ӿ�
*
* �������  : ģʽ����
*
* �������  : ��
*
* �� �� ֵ  : ��ȡsocp�ϱ�ģʽ
*****************************************************************************/
int mdrv_socp_get_log_ind_mode(unsigned int *eMode)
{
    return bsp_socp_get_log_ind_mode(eMode);
}
EXPORT_SYMBOL(mdrv_socp_get_log_ind_mode);


int mdrv_socp_set_cfg_ind_mode(SOCP_IND_MODE_ENUM eMode)
{
    return bsp_socp_set_cfg_ind_mode(eMode);
}
EXPORT_SYMBOL(mdrv_socp_set_cfg_ind_mode);
int mdrv_socp_get_cfg_ind_mode(unsigned int *eMode)
{
    return bsp_socp_get_cfg_ind_mode(eMode);
    
}
int mdrv_socp_set_cps_ind_mode(DEFLATE_IND_COMPRESSS_ENUM eMode)
{
    return bsp_socp_set_cps_ind_mode(eMode);
}
int mdrv_socp_get_cps_ind_mode(unsigned int *eMode)
{
    return bsp_socp_get_cps_ind_mode(eMode);
}

int mdrv_clear_socp_buff(unsigned int u32SrcChanID)
{
    return bsp_clear_socp_buff(u32SrcChanID);
}


BSP_VOID BSP_SOCP_RefreshSDLogCfg(unsigned int ulTimerLen)
{
    UNUSED(ulTimerLen);
	return;
}
EXPORT_SYMBOL(BSP_SOCP_RefreshSDLogCfg);


