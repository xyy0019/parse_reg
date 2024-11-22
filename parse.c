#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


void print_vfce_chnl0_enable_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 解析并打印每个位段
	unsigned int reg_gclk_ctrl = (value >> 18) & 0x3FFF; // Bit 31:18
	unsigned int pls_chnl_prot_sw_rst = (value >> 12) & 0x01; // Bit 12
	unsigned int pls_force_frm_en = (value >> 7) & 0x01; // Bit 7
	unsigned int pls_force_frm_rst = (value >> 6) & 0x01; // Bit 6
	unsigned int reg_frm_en_mode = (value >> 5) & 0x01; // Bit 5
	unsigned int reg_frm_rst_mode = (value >> 4) & 0x01; // Bit 4
	unsigned int reg_chnl_enable = value & 0x01; // Bit 0
 
	// 打印位段的状态
	printf("reg_gclk_ctrl (Bit 31:18) = 0x%04X\n", reg_gclk_ctrl);
	printf("pls_chnl_prot_sw_rst (Bit 12) = %u\n", pls_chnl_prot_sw_rst);
	printf("pls_force_frm_en (Bit 7) = %u\n", pls_force_frm_en);
	printf("pls_force_frm_rst (Bit 6) = %u\n", pls_force_frm_rst);
	printf("reg_frm_en_mode (Bit 5) = %u\n", reg_frm_en_mode);
	printf("reg_frm_rst_mode (Bit 4) = %u\n", reg_frm_rst_mode);
	printf("reg_chnl_enable (Bit 0) = %u\n", reg_chnl_enable);
}

void print_vfce_chnl0_mode_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 根据问题描述中给出的位段定义进行解析
	unsigned int reserved = (value >> 23) & 0x1FF;				  // Bit 31:23 保留位
	unsigned int reg_444to422_mode = (value >> 20) & 0x07;		   // Bit 22:20
	unsigned int reg_422to420_mode = (value >> 17) & 0x07;		   // Bit 19:17
	unsigned int reg_core_sel = (value >> 16) & 0x01;			   // Bit 16
	unsigned int reg_bayer_input_plane = (value >> 14) & 0x03;	   // Bit 15:14
	unsigned int reg_enc_align_en = (value >> 13) & 0x01;		   // Bit 13
	unsigned int reg_enc_bits_luma = (value >> 10) & 0x07;		   // Bit 12:10
	unsigned int reg_enc_bits_chrm = (value >> 7) & 0x07;		   // Bit 9:7
	unsigned int reg_enc_format = (value >> 4) & 0x07;			   // Bit 6:4
	unsigned int reg_input_format = (value >> 1) & 0x07;		   // Bit 3:1
	unsigned int reg_fmt444_comb = value & 0x01;				   // Bit 0
 
	// 打印位段的状态
	printf("Reserved (Bit 31:23) = %u\n", reserved);
	printf("reg_444to422_mode (Bit 22:20) = %u\n", reg_444to422_mode);
	printf("reg_422to420_mode (Bit 19:17) = %u\n", reg_422to420_mode);
	printf("reg_core_sel (Bit 16) = %u\n", reg_core_sel);
	printf("reg_bayer_input_plane (Bit 15:14) = %u\n", reg_bayer_input_plane);
	printf("reg_enc_align_en (Bit 13) = %u\n", reg_enc_align_en);
	printf("reg_enc_bits_luma (Bit 12:10) = %u\n", reg_enc_bits_luma);
	printf("reg_enc_bits_chrm (Bit 9:7) = %u\n", reg_enc_bits_chrm);
	printf("reg_enc_format (Bit 6:4) = %u\n", reg_enc_format);
	printf("reg_input_format (Bit 3:1) = %u\n", reg_input_format);
	printf("reg_fmt444_comb (Bit 0) = %u\n", reg_fmt444_comb);
}

void print_vfce_chnl0_ctrl_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 解析位段
	unsigned int reserved_31_28 = (value >> 28) & 0x0F; 			 // Bit 31:28 保留位
	unsigned int reg_top_force_en = (value >> 24) & 0x0F;			 // Bit 27:24
	unsigned int reg_v_slice_mode = (value >> 23) & 0x01;			 // Bit 23
	unsigned int reg_h_slice_mode = (value >> 22) & 0x01;			 // Bit 22
	unsigned int reg_v_slice_num = (value >> 18) & 0x0F;			 // Bit 21:18
	unsigned int reg_h_slice_num = (value >> 14) & 0x0F;			 // Bit 17:14
	unsigned int pls_v_slice_clr = (value >> 13) & 0x01;			 // Bit 13
	unsigned int pls_h_slice_clr = (value >> 12) & 0x01;			 // Bit 12
	unsigned int reserved_11 = (value >> 11) & 0x01;				 // Bit 11 保留位
	unsigned int reg_pip_ini_ctrl = (value >> 10) & 0x01;			 // Bit 10
	unsigned int reg_pip_mode = (value >> 9) & 0x01;				 // Bit 9
	unsigned int reg_trans_thr_num = (value >> 1) & 0x7F;			 // Bit 8:1
	unsigned int reg_trans_ctrl_en = value & 0x01;					 // Bit 0
 
	// 打印位段的状态
	printf("Reserved (Bit 31:28) = %u\n", reserved_31_28);
	printf("reg_top_force_en (Bit 27:24) = %u\n", reg_top_force_en);
	printf("reg_v_slice_mode (Bit 23) = %u\n", reg_v_slice_mode);
	printf("reg_h_slice_mode (Bit 22) = %u\n", reg_h_slice_mode);
	printf("reg_v_slice_num (Bit 21:18) = %u\n", reg_v_slice_num);
	printf("reg_h_slice_num (Bit 17:14) = %u\n", reg_h_slice_num);
	printf("pls_v_slice_clr (Bit 13) = %u\n", pls_v_slice_clr);
	printf("pls_h_slice_clr (Bit 12) = %u\n", pls_h_slice_clr);
	printf("Reserved (Bit 11) = %u\n", reserved_11);
	printf("reg_pip_ini_ctrl (Bit 10) = %u\n", reg_pip_ini_ctrl);
	printf("reg_pip_mode (Bit 9) = %u\n", reg_pip_mode);
	printf("reg_trans_thr_num (Bit 8:1) = %u\n", reg_trans_thr_num);
	printf("reg_trans_ctrl_en (Bit 0) = %u\n", reg_trans_ctrl_en);
}

#define VFCE_CHNL0_DIMM_CTRL_DIMM_LAYER_EN_BIT 31
#define VFCE_CHNL0_DIMM_CTRL_DIMM_DATA_MASK 0x3fffffff
void print_VFCE_CHNL0_DIMM_CTRL_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int dimm_layer_en = (value >> VFCE_CHNL0_DIMM_CTRL_DIMM_LAYER_EN_BIT) & 1;
	unsigned int dimm_data = value & VFCE_CHNL0_DIMM_CTRL_DIMM_DATA_MASK;
	
	// 打印结果
	printf("  reg_dimm_layer_en: %u\n", dimm_layer_en);
	printf("  reg_dimm_data:	 0x%x\n", dimm_data);
}

#define VFCE_CHNL0_DUMMY_DATA_MASK 0x3fffffff
void print_vfce_chnl0_dummy_data(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 提取dummy data字段（低29位）
	unsigned int dummy_data = value & VFCE_CHNL0_DUMMY_DATA_MASK;
	
	// 打印结果
	printf("VFCE_CHNL0_DUMMY_DATA:\n");
	printf("  reg_dummy_data: 0x%07X\n", dummy_data);
}

void print_vfce_chnl0_size_in(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t hsize_bg = (value >> 16) & 0xFFFF;
	uint16_t vsize_bg = value & 0xFFFF;
	
	printf("VFCE_CHNL0_SIZE_IN:\n");
	printf("  reg_hsize_bg: %u (horizontal background size in pixels)\n", hsize_bg);
	printf("  reg_vsize_bg: %u (vertical background size in pixels)\n", vsize_bg);
}

void print_vfce_chnl0_pixel_in_hor_scope(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t enc_end_h = (value >> 16) & 0xFFFF;
	uint16_t enc_bgn_h = value & 0xFFFF;
	
	printf("VFCE_CHNL0_PIXEL_IN_HOR_SCOPE:\n");
	printf("  reg_enc_end_h: %u (encoding end horizontal pixel)\n", enc_end_h);
	printf("  reg_enc_bgn_h: %u (encoding start horizontal pixel)\n", enc_bgn_h);
}

void print_vfce_chnl0_pixel_in_ver_scope(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t enc_end_v = (value >> 16) & 0xFFFF;
	uint16_t enc_bgn_v = value & 0xFFFF;
	
	printf("VFCE_CHNL0_PIXEL_IN_VER_SCOPE:\n");
	printf("  reg_enc_end_v: %u (encoding end vertical pixel)\n", enc_end_v);
	printf("  reg_enc_bgn_v: %u (encoding start vertical pixel)\n", enc_bgn_v);
}

void print_vfce_chnl0_head1_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_HEAD1_BADDR:\n");
	printf("  reg_head1_baddr: 0x%08X\n", value);
}

void print_vfce_chnl0_head0_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_HEAD0_BADDR:\n");
	printf("  reg_head0_baddr: 0x%08X\n", value);
}

void print_vfce_chnl0_body0_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_BODY0_BADDR:\n");
	printf("  reg_body0_baddr: 0x%08X\n", value);
}

void print_vfce_chnl0_body1_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_BODY1_BADDR:\n");
	printf("  reg_body1_baddr: 0x%08X\n", value);
}

void print_vfce_chnl0_conv_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t cbuf_1_offset = (value >> 16) & 0x3FFF; // 右移2位来对齐（如果文档意图是这样）
	uint16_t cbuf_0_offset = value & 0x3FFF;
	
	printf("VFCE_CHNL0_CONV_BUF_OFST:\n");
	printf("  reg_cbuf_1_offset: %u (conversion buffer 1 offset)\n", cbuf_1_offset);
	printf("  reg_cbuf_0_offset: %u (conversion buffer 0 offset)\n", cbuf_0_offset);
}

