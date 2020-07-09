/*
 * Souffle - A Datalog Compiler
 * Copyright (c) 2017, The Souffle Developers. All rights reserved.
 * Licensed under the Universal Permissive License v 1.0 as shown at:
 * - https://opensource.org/licenses/UPL
 * - <souffle root>/licenses/SOUFFLE-UPL.txt
 */

/************************************************************************
 *
 * @file AstPragmaChecker.h
 *
 * Defines a transformer that applies pragmas found in parsed input.
 *
 ***********************************************************************/

#pragma once

#include "AstTransformer.h"

namespace souffle {

class AstPragmaChecker : public AstTransformer {
public:
    std::string getName() const override {
        return "AstPragmaChecker";
    }

private:
    bool transform(AstTranslationUnit&) override;
};

}  // end of namespace souffle
