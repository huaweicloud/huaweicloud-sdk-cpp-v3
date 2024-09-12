

#include "huaweicloud/kvs/v1/model/Returned_segment_item.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Returned_segment_item::Returned_segment_item()
{
    segmentMinKeyIsSet_ = false;
    segmentMaxKeyIsSet_ = false;
}

Returned_segment_item::~Returned_segment_item() = default;

void Returned_segment_item::validate()
{
}

bool Returned_segment_item::toBson(Builder &builder) const
{

    if (segmentMinKeyIsSet_ && !bson_append(builder, "segment_min_key", segmentMinKey_)) {
        return false;
    }
    if (segmentMaxKeyIsSet_ && !bson_append(builder, "segment_max_key", segmentMaxKey_)) {
        return false;
    }

    return true;
}

bool Returned_segment_item::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "segment_min_key") {
            if (!bson_get(it, segmentMinKey_)) {
                return false;
            }
            segmentMinKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "segment_max_key") {
            if (!bson_get(it, segmentMaxKey_)) {
                return false;
            }
            segmentMaxKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Document Returned_segment_item::getSegmentMinKey() const
{
    return segmentMinKey_;
}

void Returned_segment_item::setSegmentMinKey(const Document& value)
{
    segmentMinKey_ = value;
    segmentMinKeyIsSet_ = true;
}

bool Returned_segment_item::segmentMinKeyIsSet() const
{
    return segmentMinKeyIsSet_;
}

void Returned_segment_item::unsetsegmentMinKey()
{
    segmentMinKeyIsSet_ = false;
}

Document Returned_segment_item::getSegmentMaxKey() const
{
    return segmentMaxKey_;
}

void Returned_segment_item::setSegmentMaxKey(const Document& value)
{
    segmentMaxKey_ = value;
    segmentMaxKeyIsSet_ = true;
}

bool Returned_segment_item::segmentMaxKeyIsSet() const
{
    return segmentMaxKeyIsSet_;
}

void Returned_segment_item::unsetsegmentMaxKey()
{
    segmentMaxKeyIsSet_ = false;
}

}
}
}
}
}