void print_vfce_chnl0_ds_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t ds_buf_offset = value & 0xFFFF; // 提取数据采样缓冲区的偏移量
	
	printf("VFCE_CHNL0_DS_BUF_OFST:\n");
	printf("  DS_BUF_OFFSET: %u (data sampling buffer offset)\n", ds_buf_offset);
}

// 解析并打印VFCE_CHNL0_HEAD_BUF_OFST寄存器的值
void print_vfce_chnl0_head_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t head_1_offset = (value >> 16) & 0x3FFF; // 提取头部缓冲区1的偏移量（Bit 29:16）
	uint16_t head_0_offset = value & 0x3FFF;		// 提取头部缓冲区0的偏移量（Bit 13:0）
	
	printf("VFCE_CHNL0_HEAD_BUF_OFST:\n");
	printf("  HEAD_1_OFFSET: %u\n", head_1_offset);
	printf("  HEAD_0_OFFSET: %u\n", head_0_offset);
}
 
// 解析并打印VFCE_CHNL0_BODY_BUF_OFST寄存器的值
void print_vfce_chnl0_body_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t body_1_offset = (value >> 16) & 0x03FF; // 提取主体缓冲区1的偏移量（Bit 26:16）
	uint16_t body_0_offset = value & 0x03FF;		// 提取主体缓冲区0的偏移量（Bit 10:0）
	
	printf("VFCE_CHNL0_BODY_BUF_OFST:\n");
	printf("  BODY_1_OFFSET: %u\n", body_1_offset);
	printf("  BODY_0_OFFSET: %u\n", body_0_offset);
}
 
// 解析并打印VFCE_CHNL0_STAT1寄存器的值（只读）
void print_vfce_chnl0_stat1(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_STAT1:\n");
	printf("  RO_DBG_TOP_INFO1: %u\n", value); // 整个32位都是调试信息
}
 
// 解析并打印VFCE_CHNL0_STAT2寄存器的值（只读）
void print_vfce_chnl0_stat2(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_STAT2:\n");
	printf("  RO_DBG_TOP_INFO2: %u\n", value); // 整个32位都是调试信息
}

void print_vfce_chnl0_clr_flag(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 由于是W1T寄存器，这里仅打印整个值作为参考
	printf("VFCE_CHNL0_CLR_FLAG (W1T):\n");
	printf("  PLS_CLR_FLAG: %u\n", value);
}
 
// 解析并打印VFCE_CHNL0_STA0_FLAG寄存器的值（只读）
void print_vfce_chnl0_sta0_flag(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_STA0_FLAG (RO):\n");
	printf("  RO_STA0_FLAG: %u\n", value);
}
 
// 解析并打印VFCE_CHNL0_STA1_FLAG寄存器的值（只读）
void print_vfce_chnl0_sta1_flag(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL0_STA1_FLAG (RO):\n");
	printf("  RO_STA1_FLAG: %u\n", value);
}
 
// 解析并打印VFCE_CHNL0_WR_ARB_MISC寄存器的值
void print_vfce_chnl0_wr_arb_misc(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int pls_arb_sw_rst = value & 0x80000000;
	unsigned int reg_arb_awblk_last1 = (value >> 9) & 0x1;
	unsigned int reg_arb_awblk_last0 = (value >> 8) & 0x1;
	unsigned int reg_arb_weight_ch1 = (value >> 4) & 0xF;
	unsigned int reg_arb_weight_ch0 = value & 0xF;
	
	printf("VFCE_CHNL0_WR_ARB_MISC:\n");
	printf("  PLS_ARB_SW_RST: %u\n", pls_arb_sw_rst ? 1 : 0);
	printf("  REG_ARB_AWBLK_LAST1: %u\n", reg_arb_awblk_last1);
	printf("  REG_ARB_AWBLK_LAST0: %u\n", reg_arb_awblk_last0);
	printf("  REG_ARB_WEIGHT_CH1: %u\n", reg_arb_weight_ch1);
	printf("  REG_ARB_WEIGHT_CH0: %u\n", reg_arb_weight_ch0);
}
 
// 解析并打印VFCE_CHNL0_AFBC_MODE_0寄存器的值
void print_vfce_chnl0_afbc_mode_0(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int reg_uncmp_size = (value >> 5) & 0x1FF;
	unsigned int reg_burst_length_add_value = (value >> 2) & 0x7;
	unsigned int reg_ofset_burst4_en = (value >> 1) & 0x1;
	unsigned int reg_burst_length_add_en = value & 0x1;
	
	printf("VFCE_CHNL0_AFBC_MODE_0:\n");
	printf("  REG_UNCMP_SIZE: %u\n", reg_uncmp_size);
	printf("  REG_BURST_LENGTH_ADD_VALUE: %u\n", reg_burst_length_add_value);
	printf("  REG_OFSET_BURST4_EN: %u\n", reg_ofset_burst4_en);
	printf("  REG_BURST_LENGTH_ADD_EN: %u\n", reg_burst_length_add_en);
}
 
// 解析并打印VFCE_CHNL0_AFRC_MODE_0寄存器的值
void print_vfce_chnl0_afrc_mode_0(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int reg_afrc_head_mode = value & 0x80000000;
	unsigned int reg_input_format_mode = (value >> 28) & 0x7;
	unsigned int reg_pixel_format = (value >> 24) & 0xF;
	unsigned int reg_input_bayer_mode = (value >> 22) & 0x3;
	unsigned int reg_comp_target_byte_0 = (value >> 15) & 0x7F;
	unsigned int reg_comp_target_byte_1 = (value >> 8) & 0x7F;
	unsigned int reg_pixel_type_0 = (value >> 4) & 0xF;
	unsigned int reg_pixel_type_1 = value & 0xF;
	
	printf("VFCE_CHNL0_AFRC_MODE_0:\n");
	printf("  REG_AFRC_HEAD_MODE: %u\n", reg_afrc_head_mode ? 1 : 0);
	printf("  REG_INPUT_FORMAT_MODE: %u\n", reg_input_format_mode);
	printf("  REG_PIXEL_FORMAT: %u\n", reg_pixel_format);
	printf("  REG_INPUT_BAYER_MODE: %u\n", reg_input_bayer_mode);
	printf("  REG_COMP_TARGET_BYTE_0: %u\n", reg_comp_target_byte_0);
	printf("  REG_COMP_TARGET_BYTE_1: %u\n", reg_comp_target_byte_1);
	printf("  REG_PIXEL_TYPE_0: %u\n", reg_pixel_type_0);
	printf("  REG_PIXEL_TYPE_1: %u\n", reg_pixel_type_1);
}

void print_vfce_chnl1_enable_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 解析并打印每个位段
	unsigned int reg_gclk_ctrl = (value >> 18) & 0x3FFF; // Bit 31:18
	unsigned int pls_chnl_prot_sw_rst = (value >> 12) & 0x01; // Bit 12
	unsigned int pls_force_frm_en = (value >> 7) & 0x01; // Bit 7
	unsigned int pls_force_frm_rst = (value >> 6) & 0x01; // Bit 6
	unsigned int reg_frm_en_mode = (value >> 5) & 0x01; // Bit 5
	unsigned int reg_frm_rst_mode = (value >> 4) & 0x01; // Bit 4
	unsigned int reg_chnl_enable = value & 0x01; // Bit 0
 
	// 打印位段的状态
	printf("reg_gclk_ctrl (Bit 31:18) = 0x%04X\n", reg_gclk_ctrl);
	printf("pls_chnl_prot_sw_rst (Bit 12) = %u\n", pls_chnl_prot_sw_rst);
	printf("pls_force_frm_en (Bit 7) = %u\n", pls_force_frm_en);
	printf("pls_force_frm_rst (Bit 6) = %u\n", pls_force_frm_rst);
	printf("reg_frm_en_mode (Bit 5) = %u\n", reg_frm_en_mode);
	printf("reg_frm_rst_mode (Bit 4) = %u\n", reg_frm_rst_mode);
	printf("reg_chnl_enable (Bit 0) = %u\n", reg_chnl_enable);
}

void print_vfce_chnl1_mode_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 根据问题描述中给出的位段定义进行解析
	unsigned int reserved = (value >> 23) & 0x1FF;				  // Bit 31:23 保留位
	unsigned int reg_444to422_mode = (value >> 20) & 0x07;		   // Bit 22:20
	unsigned int reg_422to420_mode = (value >> 17) & 0x07;		   // Bit 19:17
	unsigned int reg_core_sel = (value >> 16) & 0x01;			   // Bit 16
	unsigned int reg_bayer_input_plane = (value >> 14) & 0x03;	   // Bit 15:14
	unsigned int reg_enc_align_en = (value >> 13) & 0x01;		   // Bit 13
	unsigned int reg_enc_bits_luma = (value >> 10) & 0x07;		   // Bit 12:10
	unsigned int reg_enc_bits_chrm = (value >> 7) & 0x07;		   // Bit 9:7
	unsigned int reg_enc_format = (value >> 4) & 0x07;			   // Bit 6:4
	unsigned int reg_input_format = (value >> 1) & 0x07;		   // Bit 3:1
	unsigned int reg_fmt444_comb = value & 0x01;				   // Bit 0
 
	// 打印位段的状态
	printf("Reserved (Bit 31:23) = %u\n", reserved);
	printf("reg_444to422_mode (Bit 22:20) = %u\n", reg_444to422_mode);
	printf("reg_422to420_mode (Bit 19:17) = %u\n", reg_422to420_mode);
	printf("reg_core_sel (Bit 16) = %u\n", reg_core_sel);
	printf("reg_bayer_input_plane (Bit 15:14) = %u\n", reg_bayer_input_plane);
	printf("reg_enc_align_en (Bit 13) = %u\n", reg_enc_align_en);
	printf("reg_enc_bits_luma (Bit 12:10) = %u\n", reg_enc_bits_luma);
	printf("reg_enc_bits_chrm (Bit 9:7) = %u\n", reg_enc_bits_chrm);
	printf("reg_enc_format (Bit 6:4) = %u\n", reg_enc_format);
	printf("reg_input_format (Bit 3:1) = %u\n", reg_input_format);
	printf("reg_fmt444_comb (Bit 0) = %u\n", reg_fmt444_comb);
}

