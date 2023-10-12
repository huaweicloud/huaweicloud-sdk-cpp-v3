

#include "huaweicloud/kvs/v1/model/PreSplitKeyOptions.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




PreSplitKeyOptions::PreSplitKeyOptions()
{
    hashSplitNum_ = 0;
    hashSplitNumIsSet_ = false;
    rangeSplitPointsIsSet_ = false;
}

PreSplitKeyOptions::~PreSplitKeyOptions() = default;

void PreSplitKeyOptions::validate()
{
}

bool PreSplitKeyOptions::toBson(Builder &builder) const
{

    if (hashSplitNumIsSet_ && !bson_append(builder, "HashSplitNum", hashSplitNum_)) {
        return false;
    }
    if (rangeSplitPointsIsSet_ && !bson_append(builder, "RangeSplitPoints", rangeSplitPoints_)) {
        return false;
    }

    return true;
}

bool PreSplitKeyOptions::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "HashSplitNum") {
            if (!bson_get(it, hashSplitNum_)) {
                return false;
            }
            hashSplitNumIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "RangeSplitPoints") {
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

int32_t PreSplitKeyOptions::getHashSplitNum() const
{
    return hashSplitNum_;
}

void PreSplitKeyOptions::setHashSplitNum(int32_t value)
{
    hashSplitNum_ = value;
    hashSplitNumIsSet_ = true;
}

bool PreSplitKeyOptions::hashSplitNumIsSet() const
{
    return hashSplitNumIsSet_;
}

void PreSplitKeyOptions::unsethashSplitNum()
{
    hashSplitNumIsSet_ = false;
}

std::vector<Document>& PreSplitKeyOptions::getRangeSplitPoints()
{
    return rangeSplitPoints_;
}

void PreSplitKeyOptions::setRangeSplitPoints(const std::vector<Document>& value)
{
    rangeSplitPoints_ = value;
    rangeSplitPointsIsSet_ = true;
}

bool PreSplitKeyOptions::rangeSplitPointsIsSet() const
{
    return rangeSplitPointsIsSet_;
}

void PreSplitKeyOptions::unsetrangeSplitPoints()
{
    rangeSplitPointsIsSet_ = false;
}

}
}
}
}
}


