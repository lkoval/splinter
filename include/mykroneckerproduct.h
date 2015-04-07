/*
 * This file is part of the Splinter library.
 * Copyright (C) 2012 Bjarne Grimstad (bjarne.grimstad@gmail.com)
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifndef SPLINTER_MYKRONECKERPRODUCT_H
#define SPLINTER_MYKRONECKERPRODUCT_H

#include "generaldefinitions.h"

namespace Splinter
{

void myKroneckerProduct(const SparseMatrix &A, const SparseMatrix &B, SparseMatrix &AB);

} // namespace Splinter

#endif // SPLINTER_MYKRONECKERPRODUCT_H