void print_vfce_chnl1_ctrl_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 解析位段
	unsigned int reserved_31_28 = (value >> 28) & 0x0F; 			 // Bit 31:28 保留位
	unsigned int reg_top_force_en = (value >> 24) & 0x0F;			 // Bit 27:24
	unsigned int reg_v_slice_mode = (value >> 23) & 0x01;			 // Bit 23
	unsigned int reg_h_slice_mode = (value >> 22) & 0x01;			 // Bit 22
	unsigned int reg_v_slice_num = (value >> 18) & 0x0F;			 // Bit 21:18
	unsigned int reg_h_slice_num = (value >> 14) & 0x0F;			 // Bit 17:14
	unsigned int pls_v_slice_clr = (value >> 13) & 0x01;			 // Bit 13
	unsigned int pls_h_slice_clr = (value >> 12) & 0x01;			 // Bit 12
	unsigned int reserved_11 = (value >> 11) & 0x01;				 // Bit 11 保留位
	unsigned int reg_pip_ini_ctrl = (value >> 10) & 0x01;			 // Bit 10
	unsigned int reg_pip_mode = (value >> 9) & 0x01;				 // Bit 9
	unsigned int reg_trans_thr_num = (value >> 1) & 0x7F;			 // Bit 8:1
	unsigned int reg_trans_ctrl_en = value & 0x01;					 // Bit 0
 
	// 打印位段的状态
	printf("Reserved (Bit 31:28) = %u\n", reserved_31_28);
	printf("reg_top_force_en (Bit 27:24) = %u\n", reg_top_force_en);
	printf("reg_v_slice_mode (Bit 23) = %u\n", reg_v_slice_mode);
	printf("reg_h_slice_mode (Bit 22) = %u\n", reg_h_slice_mode);
	printf("reg_v_slice_num (Bit 21:18) = %u\n", reg_v_slice_num);
	printf("reg_h_slice_num (Bit 17:14) = %u\n", reg_h_slice_num);
	printf("pls_v_slice_clr (Bit 13) = %u\n", pls_v_slice_clr);
	printf("pls_h_slice_clr (Bit 12) = %u\n", pls_h_slice_clr);
	printf("Reserved (Bit 11) = %u\n", reserved_11);
	printf("reg_pip_ini_ctrl (Bit 10) = %u\n", reg_pip_ini_ctrl);
	printf("reg_pip_mode (Bit 9) = %u\n", reg_pip_mode);
	printf("reg_trans_thr_num (Bit 8:1) = %u\n", reg_trans_thr_num);
	printf("reg_trans_ctrl_en (Bit 0) = %u\n", reg_trans_ctrl_en);
}

void print_VFCE_CHNL1_DIMM_CTRL_bits(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int dimm_layer_en = (value >> VFCE_CHNL0_DIMM_CTRL_DIMM_LAYER_EN_BIT) & 1;
	unsigned int dimm_data = value & VFCE_CHNL0_DIMM_CTRL_DIMM_DATA_MASK;
	
	// 打印结果
	printf("  reg_dimm_layer_en: %u\n", dimm_layer_en);
	printf("  reg_dimm_data:	 0x%07X\n", dimm_data);
}

void print_vfce_chnl1_dummy_data(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 提取dummy data字段（低29位）
	unsigned int dummy_data = value & VFCE_CHNL0_DUMMY_DATA_MASK;
	
	// 打印结果
	printf("VFCE_CHNL1_DUMMY_DATA:\n");
	printf("  reg_dummy_data: 0x%07X\n", dummy_data);
}

void print_vfce_chnl1_size_in(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t hsize_bg = (value >> 16) & 0xFFFF;
	uint16_t vsize_bg = value & 0xFFFF;
	
	printf("VFCE_CHNL1_SIZE_IN:\n");
	printf("  reg_hsize_bg: %u (horizontal background size in pixels)\n", hsize_bg);
	printf("  reg_vsize_bg: %u (vertical background size in pixels)\n", vsize_bg);
}

void print_vfce_chnl1_pixel_in_hor_scope(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t enc_end_h = (value >> 16) & 0xFFFF;
	uint16_t enc_bgn_h = value & 0xFFFF;
	
	printf("VFCE_CHNL1_PIXEL_IN_HOR_SCOPE:\n");
	printf("  reg_enc_end_h: %u (encoding end horizontal pixel)\n", enc_end_h);
	printf("  reg_enc_bgn_h: %u (encoding start horizontal pixel)\n", enc_bgn_h);
}

void print_vfce_chnl1_pixel_in_ver_scope(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t enc_end_v = (value >> 16) & 0xFFFF;
	uint16_t enc_bgn_v = value & 0xFFFF;
	
	printf("VFCE_CHNL1_PIXEL_IN_VER_SCOPE:\n");
	printf("  reg_enc_end_v: %u (encoding end vertical pixel)\n", enc_end_v);
	printf("  reg_enc_bgn_v: %u (encoding start vertical pixel)\n", enc_bgn_v);
}

void print_vfce_chnl1_head1_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_HEAD1_BADDR:\n");
	printf("  reg_head1_baddr: 0x%08X\n", value);
}

void print_vfce_chnl1_head0_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_HEAD0_BADDR:\n");
	printf("  reg_head0_baddr: 0x%08X\n", value);
}

void print_vfce_chnl1_body0_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_BODY0_BADDR:\n");
	printf("  reg_body0_baddr: 0x%08X\n", value);
}

void print_vfce_chnl1_body1_baddr(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_BODY1_BADDR:\n");
	printf("  reg_body1_baddr: 0x%08X\n", value);
}

void print_vfce_chnl1_conv_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t cbuf_1_offset = (value >> 16) & 0x3FFF; // 右移2位来对齐（如果文档意图是这样）
	uint16_t cbuf_0_offset = value & 0x3FFF;
	
	printf("VFCE_CHNL1_CONV_BUF_OFST:\n");
	printf("  reg_cbuf_1_offset: %u (conversion buffer 1 offset)\n", cbuf_1_offset);
	printf("  reg_cbuf_0_offset: %u (conversion buffer 0 offset)\n", cbuf_0_offset);
}

void print_vfce_chnl1_ds_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t ds_buf_offset = value & 0xFFFF; // 提取数据采样缓冲区的偏移量
	
	printf("VFCE_CHNL1_DS_BUF_OFST:\n");
	printf("  DS_BUF_OFFSET: %u (data sampling buffer offset)\n", ds_buf_offset);
}

// 解析并打印VFCE_CHNL1_HEAD_BUF_OFST寄存器的值
void print_vfce_chnl1_head_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t head_1_offset = (value >> 16) & 0x3FFF; // 提取头部缓冲区1的偏移量（Bit 29:16）
	uint16_t head_0_offset = value & 0x3FFF;		// 提取头部缓冲区0的偏移量（Bit 13:0）
	
	printf("VFCE_CHNL1_HEAD_BUF_OFST:\n");
	printf("  HEAD_1_OFFSET: %u\n", head_1_offset);
	printf("  HEAD_0_OFFSET: %u\n", head_0_offset);
}
 
// 解析并打印VFCE_CHNL1_BODY_BUF_OFST寄存器的值
void print_vfce_chnl1_body_buf_ofst(unsigned int value) {
	printf("value = 0x%x\n", value);
	uint16_t body_1_offset = (value >> 16) & 0x03FF; // 提取主体缓冲区1的偏移量（Bit 26:16）
	uint16_t body_0_offset = value & 0x03FF;		// 提取主体缓冲区0的偏移量（Bit 10:0）
	
	printf("VFCE_CHNL1_BODY_BUF_OFST:\n");
	printf("  BODY_1_OFFSET: %u\n", body_1_offset);
	printf("  BODY_0_OFFSET: %u\n", body_0_offset);
}
 
// 解析并打印VFCE_CHNL1_STAT1寄存器的值（只读）
void print_vfce_chnl1_stat1(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_STAT1:\n");
	printf("  RO_DBG_TOP_INFO1: %u\n", value); // 整个32位都是调试信息
}
 
// 解析并打印VFCE_CHNL1_STAT2寄存器的值（只读）
void print_vfce_chnl1_stat2(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_STAT2:\n");
	printf("  RO_DBG_TOP_INFO2: %u\n", value); // 整个32位都是调试信息
}

void print_vfce_chnl1_clr_flag(unsigned int value) {
	printf("value = 0x%x\n", value);
	// 由于是W1T寄存器，这里仅打印整个值作为参考
	printf("VFCE_CHNL1_CLR_FLAG (W1T):\n");
	printf("  PLS_CLR_FLAG: %u\n", value);
}
 
// 解析并打印VFCE_CHNL1_STA0_FLAG寄存器的值（只读）
void print_vfce_chnl1_sta0_flag(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_STA0_FLAG (RO):\n");
	printf("  RO_STA0_FLAG: %u\n", value);
}
 
// 解析并打印VFCE_CHNL1_STA1_FLAG寄存器的值（只读）
void print_vfce_chnl1_sta1_flag(unsigned int value) {
	printf("value = 0x%x\n", value);
	printf("VFCE_CHNL1_STA1_FLAG (RO):\n");
	printf("  RO_STA1_FLAG: %u\n", value);
}
 
// 解析并打印VFCE_CHNL0_WR_ARB_MISC寄存器的值
void print_vfce_chnl1_wr_arb_misc(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int pls_arb_sw_rst = value & 0x80000000;
	unsigned int reg_arb_awblk_last1 = (value >> 9) & 0x1;
	unsigned int reg_arb_awblk_last0 = (value >> 8) & 0x1;
	unsigned int reg_arb_weight_ch1 = (value >> 4) & 0xF;
	unsigned int reg_arb_weight_ch0 = value & 0xF;
	
	printf("VFCE_CHNL1_WR_ARB_MISC:\n");
	printf("  PLS_ARB_SW_RST: %u\n", pls_arb_sw_rst ? 1 : 0);
	printf("  REG_ARB_AWBLK_LAST1: %u\n", reg_arb_awblk_last1);
	printf("  REG_ARB_AWBLK_LAST0: %u\n", reg_arb_awblk_last0);
	printf("  REG_ARB_WEIGHT_CH1: %u\n", reg_arb_weight_ch1);
	printf("  REG_ARB_WEIGHT_CH0: %u\n", reg_arb_weight_ch0);
}
 
