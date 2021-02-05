/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(fec_decode_b.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(1fcc09c69e87dcb4a1128842d1f250c9)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lilacsat/fec_decode_b.h>
// pydoc.h is automatically generated in the build directory
#include <fec_decode_b_pydoc.h>

void bind_fec_decode_b(py::module& m)
{

    using fec_decode_b    = ::gr::lilacsat::fec_decode_b;


    py::class_<fec_decode_b, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<fec_decode_b>>(m, "fec_decode_b", D(fec_decode_b))

        .def(py::init(&fec_decode_b::make),
           py::arg("frame_len"),
           py::arg("using_m"),
           py::arg("using_convolutional_code"),
           py::arg("pass_all"),
           D(fec_decode_b,make)
        )
        



        ;




}








