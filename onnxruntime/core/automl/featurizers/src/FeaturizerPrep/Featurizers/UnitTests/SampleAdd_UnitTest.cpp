// ----------------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License
// ----------------------------------------------------------------------

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "../SampleAdd.h"

TEST_CASE("Transformer") {
    CHECK(Microsoft::Featurizer::SampleAdd::Transformer(10).transform(20) == 30);
    CHECK(Microsoft::Featurizer::SampleAdd::Transformer(20).transform(1) == 21);
}

TEST_CASE("Estimator") {
    CHECK(Microsoft::Featurizer::SampleAdd::Estimator().fit(10).commit()->transform(20) == 30);
    CHECK(Microsoft::Featurizer::SampleAdd::Estimator().fit(20).commit()->transform(1) == 21);

    CHECK(Microsoft::Featurizer::SampleAdd::Estimator().fit(10).fit(20).commit()->transform(20) == 50);
    CHECK(Microsoft::Featurizer::SampleAdd::Estimator().fit(10).fit(20).fit(30).commit()->transform(20) == 80);
}