// 解析并打印VFCE_CHNL1_AFBC_MODE_0寄存器的值
void print_vfce_chnl1_afbc_mode_0(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int reg_uncmp_size = (value >> 5) & 0x1FF;
	unsigned int reg_burst_length_add_value = (value >> 2) & 0x7;
	unsigned int reg_ofset_burst4_en = (value >> 1) & 0x1;
	unsigned int reg_burst_length_add_en = value & 0x1;
	
	printf("VFCE_CHNL1_AFBC_MODE_0:\n");
	printf("  REG_UNCMP_SIZE: %u\n", reg_uncmp_size);
	printf("  REG_BURST_LENGTH_ADD_VALUE: %u\n", reg_burst_length_add_value);
	printf("  REG_OFSET_BURST4_EN: %u\n", reg_ofset_burst4_en);
	printf("  REG_BURST_LENGTH_ADD_EN: %u\n", reg_burst_length_add_en);
}
 
// 解析并打印VFCE_CHNL1_AFRC_MODE_0寄存器的值
void print_vfce_chnl1_afrc_mode_0(unsigned int value) {
	printf("value = 0x%x\n", value);
	unsigned int reg_afrc_head_mode = value & 0x80000000;
	unsigned int reg_input_format_mode = (value >> 28) & 0x7;
	unsigned int reg_pixel_format = (value >> 24) & 0xF;
	unsigned int reg_input_bayer_mode = (value >> 22) & 0x3;
	unsigned int reg_comp_target_byte_0 = (value >> 15) & 0x7F;
	unsigned int reg_comp_target_byte_1 = (value >> 8) & 0x7F;
	unsigned int reg_pixel_type_0 = (value >> 4) & 0xF;
	unsigned int reg_pixel_type_1 = value & 0xF;
	
	printf("VFCE_CHNL1_AFRC_MODE_0:\n");
	printf("  REG_AFRC_HEAD_MODE: %u\n", reg_afrc_head_mode ? 1 : 0);
	printf("  REG_INPUT_FORMAT_MODE: %u\n", reg_input_format_mode);
	printf("  REG_PIXEL_FORMAT: %u\n", reg_pixel_format);
	printf("  REG_INPUT_BAYER_MODE: %u\n", reg_input_bayer_mode);
	printf("  REG_COMP_TARGET_BYTE_0: %u\n", reg_comp_target_byte_0);
	printf("  REG_COMP_TARGET_BYTE_1: %u\n", reg_comp_target_byte_1);
	printf("  REG_PIXEL_TYPE_0: %u\n", reg_pixel_type_0);
	printf("  REG_PIXEL_TYPE_1: %u\n", reg_pixel_type_1);
}

void parse_VFCE_AFBCE_FORMAT(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint8_t reg_burst_length_add_value = (reg_value >> 12) & 0x7;
	uint8_t reg_ofset_burst4_en = (reg_value >> 11) & 0x1;
	uint8_t reg_burst_length_add_en = (reg_value >> 10) & 0x1;
	uint8_t reg_format_mode = (reg_value >> 8) & 0x3;
	uint8_t reg_compbits_c = (reg_value >> 4) & 0xF;
	uint8_t reg_compbits_y = reg_value & 0xF;
 
	printf("VFCE_AFBCE_FORMAT:\n");
	printf("  reg_burst_length_add_value: %u\n", reg_burst_length_add_value);
	printf("  reg_ofset_burst4_en: %u\n", reg_ofset_burst4_en);
	printf("  reg_burst_length_add_en: %u\n", reg_burst_length_add_en);
	printf("  reg_format_mode: %u\n", reg_format_mode);
	printf("  reg_compbits_c: %u\n", reg_compbits_c);
	printf("  reg_compbits_y: %u\n", reg_compbits_y);
}

// 解析VFCE_AFBCE_MODE_EN寄存器的函数
void parse_VFCE_AFBCE_MODE_EN(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	// Bit 31:28 reserved
	// Bit 27:26 reserved
	
	// Bit 25: reg_adpt_interleave_ymode
	uint8_t reg_adpt_interleave_ymode = (reg_value >> 25) & 0x1;
	
	// Bit 24: reg_adpt_interleave_cmode
	uint8_t reg_adpt_interleave_cmode = (reg_value >> 24) & 0x1;
	
	// Bit 23: reg_adpt_yinterleave_luma_ride
	uint8_t reg_adpt_yinterleave_luma_ride = (reg_value >> 23) & 0x1;
	
	// Bit 22: reg_adpt_yinterleave_chrm_ride
	uint8_t reg_adpt_yinterleave_chrm_ride = (reg_value >> 22) & 0x1;
	
	// Bit 21: reg_adpt_xinterleave_luma_ride
	uint8_t reg_adpt_xinterleave_luma_ride = (reg_value >> 21) & 0x1;
	
	// Bit 20: reg_adpt_xinterleave_chrm_ride
	uint8_t reg_adpt_xinterleave_chrm_ride = (reg_value >> 20) & 0x1;
	
	// Bit 19 reserved
	
	// Bit 18: reg_disable_order_mode_i_6
	uint8_t reg_disable_order_mode_i_6 = (reg_value >> 18) & 0x1;
	
	// Bit 17: reg_disable_order_mode_i_5
	uint8_t reg_disable_order_mode_i_5 = (reg_value >> 17) & 0x1;
	
	// Bit 16: reg_disable_order_mode_i_4
	uint8_t reg_disable_order_mode_i_4 = (reg_value >> 16) & 0x1;
	
	// Bit 15: reg_disable_order_mode_i_3
	uint8_t reg_disable_order_mode_i_3 = (reg_value >> 15) & 0x1;
	
	// Bit 14: reg_disable_order_mode_i_2
	uint8_t reg_disable_order_mode_i_2 = (reg_value >> 14) & 0x1;
	
	// Bit 13: reg_disable_order_mode_i_1
	uint8_t reg_disable_order_mode_i_1 = (reg_value >> 13) & 0x1;
	
	// Bit 12: reg_disable_order_mode_i_0
	uint8_t reg_disable_order_mode_i_0 = (reg_value >> 12) & 0x1;
	
	// Bit 11 reserved
	
	// Bit 10: reg_minval_yenc_en
	uint8_t reg_minval_yenc_en = (reg_value >> 10) & 0x1;
	
	// Bit 9: reg_16x4block_enable
	uint8_t reg_16x4block_enable = (reg_value >> 9) & 0x1;
	
	// Bit 8: reg_uncompress_split_mode
	uint8_t reg_uncompress_split_mode = (reg_value >> 8) & 0x1;
	
	// Bit 7:6 reserved
	
	// Bit 5: reg_input_padding_uv128
	uint8_t reg_input_padding_uv128 = (reg_value >> 5) & 0x1;
	
	// Bit 4: reg_dwds_padding_uv128
	uint8_t reg_dwds_padding_uv128 = (reg_value >> 4) & 0x1;
	
	// Bit 3:1 reg_force_order_mode_value
	uint8_t reg_force_order_mode_value = (reg_value >> 1) & 0x7;
	
	// Bit 0: reg_force_order_mode_en
	uint8_t reg_force_order_mode_en = reg_value & 0x1;
	
	printf("VFCE_AFBCE_MODE_EN:\n");
	printf("  reg_adpt_interleave_ymode: %u\n", reg_adpt_interleave_ymode);
	printf("  reg_adpt_interleave_cmode: %u\n", reg_adpt_interleave_cmode);
	printf("  reg_adpt_yinterleave_luma_ride: %u\n", reg_adpt_yinterleave_luma_ride);
	printf("  reg_adpt_yinterleave_chrm_ride: %u\n", reg_adpt_yinterleave_chrm_ride);
	printf("  reg_adpt_xinterleave_luma_ride: %u\n", reg_adpt_xinterleave_luma_ride);
	printf("  reg_adpt_xinterleave_chrm_ride: %u\n", reg_adpt_xinterleave_chrm_ride);
	printf("  reg_disable_order_mode_i_6: %u\n", reg_disable_order_mode_i_6);
	printf("  reg_disable_order_mode_i_5: %u\n", reg_disable_order_mode_i_5);
	printf("  reg_disable_order_mode_i_4: %u\n", reg_disable_order_mode_i_4);
	printf("  reg_disable_order_mode_i_3: %u\n", reg_disable_order_mode_i_3);
	printf("  reg_disable_order_mode_i_2: %u\n", reg_disable_order_mode_i_2);
	printf("  reg_disable_order_mode_i_1: %u\n", reg_disable_order_mode_i_1);
	printf("  reg_disable_order_mode_i_0: %u\n", reg_disable_order_mode_i_0);
	printf("  reg_minval_yenc_en: %u\n", reg_minval_yenc_en);
	printf("  reg_16x4block_enable: %u\n", reg_16x4block_enable);
	printf("  reg_uncompress_split_mode: %u\n", reg_uncompress_split_mode);
	printf("  reg_input_padding_uv128: %u\n", reg_input_padding_uv128);
	printf("  reg_dwds_padding_uv128: %u\n", reg_dwds_padding_uv128);
	printf("  reg_force_order_mode_value: %u\n", reg_force_order_mode_value);
	printf("  reg_force_order_mode_en: %u\n", reg_force_order_mode_en);
}

// 解析VFCE_AFBCE_DWSCALAR寄存器的函数
void parse_VFCE_AFBCE_DWSCALAR(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint8_t reg_dwscalar_w0 = (reg_value >> 6) & 0x3;
	uint8_t reg_dwscalar_w1 = (reg_value >> 4) & 0x3;
	uint8_t reg_dwscalar_h0 = (reg_value >> 2) & 0x3;
	uint8_t reg_dwscalar_h1 = reg_value & 0x3;
 
	printf("VFCE_AFBCE_DWSCALAR:\n");
	printf("  reg_dwscalar_w0: %u\n", reg_dwscalar_w0);
	printf("  reg_dwscalar_w1: %u\n", reg_dwscalar_w1);
	printf("  reg_dwscalar_h0: %u\n", reg_dwscalar_h0);
	printf("  reg_dwscalar_h1: %u\n", reg_dwscalar_h1);
}
 
