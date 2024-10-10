

#include "huaweicloud/kvs/v1/model/Pre_split_key_options.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Pre_split_key_options::Pre_split_key_options()
{
    rangeSplitPointsIsSet_ = false;
}

Pre_split_key_options::~Pre_split_key_options() = default;

void Pre_split_key_options::validate()
{
}

bool Pre_split_key_options::toBson(Builder &builder) const
{

    if (rangeSplitPointsIsSet_ && !bson_append(builder, "range_split_points", rangeSplitPoints_)) {
        return false;
    }

    return true;
}

bool Pre_split_key_options::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "range_split_points") {
            if (!bson_get(it, rangeSplitPoints_)) {
                return false;
            }
            rangeSplitPointsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::vector<Document>& Pre_split_key_options::getRangeSplitPoints()
{
    return rangeSplitPoints_;
}

void Pre_split_key_options::setRangeSplitPoints(const std::vector<Document>& value)
{
    rangeSplitPoints_ = value;
    rangeSplitPointsIsSet_ = true;
}

bool Pre_split_key_options::rangeSplitPointsIsSet() const
{
    return rangeSplitPointsIsSet_;
}

void Pre_split_key_options::unsetrangeSplitPoints()
{
    rangeSplitPointsIsSet_ = false;
}

}
}
}
}
}


