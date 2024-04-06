static const FFInputFormat * const demuxer_list[] = {
    &ff_aa_demuxer,
    &ff_aac_demuxer,
    &ff_aax_demuxer,
    &ff_ac3_demuxer,
    &ff_ac4_demuxer,
    &ff_ace_demuxer,
    &ff_acm_demuxer,
    &ff_act_demuxer,
    &ff_adf_demuxer,
    &ff_adp_demuxer,
    &ff_ads_demuxer,
    &ff_adx_demuxer,
    &ff_aea_demuxer,
    &ff_afc_demuxer,
    &ff_aiff_demuxer,
    &ff_aix_demuxer,
    &ff_alp_demuxer,
    &ff_amr_demuxer,
    &ff_amrnb_demuxer,
    &ff_amrwb_demuxer,
    &ff_anm_demuxer,
    &ff_apac_demuxer,
    &ff_apc_demuxer,
    &ff_ape_demuxer,
    &ff_apm_demuxer,
    &ff_apng_demuxer,
    &ff_aptx_demuxer,
    &ff_aptx_hd_demuxer,
    &ff_aqtitle_demuxer,
    &ff_argo_asf_demuxer,
    &ff_argo_brp_demuxer,
    &ff_argo_cvg_demuxer,
    &ff_asf_demuxer,
    &ff_asf_o_demuxer,
    &ff_ass_demuxer,
    &ff_ast_demuxer,
    &ff_au_demuxer,
    &ff_av1_demuxer,
    &ff_avi_demuxer,
    &ff_avr_demuxer,
    &ff_avs_demuxer,
    &ff_avs2_demuxer,
    &ff_avs3_demuxer,
    &ff_bethsoftvid_demuxer,
    &ff_bfi_demuxer,
    &ff_bintext_demuxer,
    &ff_bink_demuxer,
    &ff_binka_demuxer,
    &ff_bit_demuxer,
    &ff_bitpacked_demuxer,
    &ff_bmv_demuxer,
    &ff_bfstm_demuxer,
    &ff_brstm_demuxer,
    &ff_boa_demuxer,
    &ff_bonk_demuxer,
    &ff_c93_demuxer,
    &ff_caf_demuxer,
    &ff_cavsvideo_demuxer,
    &ff_cdg_demuxer,
    &ff_cdxl_demuxer,
    &ff_cine_demuxer,
    &ff_codec2_demuxer,
    &ff_codec2raw_demuxer,
    &ff_concat_demuxer,
    &ff_data_demuxer,
    &ff_daud_demuxer,
    &ff_dcstr_demuxer,
    &ff_derf_demuxer,
    &ff_dfa_demuxer,
    &ff_dfpwm_demuxer,
    &ff_dhav_demuxer,
    &ff_dirac_demuxer,
    &ff_dnxhd_demuxer,
    &ff_dsf_demuxer,
    &ff_dsicin_demuxer,
    &ff_dss_demuxer,
    &ff_dts_demuxer,
    &ff_dtshd_demuxer,
    &ff_dv_demuxer,
    &ff_dvbsub_demuxer,
    &ff_dvbtxt_demuxer,
    &ff_dxa_demuxer,
    &ff_ea_demuxer,
    &ff_ea_cdata_demuxer,
    &ff_eac3_demuxer,
    &ff_epaf_demuxer,
    &ff_evc_demuxer,
    &ff_ffmetadata_demuxer,
    &ff_filmstrip_demuxer,
    &ff_fits_demuxer,
    &ff_flac_demuxer,
    &ff_flic_demuxer,
    &ff_flv_demuxer,
    &ff_live_flv_demuxer,
    &ff_fourxm_demuxer,
    &ff_frm_demuxer,
    &ff_fsb_demuxer,
    &ff_fwse_demuxer,
    &ff_g722_demuxer,
    &ff_g723_1_demuxer,
    &ff_g726_demuxer,
    &ff_g726le_demuxer,
    &ff_g729_demuxer,
    &ff_gdv_demuxer,
    &ff_genh_demuxer,
    &ff_gif_demuxer,
    &ff_gsm_demuxer,
    &ff_gxf_demuxer,
    &ff_h261_demuxer,
    &ff_h263_demuxer,
    &ff_h264_demuxer,
    &ff_hca_demuxer,
    &ff_hcom_demuxer,
    &ff_hevc_demuxer,
    &ff_hls_demuxer,
    &ff_hnm_demuxer,
    &ff_iamf_demuxer,
    &ff_ico_demuxer,
    &ff_idcin_demuxer,
    &ff_idf_demuxer,
    &ff_iff_demuxer,
    &ff_ifv_demuxer,
    &ff_ilbc_demuxer,
    &ff_image2_demuxer,
    &ff_image2pipe_demuxer,
    &ff_image2_alias_pix_demuxer,
    &ff_image2_brender_pix_demuxer,
    &ff_ingenient_demuxer,
    &ff_ipmovie_demuxer,
    &ff_ipu_demuxer,
    &ff_ircam_demuxer,
    &ff_iss_demuxer,
    &ff_iv8_demuxer,
    &ff_ivf_demuxer,
    &ff_ivr_demuxer,
    &ff_jacosub_demuxer,
    &ff_jv_demuxer,
    &ff_jpegxl_anim_demuxer,
    &ff_kux_demuxer,
    &ff_kvag_demuxer,
    &ff_laf_demuxer,
    &ff_lmlm4_demuxer,
    &ff_loas_demuxer,
    &ff_luodat_demuxer,
    &ff_lrc_demuxer,
    &ff_lvf_demuxer,
    &ff_lxf_demuxer,
    &ff_m4v_demuxer,
    &ff_mca_demuxer,
    &ff_mcc_demuxer,
    &ff_matroska_demuxer,
    &ff_mgsts_demuxer,
    &ff_microdvd_demuxer,
    &ff_mjpeg_demuxer,
    &ff_mjpeg_2000_demuxer,
    &ff_mlp_demuxer,
    &ff_mlv_demuxer,
    &ff_mm_demuxer,
    &ff_mmf_demuxer,
    &ff_mods_demuxer,
    &ff_moflex_demuxer,
    &ff_mov_demuxer,
    &ff_mp3_demuxer,
    &ff_mpc_demuxer,
    &ff_mpc8_demuxer,
    &ff_mpegps_demuxer,
    &ff_mpegts_demuxer,
    &ff_mpegtsraw_demuxer,
    &ff_mpegvideo_demuxer,
    &ff_mpjpeg_demuxer,
    &ff_mpl2_demuxer,
    &ff_mpsub_demuxer,
    &ff_msf_demuxer,
    &ff_msnwc_tcp_demuxer,
    &ff_msp_demuxer,
    &ff_mtaf_demuxer,
    &ff_mtv_demuxer,
    &ff_musx_demuxer,
    &ff_mv_demuxer,
    &ff_mvi_demuxer,
    &ff_mxf_demuxer,
    &ff_mxg_demuxer,
    &ff_nc_demuxer,
    &ff_nistsphere_demuxer,
    &ff_nsp_demuxer,
    &ff_nsv_demuxer,
    &ff_nut_demuxer,
    &ff_nuv_demuxer,
    &ff_obu_demuxer,
    &ff_ogg_demuxer,
    &ff_oma_demuxer,
    &ff_osq_demuxer,
    &ff_paf_demuxer,
    &ff_pcm_alaw_demuxer,
    &ff_pcm_mulaw_demuxer,
    &ff_pcm_vidc_demuxer,
    &ff_pcm_f64be_demuxer,
    &ff_pcm_f64le_demuxer,
    &ff_pcm_f32be_demuxer,
    &ff_pcm_f32le_demuxer,
    &ff_pcm_s32be_demuxer,
    &ff_pcm_s32le_demuxer,
    &ff_pcm_s24be_demuxer,
    &ff_pcm_s24le_demuxer,
    &ff_pcm_s16be_demuxer,
    &ff_pcm_s16le_demuxer,
    &ff_pcm_s8_demuxer,
    &ff_pcm_u32be_demuxer,
    &ff_pcm_u32le_demuxer,
    &ff_pcm_u24be_demuxer,
    &ff_pcm_u24le_demuxer,
    &ff_pcm_u16be_demuxer,
    &ff_pcm_u16le_demuxer,
    &ff_pcm_u8_demuxer,
    &ff_pdv_demuxer,
    &ff_pjs_demuxer,
    &ff_pmp_demuxer,
    &ff_pp_bnk_demuxer,
    &ff_pva_demuxer,
    &ff_pvf_demuxer,
    &ff_qcp_demuxer,
    &ff_qoa_demuxer,
    &ff_r3d_demuxer,
    &ff_rawvideo_demuxer,
    &ff_realtext_demuxer,
    &ff_redspark_demuxer,
    &ff_rka_demuxer,
    &ff_rl2_demuxer,
    &ff_rm_demuxer,
    &ff_roq_demuxer,
    &ff_rpl_demuxer,
    &ff_rsd_demuxer,
    &ff_rso_demuxer,
    &ff_rtp_demuxer,
    &ff_rtsp_demuxer,
    &ff_s337m_demuxer,
    &ff_sami_demuxer,
    &ff_sap_demuxer,
    &ff_sbc_demuxer,
    &ff_sbg_demuxer,
    &ff_scc_demuxer,
    &ff_scd_demuxer,
    &ff_sdns_demuxer,
    &ff_sdp_demuxer,
    &ff_sdr2_demuxer,
    &ff_sds_demuxer,
    &ff_sdx_demuxer,
    &ff_segafilm_demuxer,
    &ff_ser_demuxer,
    &ff_sga_demuxer,
    &ff_shorten_demuxer,
    &ff_siff_demuxer,
    &ff_simbiosis_imx_demuxer,
    &ff_sln_demuxer,
    &ff_smacker_demuxer,
    &ff_smjpeg_demuxer,
    &ff_smush_demuxer,
    &ff_sol_demuxer,
    &ff_sox_demuxer,
    &ff_spdif_demuxer,
    &ff_srt_demuxer,
    &ff_str_demuxer,
    &ff_stl_demuxer,
    &ff_subviewer1_demuxer,
    &ff_subviewer_demuxer,
    &ff_sup_demuxer,
    &ff_svag_demuxer,
    &ff_svs_demuxer,
    &ff_swf_demuxer,
    &ff_tak_demuxer,
    &ff_tedcaptions_demuxer,
    &ff_thp_demuxer,
    &ff_threedostr_demuxer,
    &ff_tiertexseq_demuxer,
    &ff_tmv_demuxer,
    &ff_truehd_demuxer,
    &ff_tta_demuxer,
    &ff_txd_demuxer,
    &ff_tty_demuxer,
    &ff_ty_demuxer,
    &ff_usm_demuxer,
    &ff_v210_demuxer,
    &ff_v210x_demuxer,
    &ff_vag_demuxer,
    &ff_vc1_demuxer,
    &ff_vc1t_demuxer,
    &ff_vividas_demuxer,
    &ff_vivo_demuxer,
    &ff_vmd_demuxer,
    &ff_vobsub_demuxer,
    &ff_voc_demuxer,
    &ff_vpk_demuxer,
    &ff_vplayer_demuxer,
    &ff_vqf_demuxer,
    &ff_vvc_demuxer,
    &ff_w64_demuxer,
    &ff_wady_demuxer,
    &ff_wavarc_demuxer,
    &ff_wav_demuxer,
    &ff_wc3_demuxer,
    &ff_webm_dash_manifest_demuxer,
    &ff_webvtt_demuxer,
    &ff_wsaud_demuxer,
    &ff_wsd_demuxer,
    &ff_wsvqa_demuxer,
    &ff_wtv_demuxer,
    &ff_wve_demuxer,
    &ff_wv_demuxer,
    &ff_xa_demuxer,
    &ff_xbin_demuxer,
    &ff_xmd_demuxer,
    &ff_xmv_demuxer,
    &ff_xvag_demuxer,
    &ff_xwma_demuxer,
    &ff_yop_demuxer,
    &ff_yuv4mpegpipe_demuxer,
    &ff_image_bmp_pipe_demuxer,
    &ff_image_cri_pipe_demuxer,
    &ff_image_dds_pipe_demuxer,
    &ff_image_dpx_pipe_demuxer,
    &ff_image_exr_pipe_demuxer,
    &ff_image_gem_pipe_demuxer,
    &ff_image_gif_pipe_demuxer,
    &ff_image_hdr_pipe_demuxer,
    &ff_image_j2k_pipe_demuxer,
    &ff_image_jpeg_pipe_demuxer,
    &ff_image_jpegls_pipe_demuxer,
    &ff_image_jpegxl_pipe_demuxer,
    &ff_image_pam_pipe_demuxer,
    &ff_image_pbm_pipe_demuxer,
    &ff_image_pcx_pipe_demuxer,
    &ff_image_pfm_pipe_demuxer,
    &ff_image_pgmyuv_pipe_demuxer,
    &ff_image_pgm_pipe_demuxer,
    &ff_image_pgx_pipe_demuxer,
    &ff_image_phm_pipe_demuxer,
    &ff_image_photocd_pipe_demuxer,
    &ff_image_pictor_pipe_demuxer,
    &ff_image_png_pipe_demuxer,
    &ff_image_ppm_pipe_demuxer,
    &ff_image_psd_pipe_demuxer,
    &ff_image_qdraw_pipe_demuxer,
    &ff_image_qoi_pipe_demuxer,
    &ff_image_sgi_pipe_demuxer,
    &ff_image_svg_pipe_demuxer,
    &ff_image_sunrast_pipe_demuxer,
    &ff_image_tiff_pipe_demuxer,
    &ff_image_vbn_pipe_demuxer,
    &ff_image_webp_pipe_demuxer,
    &ff_image_xbm_pipe_demuxer,
    &ff_image_xpm_pipe_demuxer,
    &ff_image_xwd_pipe_demuxer,
    NULL };