// 解析VFCE_AFBCE_DEFCOLOR_1寄存器的函数
void parse_VFCE_AFBCE_DEFCOLOR_1(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint16_t reg_enc_defaultcolor_3 = (reg_value >> 12) & 0xFFF;
	uint16_t reg_enc_defaultcolor_0 = reg_value & 0xFFF;
 
	printf("VFCE_AFBCE_DEFCOLOR_1:\n");
	printf("  reg_enc_defaultcolor_3: %u\n", reg_enc_defaultcolor_3);
	printf("  reg_enc_defaultcolor_0: %u\n", reg_enc_defaultcolor_0);
}
 
// 解析VFCE_AFBCE_DEFCOLOR_2寄存器的函数
void parse_VFCE_AFBCE_DEFCOLOR_2(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint16_t reg_enc_defaultcolor_2 = (reg_value >> 12) & 0xFFF;
	uint16_t reg_enc_defaultcolor_1 = reg_value & 0xFFF;
 
	printf("VFCE_AFBCE_DEFCOLOR_2:\n");
	printf("  reg_enc_defaultcolor_2: %u\n", reg_enc_defaultcolor_2);
	printf("  reg_enc_defaultcolor_1: %u\n", reg_enc_defaultcolor_1);
}
 
// 解析VFCE_AFBCE_QUANT_ENABLE寄存器的函数
void parse_VFCE_AFBCE_QUANT_ENABLE(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	int8_t reg_bcleav_ofst = (int8_t)((reg_value >> 8) & 0x3); // 注意：这里假设是有符号的，但通常硬件寄存器是无符号的，这里根据文档处理
	uint8_t reg_quant_expand_en_1 = (reg_value >> 11) & 0x1;
	uint8_t reg_quant_expand_en_0 = (reg_value >> 10) & 0x1;
	uint8_t reg_quant_enable_1 = (reg_value >> 4) & 0x1;
	uint8_t reg_quant_enable_0 = reg_value & 0x1;
 
	printf("VFCE_AFBCE_QUANT_ENABLE:\n");
	printf("  reg_quant_expand_en_1: %u\n", reg_quant_expand_en_1);
	printf("  reg_quant_expand_en_0: %u\n", reg_quant_expand_en_0);
	printf("  reg_bcleav_ofst: %d\n", reg_bcleav_ofst); // 注意：这里以有符号形式打印
	printf("  reg_quant_enable_1: %u\n", reg_quant_enable_1);
	printf("  reg_quant_enable_0: %u\n", reg_quant_enable_0);
}

// 解析VFCE_AFBCE_IQUANT_LUT_1寄存器的函数
void parse_VFCE_AFBCE_IQUANT_LUT_1(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint8_t reg_iquant_yclut_0_11 = (reg_value >> 28) & 0x7; // 3 bits
	uint8_t reg_iquant_yclut_0_10 = (reg_value >> 24) & 0x7; // 3 bits
	uint8_t reg_iquant_yclut_0_9 = (reg_value >> 20) & 0x7;  // 3 bits
	uint8_t reg_iquant_yclut_0_8 = (reg_value >> 16) & 0x7;  // 3 bits
	uint8_t reg_iquant_yclut_0_7 = (reg_value >> 12) & 0x7;  // 3 bits
	uint8_t reg_iquant_yclut_0_6 = (reg_value >> 8) & 0x7;	 // 3 bits
	uint8_t reg_iquant_yclut_0_5 = (reg_value >> 4) & 0x7;	 // 3 bits
	uint8_t reg_iquant_yclut_0_4 = reg_value & 0x7; 		 // 3 bits
 
	printf("VFCE_AFBCE_IQUANT_LUT_1:\n");
	printf("  reg_iquant_yclut_0_11: %u\n", reg_iquant_yclut_0_11);
	printf("  reg_iquant_yclut_0_10: %u\n", reg_iquant_yclut_0_10);
	printf("  reg_iquant_yclut_0_9: %u\n", reg_iquant_yclut_0_9);
	printf("  reg_iquant_yclut_0_8: %u\n", reg_iquant_yclut_0_8);
	printf("  reg_iquant_yclut_0_7: %u\n", reg_iquant_yclut_0_7);
	printf("  reg_iquant_yclut_0_6: %u\n", reg_iquant_yclut_0_6);
	printf("  reg_iquant_yclut_0_5: %u\n", reg_iquant_yclut_0_5);
	printf("  reg_iquant_yclut_0_4: %u\n", reg_iquant_yclut_0_4);
}

// 解析VFCE_AFBCE_IQUANT_LUT_2寄存器的函数
void parse_VFCE_AFBCE_IQUANT_LUT_2(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint8_t reg_iquant_yclut_0_3 = (reg_value >> 12) & 0x7; // 3 bits
	uint8_t reg_iquant_yclut_0_2 = (reg_value >> 8) & 0x7;	// 3 bits
	uint8_t reg_iquant_yclut_0_1 = (reg_value >> 4) & 0x7;	// 3 bits
	uint8_t reg_iquant_yclut_0_0 = reg_value & 0x7; 		// 3 bits
 
	printf("VFCE_AFBCE_IQUANT_LUT_2:\n");
	printf("  reg_iquant_yclut_0_3: %u\n", reg_iquant_yclut_0_3);
	printf("  reg_iquant_yclut_0_2: %u\n", reg_iquant_yclut_0_2);
	printf("  reg_iquant_yclut_0_1: %u\n", reg_iquant_yclut_0_1);
	printf("  reg_iquant_yclut_0_0: %u\n", reg_iquant_yclut_0_0);
}
 
// 解析VFCE_AFBCE_IQUANT_LUT_3寄存器的函数
void parse_VFCE_AFBCE_IQUANT_LUT_3(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint8_t reg_iquant_yclut_1_11 = (reg_value >> 28) & 0x7; // 3 bits
	uint8_t reg_iquant_yclut_1_10 = (reg_value >> 24) & 0x7; // 3 bits
	uint8_t reg_iquant_yclut_1_9 = (reg_value >> 20) & 0x7;  // 3 bits
	uint8_t reg_iquant_yclut_1_8 = (reg_value >> 16) & 0x7;  // 3 bits
	uint8_t reg_iquant_yclut_1_7 = (reg_value >> 12) & 0x7;  // 3 bits
	uint8_t reg_iquant_yclut_1_6 = (reg_value >> 8) & 0x7;	 // 3 bits
	uint8_t reg_iquant_yclut_1_5 = (reg_value >> 4) & 0x7;	 // 3 bits
	uint8_t reg_iquant_yclut_1_4 = reg_value & 0x7; 		 // 3 bits
 
	printf("VFCE_AFBCE_IQUANT_LUT_3:\n");
	printf("  reg_iquant_yclut_1_11: %u\n", reg_iquant_yclut_1_11);
	printf("  reg_iquant_yclut_1_10: %u\n", reg_iquant_yclut_1_10);
	printf("  reg_iquant_yclut_1_9: %u\n", reg_iquant_yclut_1_9);
	printf("  reg_iquant_yclut_1_8: %u\n", reg_iquant_yclut_1_8);
	printf("  reg_iquant_yclut_1_7: %u\n", reg_iquant_yclut_1_7);
	printf("  reg_iquant_yclut_1_6: %u\n", reg_iquant_yclut_1_6);
	printf("  reg_iquant_yclut_1_5: %u\n", reg_iquant_yclut_1_5);
	printf("  reg_iquant_yclut_1_4: %u\n", reg_iquant_yclut_1_4);
}
 
// 解析VFCE_AFBCE_IQUANT_LUT_4寄存器的函数
void parse_VFCE_AFBCE_IQUANT_LUT_4(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint8_t reg_iquant_yclut_1_3 = (reg_value >> 12) & 0x7; // 3 bits
	uint8_t reg_iquant_yclut_1_2 = (reg_value >> 8) & 0x7;	// 3 bits
	uint8_t reg_iquant_yclut_1_1 = (reg_value >> 4) & 0x7;	// 3 bits
	uint8_t reg_iquant_yclut_1_0 = reg_value & 0x7; 		// 3 bits
 
	printf("VFCE_AFBCE_IQUANT_LUT_4:\n");
	printf("  reg_iquant_yclut_1_3: %u\n", reg_iquant_yclut_1_3);
	printf("  reg_iquant_yclut_1_2: %u\n", reg_iquant_yclut_1_2);
	printf("  reg_iquant_yclut_1_1: %u\n", reg_iquant_yclut_1_1);
	printf("  reg_iquant_yclut_1_0: %u\n", reg_iquant_yclut_1_0);
}

void print_rquant_lut_1(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	// 打印每个量化值（注意：这里假设您已经知道了每个量化值的位宽和位置）
	printf("RQUANT_LUT_1:\n");
	printf("reg_rquant_yclut_0_4: %u\n", (reg_value >>	0) & 0x07);
	printf("reg_rquant_yclut_0_5: %u\n", (reg_value >>	4) & 0x07);
	printf("reg_rquant_yclut_0_6: %u\n", (reg_value >>	8) & 0x07);
	printf("reg_rquant_yclut_0_7: %u\n", (reg_value >> 12) & 0x07);
	printf("reg_rquant_yclut_0_8: %u\n", (reg_value >> 16) & 0x07);
	printf("reg_rquant_yclut_0_9: %u\n", (reg_value >> 20) & 0x07);
	printf("reg_rquant_yclut_0_10: %u\n", (reg_value >> 24) & 0x07);
	printf("reg_rquant_yclut_0_11: %u\n", (reg_value >> 28) & 0x07);
}
 
void print_rquant_lut_2(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	// 注意：LUT_2的高16位是保留的，所以我们只打印低16位中的量化值
	printf("RQUANT_LUT_2:\n");
	printf("reg_rquant_yclut_0_0: %u\n", (reg_value >>	0) & 0x07);
	printf("reg_rquant_yclut_0_1: %u\n", (reg_value >>	4) & 0x07);
	printf("reg_rquant_yclut_0_2: %u\n", (reg_value >>	8) & 0x07);
	printf("reg_rquant_yclut_0_3: %u\n", (reg_value >> 12) & 0x07);
}
 
