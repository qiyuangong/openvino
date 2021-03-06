// Copyright (C) 2018-2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <vector>
#include <memory>

#include <ie_api.h>

#include <ngraph/pass/graph_rewrite.hpp>

namespace ngraph {
namespace pass {

    class INFERENCE_ENGINE_API_CLASS(ConvertShapeOf3);

}  // namespace pass
}  // namespace ngraph

class ngraph::pass::ConvertShapeOf3: public ngraph::pass::GraphRewrite {
public:
    ConvertShapeOf3() : GraphRewrite() {
        convert_shapeof3();
    }

private:
    void convert_shapeof3();
};
