/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <pybind11/pybind11.h>

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <numpy/arrayobject.h>

namespace py = pybind11;

// Headers for binding functions
/**************************************/
/* The following comment block is used for
/* gr_modtool to insert function prototypes
/* Please do not delete
/**************************************/
// BINDING_FUNCTION_PROTOTYPES(
    void afsk1200_rx_f(py::module& m);
    void afsk1200_tx_f(py::module& m);
    void fec_decode_b(py::module& m);
    void fec_encode_b(py::module& m);
    void satellite_channel_cc(py::module& m);
    void bpsk_demod_cb(py::module& m);
    void kiss_decode_pdu(py::module& m);
    void kiss_encode_pdu(py::module& m);
    void vitfilt27_bb(py::module& m);
    void encode27_bb(py::module& m);
    void vitfilt27_fb(py::module& m);
    void angle_cf(py::module& m);
    void pipe_sink_pdu(py::module& m);
    void serial_sink_pdu(py::module& m);
    void plan13_cc(py::module& m);
    void print_to_file_b(py::module& m);
    void codec2_decode_bf(py::module& m);
    void codec2_encode_fb(py::module& m);
    void cc_decode_bb(py::module& m);
    void sync_det_b(py::module& m);
    void lilacsat1_frame_depack(py::module& m);
    void gmsk_demod(py::module& m);
    void dslwp_tm_header_parser(py::module& m);
    void file_sink_pdu(py::module& m);
    void dslwp_tm_parser(py::module& m);
    void two_bit_dpd_precoder(py::module& m);
    void attach_preamble_and_tailer(py::module& m);
    void attach_rs_codeblock(py::module& m);
    void pdu_f32_to_u8(py::module& m);
    void two_bit_dpd_frame_recovery(py::module& m);
    void rs_decode_pdu(py::module& m);
// ) END BINDING_FUNCTION_PROTOTYPES


// We need this hack because import_array() returns NULL
// for newer Python versions.
// This function is also necessary because it ensures access to the C API
// and removes a warning.
void* init_numpy()
{
    import_array();
    return NULL;
}

PYBIND11_MODULE(lilacsat_python, m)
{
    // Initialize the numpy C API
    // (otherwise we will see segmentation faults)
    init_numpy();

    // Allow access to base block methods
    py::module::import("gnuradio.gr");

    /**************************************/
    /* The following comment block is used for
    /* gr_modtool to insert binding function calls
    /* Please do not delete
    /**************************************/
    // BINDING_FUNCTION_CALLS(
    afsk1200_rx_f(m);
    afsk1200_tx_f(m);
    fec_decode_b(m);
    fec_encode_b(m);
    satellite_channel_cc(m);
    bpsk_demod_cb(m);
    kiss_decode_pdu(m);
    kiss_encode_pdu(m);
    vitfilt27_bb(m);
    encode27_bb(m);
    vitfilt27_fb(m);
    angle_cf(m);
    pipe_sink_pdu(m);
    serial_sink_pdu(m);
    plan13_cc(m);
    print_to_file_b(m);
    codec2_decode_bf(m);
    codec2_encode_fb(m);
    cc_decode_bb(m);
    sync_det_b(m);
    lilacsat1_frame_depack(m);
    gmsk_demod(m);
    dslwp_tm_header_parser(m);
    file_sink_pdu(m);
    dslwp_tm_parser(m);
    two_bit_dpd_precoder(m);
    attach_preamble_and_tailer(m);
    attach_rs_codeblock(m);
    pdu_f32_to_u8(m);
    two_bit_dpd_frame_recovery(m);
    rs_decode_pdu(m);
    // ) END BINDING_FUNCTION_CALLS
}