void print_rquant_lut_3(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	// 打印每个量化值
	printf("RQUANT_LUT_3:\n");
	printf("reg_rquant_yclut_1_4: %u\n", (reg_value >>	0) & 0x07);
	printf("reg_rquant_yclut_1_5: %u\n", (reg_value >>	4) & 0x07);
	printf("reg_rquant_yclut_1_6: %u\n", (reg_value >>	8) & 0x07);
	printf("reg_rquant_yclut_1_7: %u\n", (reg_value >> 12) & 0x07);
	printf("reg_rquant_yclut_1_8: %u\n", (reg_value >> 16) & 0x07);
	printf("reg_rquant_yclut_1_9: %u\n", (reg_value >> 20) & 0x07);
	printf("reg_rquant_yclut_1_10: %u\n", (reg_value >> 24) & 0x07);
	printf("reg_rquant_yclut_1_11: %u\n", (reg_value >> 28) & 0x07);
}
 
void print_rquant_lut_4(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
// 注意：LUT_4的高16位是保留的，所以我们只打印低16位中的量化值
	printf("RQUANT_LUT_4:\n");
	printf("reg_rquant_yclut_1_0: %u\n", (reg_value >>	0) & 0x07);
	printf("reg_rquant_yclut_1_1: %u\n", (reg_value >>	4) & 0x07);
	printf("reg_rquant_yclut_1_2: %u\n", (reg_value >>	8) & 0x07);
	printf("reg_rquant_yclut_1_3: %u\n", (reg_value >> 12) & 0x07);
}

// 解析VFCE_AFRCE_CORE_PIXEL_TYPE寄存器
void parse_vfce_afrce_core_pixel_type(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	unsigned int reg_pixel_type_0 = (reg_value >> 12) & 0x0F;
	unsigned int reg_pixel_type_1 = (reg_value >>  8) & 0x0F;
	unsigned int reg_pixel_type_2 = (reg_value >>  4) & 0x0F;
	unsigned int reg_pixel_type_3 = (reg_value >>  0) & 0x0F;
 
	printf("VFCE_AFRCE_CORE_PIXEL_TYPE:\n");
	printf("  reg_pixel_type_0: %u\n", reg_pixel_type_0);
	printf("  reg_pixel_type_1: %u\n", reg_pixel_type_1);
	printf("  reg_pixel_type_2: %u\n", reg_pixel_type_2);
	printf("  reg_pixel_type_3: %u\n", reg_pixel_type_3);
}
 
// 解析VFCE_AFRCE_CORE_PIXEL_DEPTH寄存器
void parse_vfce_afrce_core_pixel_depth(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	unsigned int reg_input_bit_depth_0 = (reg_value >> 12) & 0x0F;
	unsigned int reg_input_bit_depth_1 = (reg_value >>	8) & 0x0F;
	unsigned int reg_input_bit_depth_2 = (reg_value >>	4) & 0x0F;
	unsigned int reg_input_bit_depth_3 = (reg_value >>	0) & 0x0F;
 
	printf("VFCE_AFRCE_CORE_PIXEL_DEPTH:\n");
	printf("  reg_input_bit_depth_0: %u\n", reg_input_bit_depth_0);
	printf("  reg_input_bit_depth_1: %u\n", reg_input_bit_depth_1);
	printf("  reg_input_bit_depth_2: %u\n", reg_input_bit_depth_2);
	printf("  reg_input_bit_depth_3: %u\n", reg_input_bit_depth_3);
}
 
// 解析VFCE_AFRCE_CORE_TARGET_SIZE寄存器
void parse_vfce_afrce_core_target_size(unsigned int reg_value) {
	 printf("value = 0x%x\n", reg_value);
	unsigned int reg_comp_target_byte_0 = (reg_value >> 24) & 0xFF;
	unsigned int reg_comp_target_byte_1 = (reg_value >> 16) & 0xFF;
	unsigned int reg_comp_target_byte_2 = (reg_value >>  8) & 0xFF;
	unsigned int reg_comp_target_byte_3 = (reg_value >>  0) & 0xFF;
 
	printf("VFCE_AFRCE_CORE_TARGET_SIZE:\n");
	printf("  reg_comp_target_byte_0: %u\n", reg_comp_target_byte_0);
	printf("  reg_comp_target_byte_1: %u\n", reg_comp_target_byte_1);
	printf("  reg_comp_target_byte_2: %u\n", reg_comp_target_byte_2);
	printf("  reg_comp_target_byte_3: %u\n", reg_comp_target_byte_3);
}

// 定义宏来访问寄存器位域
#define REG_RAW_LAST_TH_0_MASK	(0x0F << 28)
#define REG_RAW_LAST_TH_0_SHIFT 28
#define REG_RAW_LAST_TH_1_MASK	(0x0F << 24)
#define REG_RAW_LAST_TH_1_SHIFT 24
#define REG_RAW_LAST_TH_2_MASK	(0x0F << 20)
#define REG_RAW_LAST_TH_2_SHIFT 20
#define REG_RAW_LAST_TH_3_MASK	(0x0F << 16)
#define REG_RAW_LAST_TH_3_SHIFT 16
#define REG_MAX_AC_DEPTH_0_MASK (0x0F << 12)
#define REG_MAX_AC_DEPTH_0_SHIFT 12
#define REG_MAX_AC_DEPTH_1_MASK (0x0F << 8)
#define REG_MAX_AC_DEPTH_1_SHIFT 8
#define REG_MAX_AC_DEPTH_2_MASK (0x0F << 4)
#define REG_MAX_AC_DEPTH_2_SHIFT 4
#define REG_MAX_AC_DEPTH_3_MASK (0x0F)
#define REG_MAX_AC_DEPTH_3_SHIFT 0
 
// 解析VFCE_AFRCE_CORE_LAST_MAX_AC寄存器
void parse_vfce_afrce_core_last_max_ac(unsigned int reg_value) {
	 printf("value = 0x%x\n", reg_value);
	unsigned int reg_raw_last_th_0 = (reg_value & REG_RAW_LAST_TH_0_MASK) >> REG_RAW_LAST_TH_0_SHIFT;
	unsigned int reg_raw_last_th_1 = (reg_value & REG_RAW_LAST_TH_1_MASK) >> REG_RAW_LAST_TH_1_SHIFT;
	unsigned int reg_raw_last_th_2 = (reg_value & REG_RAW_LAST_TH_2_MASK) >> REG_RAW_LAST_TH_2_SHIFT;
	unsigned int reg_raw_last_th_3 = (reg_value & REG_RAW_LAST_TH_3_MASK) >> REG_RAW_LAST_TH_3_SHIFT;
	
	unsigned int reg_max_ac_depth_0 = (reg_value & REG_MAX_AC_DEPTH_0_MASK) >> REG_MAX_AC_DEPTH_0_SHIFT;
	unsigned int reg_max_ac_depth_1 = (reg_value & REG_MAX_AC_DEPTH_1_MASK) >> REG_MAX_AC_DEPTH_1_SHIFT;
	unsigned int reg_max_ac_depth_2 = (reg_value & REG_MAX_AC_DEPTH_2_MASK) >> REG_MAX_AC_DEPTH_2_SHIFT;
	unsigned int reg_max_ac_depth_3 = (reg_value & REG_MAX_AC_DEPTH_3_MASK) >> REG_MAX_AC_DEPTH_3_SHIFT;
	
	printf("VFCE_AFRCE_CORE_LAST_MAX_AC:\n");
	printf("  reg_raw_last_th_0: %u\n", reg_raw_last_th_0);
	printf("  reg_raw_last_th_1: %u\n", reg_raw_last_th_1);
	printf("  reg_raw_last_th_2: %u\n", reg_raw_last_th_2);
	printf("  reg_raw_last_th_3: %u\n", reg_raw_last_th_3);
	printf("  reg_max_ac_depth_0: %u\n", reg_max_ac_depth_0);
	printf("  reg_max_ac_depth_1: %u\n", reg_max_ac_depth_1);
	printf("  reg_max_ac_depth_2: %u\n", reg_max_ac_depth_2);
	printf("  reg_max_ac_depth_3: %u\n", reg_max_ac_depth_3);
}

