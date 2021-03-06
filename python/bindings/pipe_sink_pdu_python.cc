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
/* BINDTOOL_HEADER_FILE(pipe_sink_pdu.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(74eb9306c2e63564b8a41563aaf3b9c2)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lilacsat/pipe_sink_pdu.h>
// pydoc.h is automatically generated in the build directory
#include <pipe_sink_pdu_pydoc.h>

void bind_pipe_sink_pdu(py::module& m)
{

    using pipe_sink_pdu    = ::gr::lilacsat::pipe_sink_pdu;


    py::class_<pipe_sink_pdu, gr::block, gr::basic_block,
        std::shared_ptr<pipe_sink_pdu>>(m, "pipe_sink_pdu", D(pipe_sink_pdu))

        .def(py::init(&pipe_sink_pdu::make),
           py::arg("label"),
           py::arg("path"),
           py::arg("permission"),
           py::arg("debug"),
           D(pipe_sink_pdu,make)
        )
        



        ;




}








