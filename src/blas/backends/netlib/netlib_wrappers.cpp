/*******************************************************************************
* Copyright 2020 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions
* and limitations under the License.
*
*
* SPDX-License-Identifier: Apache-2.0
*******************************************************************************/

#include "blas/function_table.hpp"
#include "oneapi/mkl/blas/detail/netlib/onemkl_blas_netlib.hpp"

#define WRAPPER_VERSION 1

extern "C" ONEMKL_EXPORT blas_function_table_t mkl_blas_table = {
    WRAPPER_VERSION,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::dot,
    oneapi::mkl::netlib::column_major::dot,
    oneapi::mkl::netlib::column_major::dot,
    oneapi::mkl::netlib::column_major::dotc,
    oneapi::mkl::netlib::column_major::dotc,
    oneapi::mkl::netlib::column_major::dotu,
    oneapi::mkl::netlib::column_major::dotu,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotm,
    oneapi::mkl::netlib::column_major::rotm,
    oneapi::mkl::netlib::column_major::rotmg,
    oneapi::mkl::netlib::column_major::rotmg,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::sdsdot,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::ger,
    oneapi::mkl::netlib::column_major::ger,
    oneapi::mkl::netlib::column_major::gerc,
    oneapi::mkl::netlib::column_major::gerc,
    oneapi::mkl::netlib::column_major::geru,
    oneapi::mkl::netlib::column_major::geru,
    oneapi::mkl::netlib::column_major::hbmv,
    oneapi::mkl::netlib::column_major::hbmv,
    oneapi::mkl::netlib::column_major::hemv,
    oneapi::mkl::netlib::column_major::hemv,
    oneapi::mkl::netlib::column_major::her,
    oneapi::mkl::netlib::column_major::her,
    oneapi::mkl::netlib::column_major::her2,
    oneapi::mkl::netlib::column_major::her2,
    oneapi::mkl::netlib::column_major::hpmv,
    oneapi::mkl::netlib::column_major::hpmv,
    oneapi::mkl::netlib::column_major::hpr,
    oneapi::mkl::netlib::column_major::hpr,
    oneapi::mkl::netlib::column_major::hpr2,
    oneapi::mkl::netlib::column_major::hpr2,
    oneapi::mkl::netlib::column_major::sbmv,
    oneapi::mkl::netlib::column_major::sbmv,
    oneapi::mkl::netlib::column_major::spmv,
    oneapi::mkl::netlib::column_major::spmv,
    oneapi::mkl::netlib::column_major::spr,
    oneapi::mkl::netlib::column_major::spr,
    oneapi::mkl::netlib::column_major::spr2,
    oneapi::mkl::netlib::column_major::spr2,
    oneapi::mkl::netlib::column_major::symv,
    oneapi::mkl::netlib::column_major::symv,
    oneapi::mkl::netlib::column_major::syr,
    oneapi::mkl::netlib::column_major::syr,
    oneapi::mkl::netlib::column_major::syr2,
    oneapi::mkl::netlib::column_major::syr2,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::hemm,
    oneapi::mkl::netlib::column_major::hemm,
    oneapi::mkl::netlib::column_major::herk,
    oneapi::mkl::netlib::column_major::herk,
    oneapi::mkl::netlib::column_major::her2k,
    oneapi::mkl::netlib::column_major::her2k,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::trsm_batch,
    oneapi::mkl::netlib::column_major::trsm_batch,
    oneapi::mkl::netlib::column_major::trsm_batch,
    oneapi::mkl::netlib::column_major::trsm_batch,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::column_major::gemm_bias,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::asum,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::axpy,
    oneapi::mkl::netlib::column_major::axpy_batch,
    oneapi::mkl::netlib::column_major::axpy_batch,
    oneapi::mkl::netlib::column_major::axpy_batch,
    oneapi::mkl::netlib::column_major::axpy_batch,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::copy,
    oneapi::mkl::netlib::column_major::dot,
    oneapi::mkl::netlib::column_major::dot,
    oneapi::mkl::netlib::column_major::dot,
    oneapi::mkl::netlib::column_major::dotc,
    oneapi::mkl::netlib::column_major::dotc,
    oneapi::mkl::netlib::column_major::dotu,
    oneapi::mkl::netlib::column_major::dotu,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamin,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::iamax,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::nrm2,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rot,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotg,
    oneapi::mkl::netlib::column_major::rotm,
    oneapi::mkl::netlib::column_major::rotm,
    oneapi::mkl::netlib::column_major::rotmg,
    oneapi::mkl::netlib::column_major::rotmg,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::scal,
    oneapi::mkl::netlib::column_major::sdsdot,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::swap,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gbmv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::gemv,
    oneapi::mkl::netlib::column_major::ger,
    oneapi::mkl::netlib::column_major::ger,
    oneapi::mkl::netlib::column_major::gerc,
    oneapi::mkl::netlib::column_major::gerc,
    oneapi::mkl::netlib::column_major::geru,
    oneapi::mkl::netlib::column_major::geru,
    oneapi::mkl::netlib::column_major::hbmv,
    oneapi::mkl::netlib::column_major::hbmv,
    oneapi::mkl::netlib::column_major::hemv,
    oneapi::mkl::netlib::column_major::hemv,
    oneapi::mkl::netlib::column_major::her,
    oneapi::mkl::netlib::column_major::her,
    oneapi::mkl::netlib::column_major::her2,
    oneapi::mkl::netlib::column_major::her2,
    oneapi::mkl::netlib::column_major::hpmv,
    oneapi::mkl::netlib::column_major::hpmv,
    oneapi::mkl::netlib::column_major::hpr,
    oneapi::mkl::netlib::column_major::hpr,
    oneapi::mkl::netlib::column_major::hpr2,
    oneapi::mkl::netlib::column_major::hpr2,
    oneapi::mkl::netlib::column_major::sbmv,
    oneapi::mkl::netlib::column_major::sbmv,
    oneapi::mkl::netlib::column_major::spmv,
    oneapi::mkl::netlib::column_major::spmv,
    oneapi::mkl::netlib::column_major::spr,
    oneapi::mkl::netlib::column_major::spr,
    oneapi::mkl::netlib::column_major::spr2,
    oneapi::mkl::netlib::column_major::spr2,
    oneapi::mkl::netlib::column_major::symv,
    oneapi::mkl::netlib::column_major::symv,
    oneapi::mkl::netlib::column_major::syr,
    oneapi::mkl::netlib::column_major::syr,
    oneapi::mkl::netlib::column_major::syr2,
    oneapi::mkl::netlib::column_major::syr2,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbmv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tbsv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpmv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::tpsv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trmv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::trsv,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::gemm,
    oneapi::mkl::netlib::column_major::hemm,
    oneapi::mkl::netlib::column_major::hemm,
    oneapi::mkl::netlib::column_major::herk,
    oneapi::mkl::netlib::column_major::herk,
    oneapi::mkl::netlib::column_major::her2k,
    oneapi::mkl::netlib::column_major::her2k,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::symm,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syrk,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::syr2k,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trmm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::trsm,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemm_batch,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::column_major::gemmt,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::dot,
    oneapi::mkl::netlib::row_major::dot,
    oneapi::mkl::netlib::row_major::dot,
    oneapi::mkl::netlib::row_major::dotc,
    oneapi::mkl::netlib::row_major::dotc,
    oneapi::mkl::netlib::row_major::dotu,
    oneapi::mkl::netlib::row_major::dotu,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotm,
    oneapi::mkl::netlib::row_major::rotm,
    oneapi::mkl::netlib::row_major::rotmg,
    oneapi::mkl::netlib::row_major::rotmg,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::sdsdot,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::ger,
    oneapi::mkl::netlib::row_major::ger,
    oneapi::mkl::netlib::row_major::gerc,
    oneapi::mkl::netlib::row_major::gerc,
    oneapi::mkl::netlib::row_major::geru,
    oneapi::mkl::netlib::row_major::geru,
    oneapi::mkl::netlib::row_major::hbmv,
    oneapi::mkl::netlib::row_major::hbmv,
    oneapi::mkl::netlib::row_major::hemv,
    oneapi::mkl::netlib::row_major::hemv,
    oneapi::mkl::netlib::row_major::her,
    oneapi::mkl::netlib::row_major::her,
    oneapi::mkl::netlib::row_major::her2,
    oneapi::mkl::netlib::row_major::her2,
    oneapi::mkl::netlib::row_major::hpmv,
    oneapi::mkl::netlib::row_major::hpmv,
    oneapi::mkl::netlib::row_major::hpr,
    oneapi::mkl::netlib::row_major::hpr,
    oneapi::mkl::netlib::row_major::hpr2,
    oneapi::mkl::netlib::row_major::hpr2,
    oneapi::mkl::netlib::row_major::sbmv,
    oneapi::mkl::netlib::row_major::sbmv,
    oneapi::mkl::netlib::row_major::spmv,
    oneapi::mkl::netlib::row_major::spmv,
    oneapi::mkl::netlib::row_major::spr,
    oneapi::mkl::netlib::row_major::spr,
    oneapi::mkl::netlib::row_major::spr2,
    oneapi::mkl::netlib::row_major::spr2,
    oneapi::mkl::netlib::row_major::symv,
    oneapi::mkl::netlib::row_major::symv,
    oneapi::mkl::netlib::row_major::syr,
    oneapi::mkl::netlib::row_major::syr,
    oneapi::mkl::netlib::row_major::syr2,
    oneapi::mkl::netlib::row_major::syr2,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::hemm,
    oneapi::mkl::netlib::row_major::hemm,
    oneapi::mkl::netlib::row_major::herk,
    oneapi::mkl::netlib::row_major::herk,
    oneapi::mkl::netlib::row_major::her2k,
    oneapi::mkl::netlib::row_major::her2k,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::trsm_batch,
    oneapi::mkl::netlib::row_major::trsm_batch,
    oneapi::mkl::netlib::row_major::trsm_batch,
    oneapi::mkl::netlib::row_major::trsm_batch,
    oneapi::mkl::netlib::row_major::gemmt,
    oneapi::mkl::netlib::row_major::gemmt,
    oneapi::mkl::netlib::row_major::gemmt,
    oneapi::mkl::netlib::row_major::gemmt,
    oneapi::mkl::netlib::row_major::gemm_bias,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::asum,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::axpy,
    oneapi::mkl::netlib::row_major::axpy_batch,
    oneapi::mkl::netlib::row_major::axpy_batch,
    oneapi::mkl::netlib::row_major::axpy_batch,
    oneapi::mkl::netlib::row_major::axpy_batch,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::copy,
    oneapi::mkl::netlib::row_major::dot,
    oneapi::mkl::netlib::row_major::dot,
    oneapi::mkl::netlib::row_major::dot,
    oneapi::mkl::netlib::row_major::dotc,
    oneapi::mkl::netlib::row_major::dotc,
    oneapi::mkl::netlib::row_major::dotu,
    oneapi::mkl::netlib::row_major::dotu,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamin,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::iamax,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::nrm2,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rot,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotg,
    oneapi::mkl::netlib::row_major::rotm,
    oneapi::mkl::netlib::row_major::rotm,
    oneapi::mkl::netlib::row_major::rotmg,
    oneapi::mkl::netlib::row_major::rotmg,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::scal,
    oneapi::mkl::netlib::row_major::sdsdot,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::swap,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gbmv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::gemv,
    oneapi::mkl::netlib::row_major::ger,
    oneapi::mkl::netlib::row_major::ger,
    oneapi::mkl::netlib::row_major::gerc,
    oneapi::mkl::netlib::row_major::gerc,
    oneapi::mkl::netlib::row_major::geru,
    oneapi::mkl::netlib::row_major::geru,
    oneapi::mkl::netlib::row_major::hbmv,
    oneapi::mkl::netlib::row_major::hbmv,
    oneapi::mkl::netlib::row_major::hemv,
    oneapi::mkl::netlib::row_major::hemv,
    oneapi::mkl::netlib::row_major::her,
    oneapi::mkl::netlib::row_major::her,
    oneapi::mkl::netlib::row_major::her2,
    oneapi::mkl::netlib::row_major::her2,
    oneapi::mkl::netlib::row_major::hpmv,
    oneapi::mkl::netlib::row_major::hpmv,
    oneapi::mkl::netlib::row_major::hpr,
    oneapi::mkl::netlib::row_major::hpr,
    oneapi::mkl::netlib::row_major::hpr2,
    oneapi::mkl::netlib::row_major::hpr2,
    oneapi::mkl::netlib::row_major::sbmv,
    oneapi::mkl::netlib::row_major::sbmv,
    oneapi::mkl::netlib::row_major::spmv,
    oneapi::mkl::netlib::row_major::spmv,
    oneapi::mkl::netlib::row_major::spr,
    oneapi::mkl::netlib::row_major::spr,
    oneapi::mkl::netlib::row_major::spr2,
    oneapi::mkl::netlib::row_major::spr2,
    oneapi::mkl::netlib::row_major::symv,
    oneapi::mkl::netlib::row_major::symv,
    oneapi::mkl::netlib::row_major::syr,
    oneapi::mkl::netlib::row_major::syr,
    oneapi::mkl::netlib::row_major::syr2,
    oneapi::mkl::netlib::row_major::syr2,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbmv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tbsv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpmv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::tpsv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trmv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::trsv,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::gemm,
    oneapi::mkl::netlib::row_major::hemm,
    oneapi::mkl::netlib::row_major::hemm,
    oneapi::mkl::netlib::row_major::herk,
    oneapi::mkl::netlib::row_major::herk,
    oneapi::mkl::netlib::row_major::her2k,
    oneapi::mkl::netlib::row_major::her2k,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::symm,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syrk,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::syr2k,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trmm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::trsm,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemm_batch,
    oneapi::mkl::netlib::row_major::gemmt,
    oneapi::mkl::netlib::row_major::gemmt,
    oneapi::mkl::netlib::row_major::gemmt,
    oneapi::mkl::netlib::row_major::gemmt,
};