void parse_vfce_afrce_core_header_ctrl(unsigned int reg_value) {
	// 提取各个位域的值
	printf("value = 0x%x\n", reg_value);
	unsigned int reg_comp_raw_mode_en_0 = (reg_value >> 19) & 0x1;
	unsigned int reg_comp_raw_mode_en_1 = (reg_value >> 18) & 0x1;
	unsigned int reg_comp_raw_mode_en_2 = (reg_value >> 17) & 0x1;
	unsigned int reg_comp_raw_mode_en_3 = (reg_value >> 16) & 0x1;
 
	unsigned int reg_comp_force_raw_mode_en_0 = (reg_value >> 15) & 0x1;
	unsigned int reg_comp_force_raw_mode_en_1 = (reg_value >> 14) & 0x1;
	unsigned int reg_comp_force_raw_mode_en_2 = (reg_value >> 13) & 0x1;
	unsigned int reg_comp_force_raw_mode_en_3 = (reg_value >> 12) & 0x1;
 
	unsigned int reg_bitstream_pack_mode_0 = (reg_value >> 11) & 0x1;
	unsigned int reg_bitstream_pack_mode_1 = (reg_value >> 10) & 0x1;
	unsigned int reg_bitstream_pack_mode_2 = (reg_value >> 9) & 0x1;
	unsigned int reg_bitstream_pack_mode_3 = (reg_value >> 8) & 0x1;
 
	unsigned int reg_header_last_extend_en_0 = (reg_value >> 7) & 0x1;
	unsigned int reg_header_last_extend_en_1 = (reg_value >> 6) & 0x1;
	unsigned int reg_header_last_extend_en_2 = (reg_value >> 5) & 0x1;
	unsigned int reg_header_last_extend_en_3 = (reg_value >> 4) & 0x1;
 
	unsigned int reg_header_mode_0 = (reg_value >> 3) & 0x1;
	unsigned int reg_header_mode_1 = (reg_value >> 2) & 0x1;
	unsigned int reg_header_mode_2 = (reg_value >> 1) & 0x1;
	unsigned int reg_header_mode_3 = reg_value & 0x1;
 
	// 打印字段值
	printf("VFCE_AFRCE_CORE_HEADER_CTRL:\n");
	printf("  reg_comp_raw_mode_en_0: %u\n", reg_comp_raw_mode_en_0);
	printf("  reg_comp_raw_mode_en_1: %u\n", reg_comp_raw_mode_en_1);
	printf("  reg_comp_raw_mode_en_2: %u\n", reg_comp_raw_mode_en_2);
	printf("  reg_comp_raw_mode_en_3: %u\n", reg_comp_raw_mode_en_3);
	printf("  reg_comp_force_raw_mode_en_0: %u\n", reg_comp_force_raw_mode_en_0);
	printf("  reg_comp_force_raw_mode_en_1: %u\n", reg_comp_force_raw_mode_en_1);
	printf("  reg_comp_force_raw_mode_en_2: %u\n", reg_comp_force_raw_mode_en_2);
	printf("  reg_comp_force_raw_mode_en_3: %u\n", reg_comp_force_raw_mode_en_3);
	printf("  reg_bitstream_pack_mode_0: %u\n", reg_bitstream_pack_mode_0);
	printf("  reg_bitstream_pack_mode_1: %u\n", reg_bitstream_pack_mode_1);
	printf("  reg_bitstream_pack_mode_2: %u\n", reg_bitstream_pack_mode_2);
	printf("  reg_bitstream_pack_mode_3: %u\n", reg_bitstream_pack_mode_3);
	printf("  reg_header_last_extend_en_0: %u\n", reg_header_last_extend_en_0);
	printf("  reg_header_last_extend_en_1: %u\n", reg_header_last_extend_en_1);
	printf("  reg_header_last_extend_en_2: %u\n", reg_header_last_extend_en_2);
	printf("  reg_header_last_extend_en_3: %u\n", reg_header_last_extend_en_3);
	printf("  reg_header_mode_0: %u\n", reg_header_mode_0);
	printf("  reg_header_mode_1: %u\n", reg_header_mode_1);
	printf("  reg_header_mode_2: %u\n", reg_header_mode_2);
	printf("  reg_header_mode_3: %u\n", reg_header_mode_3);
}

// 位掩码和位移定义
#define REG_BITSTREAM_PACK_MIN_BYTE_0_MASK 0x3F000000
#define REG_BITSTREAM_PACK_MIN_BYTE_0_SHIFT 24
#define REG_BITSTREAM_PACK_MIN_BYTE_1_MASK 0x003F0000
#define REG_BITSTREAM_PACK_MIN_BYTE_1_SHIFT 16
#define REG_BITSTREAM_PACK_MIN_BYTE_2_MASK 0x00003F00
#define REG_BITSTREAM_PACK_MIN_BYTE_2_SHIFT 8
#define REG_BITSTREAM_PACK_MIN_BYTE_3_MASK 0x0000003F
#define REG_BITSTREAM_PACK_MIN_BYTE_3_SHIFT 0
 
// 解析函数
void parse_vfce_afrce_core_pack_mode_min_byte(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	unsigned int reg_bitstream_pack_min_byte_0 = (reg_value & REG_BITSTREAM_PACK_MIN_BYTE_0_MASK) >> REG_BITSTREAM_PACK_MIN_BYTE_0_SHIFT;
	unsigned int reg_bitstream_pack_min_byte_1 = (reg_value & REG_BITSTREAM_PACK_MIN_BYTE_1_MASK) >> REG_BITSTREAM_PACK_MIN_BYTE_1_SHIFT;
	unsigned int reg_bitstream_pack_min_byte_2 = (reg_value & REG_BITSTREAM_PACK_MIN_BYTE_2_MASK) >> REG_BITSTREAM_PACK_MIN_BYTE_2_SHIFT;
	unsigned int reg_bitstream_pack_min_byte_3 = (reg_value & REG_BITSTREAM_PACK_MIN_BYTE_3_MASK) >> REG_BITSTREAM_PACK_MIN_BYTE_3_SHIFT;
 
	// 打印字段值
	printf("VFCE_AFRCE_CORE_PACK_MODE_MIN_BYTE:\n");
	printf("  reg_bitstream_pack_min_byte_0: %u\n", reg_bitstream_pack_min_byte_0);
	printf("  reg_bitstream_pack_min_byte_1: %u\n", reg_bitstream_pack_min_byte_1);
	printf("  reg_bitstream_pack_min_byte_2: %u\n", reg_bitstream_pack_min_byte_2);
	printf("  reg_bitstream_pack_min_byte_3: %u\n", reg_bitstream_pack_min_byte_3);
}

// 位掩码和位移定义
#define REG_DICT_ERROR_TH_0_MASK 0xFF000000
#define REG_DICT_ERROR_TH_0_SHIFT 24
#define REG_DICT_ERROR_TH_1_MASK 0x00FF0000
#define REG_DICT_ERROR_TH_1_SHIFT 16
#define REG_DICT_ERROR_TH_2_MASK 0x0000FF00
#define REG_DICT_ERROR_TH_2_SHIFT 8
#define REG_DICT_ERROR_TH_3_MASK 0x000000FF
#define REG_DICT_ERROR_TH_3_SHIFT 0
 
// 解析函数
void parse_vfce_afrce_core_dict_error_th(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	unsigned int reg_dict_error_th_0 = (reg_value & REG_DICT_ERROR_TH_0_MASK) >> REG_DICT_ERROR_TH_0_SHIFT;
	unsigned int reg_dict_error_th_1 = (reg_value & REG_DICT_ERROR_TH_1_MASK) >> REG_DICT_ERROR_TH_1_SHIFT;
	unsigned int reg_dict_error_th_2 = (reg_value & REG_DICT_ERROR_TH_2_MASK) >> REG_DICT_ERROR_TH_2_SHIFT;
	unsigned int reg_dict_error_th_3 = (reg_value & REG_DICT_ERROR_TH_3_MASK) >> REG_DICT_ERROR_TH_3_SHIFT;
 
	// 打印字段值
	printf("VFCE_AFRCE_CORE_DICT_ERROR_TH:\n");
	printf("  reg_dict_error_th_0: %u\n", reg_dict_error_th_0);
	printf("  reg_dict_error_th_1: %u\n", reg_dict_error_th_1);
	printf("  reg_dict_error_th_2: %u\n", reg_dict_error_th_2);
	printf("  reg_dict_error_th_3: %u\n", reg_dict_error_th_3);
}

#define REG_DICT_DIFF_ENTER_TH_0_MASK 0xFF000000
#define REG_DICT_DIFF_ENTER_TH_0_SHIFT 24
#define REG_DICT_DIFF_ENTER_TH_1_MASK 0x00FF0000
#define REG_DICT_DIFF_ENTER_TH_1_SHIFT 16
#define REG_DICT_DIFF_ENTER_TH_2_MASK 0x0000FF00
#define REG_DICT_DIFF_ENTER_TH_2_SHIFT 8
#define REG_DICT_DIFF_ENTER_TH_3_MASK 0x000000FF
#define REG_DICT_DIFF_ENTER_TH_3_SHIFT 0
 
// 解析函数
void parse_vfce_afrce_core_dict_enter_th(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	unsigned int reg_dict_diff_enter_th_0 = (reg_value & REG_DICT_DIFF_ENTER_TH_0_MASK) >> REG_DICT_DIFF_ENTER_TH_0_SHIFT;
	unsigned int reg_dict_diff_enter_th_1 = (reg_value & REG_DICT_DIFF_ENTER_TH_1_MASK) >> REG_DICT_DIFF_ENTER_TH_1_SHIFT;
	unsigned int reg_dict_diff_enter_th_2 = (reg_value & REG_DICT_DIFF_ENTER_TH_2_MASK) >> REG_DICT_DIFF_ENTER_TH_2_SHIFT;
	unsigned int reg_dict_diff_enter_th_3 = (reg_value & REG_DICT_DIFF_ENTER_TH_3_MASK) >> REG_DICT_DIFF_ENTER_TH_3_SHIFT;
 
	// 打印解析出的字段值
	printf("VFCE_AFRCE_CORE_DICT_ENTER_TH:\n");
	printf("  reg_dict_diff_enter_th_0: %u\n", reg_dict_diff_enter_th_0);
	printf("  reg_dict_diff_enter_th_1: %u\n", reg_dict_diff_enter_th_1);
	printf("  reg_dict_diff_enter_th_2: %u\n", reg_dict_diff_enter_th_2);
	printf("  reg_dict_diff_enter_th_3: %u\n", reg_dict_diff_enter_th_3);
}

// 位掩码和位移的定义
#define REG_DICT_BLK_DIFF_CONT_TH_0_MASK 0x1FFF0000
#define REG_DICT_BLK_DIFF_CONT_TH_0_SHIFT 16
#define REG_DICT_BLK_DIFF_CONT_TH_0_BITS 3 // 实际使用的位数，这里应该是从15到13共3位，但由于我们是通过掩码来提取，所以这里不需要直接用到这个值
#define REG_DICT_BLK_DIFF_CONT_TH_1_MASK 0x00007000
#define REG_DICT_BLK_DIFF_CONT_TH_1_SHIFT 12
#define REG_DICT_BLK_DIFF_CONT_TH_2_MASK 0x00000380
#define REG_DICT_BLK_DIFF_CONT_TH_2_SHIFT 7
#define REG_DICT_BLK_DIFF_CONT_TH_3_MASK 0x0000001E
#define REG_DICT_BLK_DIFF_CONT_TH_3_SHIFT 4
#define REG_DICT_EN_0_BIT 3
#define REG_DICT_EN_1_BIT 2
#define REG_DICT_EN_2_BIT 1
#define REG_DICT_EN_3_BIT 0
 
// 由于阈值字段不是简单的整数字段，我们需要定义一个函数来提取它们
uint8_t extract_field(unsigned int reg_value, unsigned int mask, uint8_t shift, uint8_t bits) {
	return (reg_value & mask) >> shift & ((1 << bits) - 1);
}
 
