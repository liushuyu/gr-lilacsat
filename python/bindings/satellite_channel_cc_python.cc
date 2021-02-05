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
/* BINDTOOL_HEADER_FILE(satellite_channel_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b44974420dddd7abe8ca5c977a2b97c1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lilacsat/satellite_channel_cc.h>
// pydoc.h is automatically generated in the build directory
#include <satellite_channel_cc_pydoc.h>

void bind_satellite_channel_cc(py::module& m)
{

    using satellite_channel_cc    = ::gr::lilacsat::satellite_channel_cc;


    py::class_<satellite_channel_cc, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<satellite_channel_cc>>(m, "satellite_channel_cc", D(satellite_channel_cc))

        .def(py::init(&satellite_channel_cc::make),
           py::arg("r_semi_long_axis"),
           py::arg("alpha_aos"),
           py::arg("fc"),
           py::arg("samp_rate"),
           py::arg("d0"),
           py::arg("doppler"),
           py::arg("link_loss"),
           py::arg("verbose"),
           D(satellite_channel_cc,make)
        )
        



        ;




}








