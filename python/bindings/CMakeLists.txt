# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT lilacsat_sources)
    MESSAGE(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT lilacsat_sources)

########################################################################
# Check for pygccxml
########################################################################
GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND lilacsat_python_files
    afsk1200_rx_f_python.cc
    afsk1200_tx_f_python.cc
    fec_decode_b_python.cc
    fec_encode_b_python.cc
    satellite_channel_cc_python.cc
    bpsk_demod_cb_python.cc
    kiss_decode_pdu_python.cc
    kiss_encode_pdu_python.cc
    vitfilt27_bb_python.cc
    encode27_bb_python.cc
    vitfilt27_fb_python.cc
    angle_cf_python.cc
    pipe_sink_pdu_python.cc
    serial_sink_pdu_python.cc
    plan13_cc_python.cc
    print_to_file_b_python.cc
    codec2_decode_bf_python.cc
    codec2_encode_fb_python.cc
    cc_decode_bb_python.cc
    sync_det_b_python.cc
    lilacsat1_frame_depack_python.cc
    gmsk_demod_python.cc
    dslwp_tm_header_parser_python.cc
    file_sink_pdu_python.cc
    dslwp_tm_parser_python.cc
    two_bit_dpd_precoder_python.cc
    attach_preamble_and_tailer_python.cc
    attach_rs_codeblock_python.cc
    pdu_f32_to_u8_python.cc
    two_bit_dpd_frame_recovery_python.cc
    rs_decode_pdu_python.cc

    python_bindings.cc)

GR_PYBIND_MAKE_OOT(lilacsat 
   ../..
   gr::lilacsat
   "${lilacsat_python_files}")

install(TARGETS lilacsat_python DESTINATION ${GR_PYTHON_DIR}/lilacsat COMPONENT pythonapi)
