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
/* BINDTOOL_HEADER_FILE(codec2_encode_fb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(10f494f69bfe0e3bbfa8ab781746f8f0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lilacsat/codec2_encode_fb.h>
// pydoc.h is automatically generated in the build directory
#include <codec2_encode_fb_pydoc.h>

void bind_codec2_encode_fb(py::module& m)
{

    using codec2_encode_fb    = ::gr::lilacsat::codec2_encode_fb;


    py::class_<codec2_encode_fb, gr::sync_decimator,
        std::shared_ptr<codec2_encode_fb>>(m, "codec2_encode_fb", D(codec2_encode_fb))

        .def(py::init(&codec2_encode_fb::make),
           py::arg("mode"),
           D(codec2_encode_fb,make)
        )
        



        ;




}