// 解析函数
void parse_vfce_afrce_core_dict_ctrl(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	uint8_t reg_dict_blk_diff_cont_th_0 = extract_field(reg_value, REG_DICT_BLK_DIFF_CONT_TH_0_MASK, REG_DICT_BLK_DIFF_CONT_TH_0_SHIFT, 3);
	uint8_t reg_dict_blk_diff_cont_th_1 = extract_field(reg_value, REG_DICT_BLK_DIFF_CONT_TH_1_MASK, REG_DICT_BLK_DIFF_CONT_TH_1_SHIFT, 3);
	uint8_t reg_dict_blk_diff_cont_th_2 = extract_field(reg_value, REG_DICT_BLK_DIFF_CONT_TH_2_MASK, REG_DICT_BLK_DIFF_CONT_TH_2_SHIFT, 3);
	uint8_t reg_dict_blk_diff_cont_th_3 = extract_field(reg_value, REG_DICT_BLK_DIFF_CONT_TH_3_MASK, REG_DICT_BLK_DIFF_CONT_TH_3_SHIFT, 3);
 
	uint8_t reg_dict_en_0 = (reg_value >> REG_DICT_EN_0_BIT) & 1;
	uint8_t reg_dict_en_1 = (reg_value >> REG_DICT_EN_1_BIT) & 1;
	uint8_t reg_dict_en_2 = (reg_value >> REG_DICT_EN_2_BIT) & 1;
	uint8_t reg_dict_en_3 = (reg_value >> REG_DICT_EN_3_BIT) & 1;
 
	// 打印解析出的字段值
	printf("VFCE_AFRCE_CORE_DICT_CTRL:\n");
	printf("  reg_dict_blk_diff_cont_th_0: %u\n", reg_dict_blk_diff_cont_th_0);
	printf("  reg_dict_blk_diff_cont_th_1: %u\n", reg_dict_blk_diff_cont_th_1);
	printf("  reg_dict_blk_diff_cont_th_2: %u\n", reg_dict_blk_diff_cont_th_2);
	printf("  reg_dict_blk_diff_cont_th_3: %u\n", reg_dict_blk_diff_cont_th_3);
	printf("  reg_dict_en_0: %u\n", reg_dict_en_0);
	printf("  reg_dict_en_1: %u\n", reg_dict_en_1);
	printf("  reg_dict_en_2: %u\n", reg_dict_en_2);
	printf("  reg_dict_en_3: %u\n", reg_dict_en_3);
}

#define REG_RGB2YUV_EN_MASK 	   (1 << 26)
#define REG_PIXEL_IS_DIFF_CHN_MASK (1 << 25)
#define REG_INPUT_IS_RGBA_MASK	   (1 << 24)
#define REG_INPUT_FORMAT_MODE_MASK (0x7 << 20)
#define REG_INPUT_FORMAT_MODE_SHIFT 20
#define REG_PIXEL_FORMAT_MASK	   (0xF << 16)
#define REG_PIXEL_FORMAT_SHIFT	   16
#define REG_INPUT_YUV_FORMAT_MASK  (0x3 << 12)
#define REG_INPUT_YUV_FORMAT_SHIFT 12
#define REG_INPUT_BAYER_MODE_MASK  (0x3 << 8)
#define REG_INPUT_BAYER_MODE_SHIFT 8
#define REG_BAYER_Y_OFST_MASK	   (0x3 << 6)
#define REG_BAYER_Y_OFST_SHIFT	   6
#define REG_BAYER_X_OFST_MASK	   (0x3 << 4)
#define REG_BAYER_X_OFST_SHIFT	   4
#define REG_BLOCK_MODE_MASK 	   (0x7)

void parse_vfce_afrce_input_ctrl(unsigned int reg_value) {
	printf("value = 0x%x\n", reg_value);
	bool reg_rgb2yuv_en = (reg_value & REG_RGB2YUV_EN_MASK) != 0;
	bool reg_pixel_is_diff_chn = (reg_value & REG_PIXEL_IS_DIFF_CHN_MASK) != 0;
	bool reg_input_is_rgba = (reg_value & REG_INPUT_IS_RGBA_MASK) != 0;
	unsigned int reg_input_format_mode = (reg_value & REG_INPUT_FORMAT_MODE_MASK) >> REG_INPUT_FORMAT_MODE_SHIFT;
	unsigned int reg_pixel_format = (reg_value & REG_PIXEL_FORMAT_MASK) >> REG_PIXEL_FORMAT_SHIFT;
	unsigned int reg_input_yuv_format = (reg_value & REG_INPUT_YUV_FORMAT_MASK) >> REG_INPUT_YUV_FORMAT_SHIFT;
	unsigned int reg_input_bayer_mode = (reg_value & REG_INPUT_BAYER_MODE_MASK) >> REG_INPUT_BAYER_MODE_SHIFT;
	unsigned int reg_bayer_y_ofst = (reg_value & REG_BAYER_Y_OFST_MASK) >> REG_BAYER_Y_OFST_SHIFT;
	unsigned int reg_bayer_x_ofst = (reg_value & REG_BAYER_X_OFST_MASK) >> REG_BAYER_X_OFST_SHIFT;
	unsigned int reg_block_mode = reg_value & REG_BLOCK_MODE_MASK;
 
	// 打印解析出的字段值
	printf("VFCE_AFRCE_INPUT_CTRL Register Fields:\n");
	printf("  reg_rgb2yuv_en: %s\n", reg_rgb2yuv_en ? "enabled" : "disabled");
	printf("  reg_pixel_is_diff_chn: %s\n", reg_pixel_is_diff_chn ? "disabled lvl 2 dct" : "enabled lvl 2 dct");
	printf("  reg_input_is_rgba: %s\n", reg_input_is_rgba ? "rgba header" : "yuv header");
	printf("  reg_input_format_mode: %u\n", reg_input_format_mode); // 0:rgb, 1:yuv, 2:bayer
	printf("  reg_pixel_format: %u\n", reg_pixel_format); // 0:R, 1:RG, 2:RGB, 3:RGBA, 4:Y/U/V, 5:Y_UV, etc.
	printf("  reg_input_yuv_format: %u\n", reg_input_yuv_format); // 0:YUV444, 1:YUV422, 2:YUV420
	printf("  reg_input_bayer_mode: %u\n", reg_input_bayer_mode); // 0:mono, 1:bayer2x2, 2:bayer4x4
	printf("  reg_bayer_y_ofst: %u\n", reg_bayer_y_ofst); // threshold of value diff to calculate block num
	printf("  reg_bayer_x_ofst: %u\n", reg_bayer_x_ofst); // threshold of block num which value diff > th
	printf("  reg_block_mode: %u\n", reg_block_mode);
}

#define MAX_LINES 1000 // 假设文件最多有1000行，根据实际情况调整
#define HEX_STRING_LENGTH 13

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	const char *filename = "input.txt"; // 文件名
	FILE *file = fopen(filename, "r");
	if (!file) {
		perror("Failed to open file");
		return EXIT_FAILURE;
	}
 
	uint32_t input[MAX_LINES];
	int line_count = 0;
 
	char hex_string[HEX_STRING_LENGTH];
	while (fgets(hex_string, sizeof(hex_string), file) != NULL && line_count < MAX_LINES) {
		// 去除行尾的换行符
		hex_string[strcspn(hex_string, "\n")] = 0;
 
		// 将16进制字符串转换为无符号32位整数
		char *endptr;
		errno = 0; // 重置errno以检查转换是否成功
		uint32_t value = strtoul(hex_string, &endptr, 16);
 
		// 检查转换是否成功
		if (errno == ERANGE  || value > UINT32_MAX) {
			fprintf(stderr, "Invalid hex number: %s\n", hex_string);
			fclose(file);
			return EXIT_FAILURE;
		}
 
		// 存储转换后的值
		input[line_count++] = value;
	}
 
	// 关闭文件
	fclose(file);
 
	// 打印数组中的值（可选，仅用于验证）
	for (int i = 0; i < line_count; i++) {
		printf("input[%d] = 0x%08X\n", i, input[i]);
	}

	i = 0;
	printf("0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_enable_bits(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_mode_bits(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_ctrl_bits(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_VFCE_CHNL0_DIMM_CTRL_bits(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_dummy_data(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_size_in(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_pixel_in_hor_scope(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_pixel_in_ver_scope(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_head1_baddr(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_head0_baddr(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_body1_baddr(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_body0_baddr(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_conv_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_ds_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_head_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_body_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_stat1(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_stat2(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_clr_flag(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_sta0_flag(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_sta1_flag(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_wr_arb_misc(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_afbc_mode_0(input[k++]);
	printf("\n0x%x\n", 0x4200 + i++);
	print_vfce_chnl0_afrc_mode_0(input[k++]);
	i = 0;
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_enable_bits(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_mode_bits(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_ctrl_bits(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_VFCE_CHNL1_DIMM_CTRL_bits(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_dummy_data(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_size_in(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_pixel_in_hor_scope(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_pixel_in_ver_scope(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_head1_baddr(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_head0_baddr(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_body0_baddr(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_body1_baddr(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_conv_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_ds_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_head_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_body_buf_ofst(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_stat1(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_stat2(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_clr_flag(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_sta0_flag(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_sta1_flag(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_wr_arb_misc(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_afbc_mode_0(input[k++]);
	printf("\n0x%x\n", 0x4220 + i++);
	print_vfce_chnl1_afrc_mode_0(input[k++]);
	i = 0;
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_FORMAT(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_MODE_EN(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_DWSCALAR(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_DEFCOLOR_1(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_DEFCOLOR_2(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_QUANT_ENABLE(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_IQUANT_LUT_1(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_IQUANT_LUT_2(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_IQUANT_LUT_3(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	parse_VFCE_AFBCE_IQUANT_LUT_4(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	print_rquant_lut_1(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	print_rquant_lut_2(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	print_rquant_lut_3(input[k++]);
	printf("\n0x%x\n", 0x4240 + i++);
	print_rquant_lut_4(input[k++]);
	i = 0;
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_pixel_type(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_pixel_depth(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_target_size(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_last_max_ac(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_header_ctrl(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_pack_mode_min_byte(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_dict_error_th(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_dict_enter_th(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_core_dict_ctrl(input[k++]);
	printf("\n0x%x\n", 0x4250 + i++);
	parse_vfce_afrce_input_ctrl(input[k++]);
}
