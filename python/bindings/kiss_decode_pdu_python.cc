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
/* BINDTOOL_HEADER_FILE(kiss_decode_pdu.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(ff8d0524debeea955fa678c9b63ac599)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lilacsat/kiss_decode_pdu.h>
// pydoc.h is automatically generated in the build directory
#include <kiss_decode_pdu_pydoc.h>

void bind_kiss_decode_pdu(py::module& m)
{

    using kiss_decode_pdu    = ::gr::lilacsat::kiss_decode_pdu;


    py::class_<kiss_decode_pdu, gr::block, gr::basic_block,
        std::shared_ptr<kiss_decode_pdu>>(m, "kiss_decode_pdu", D(kiss_decode_pdu))

        .def(py::init(&kiss_decode_pdu::make),
           D(kiss_decode_pdu,make)
        )
        



        ;




}








