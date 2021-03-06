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
/* BINDTOOL_HEADER_FILE(print_to_file_b.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(af7fc693c0ebebc7d5110d300b1afcfc)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lilacsat/print_to_file_b.h>
// pydoc.h is automatically generated in the build directory
#include <print_to_file_b_pydoc.h>

void bind_print_to_file_b(py::module& m)
{

    using print_to_file_b    = ::gr::lilacsat::print_to_file_b;


    py::class_<print_to_file_b, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<print_to_file_b>>(m, "print_to_file_b", D(print_to_file_b))

        .def(py::init(&print_to_file_b::make),
           py::arg("path"),
           py::arg("format"),
           D(print_to_file_b,make)
        )
        



        ;




}








