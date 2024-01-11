

#include "huaweicloud/kvs/v1/model/Projection_blob.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Projection_blob::Projection_blob()
{
    withAttr_ = false;
    withAttrIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    len_ = 0;
    lenIsSet_ = false;
}

Projection_blob::~Projection_blob() = default;

void Projection_blob::validate()
{
}

bool Projection_blob::toBson(Builder &builder) const
{

    if (withAttrIsSet_ && !bson_append(builder, "with_attr", withAttr_)) {
        return false;
    }
    if (offsetIsSet_ && !bson_append(builder, "offset", offset_)) {
        return false;
    }
    if (lenIsSet_ && !bson_append(builder, "len", len_)) {
        return false;
    }

    return true;
}

bool Projection_blob::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "with_attr") {
            if (!bson_get(it, withAttr_)) {
                return false;
            }
            withAttrIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "offset") {
            if (!bson_get(it, offset_)) {
                return false;
            }
            offsetIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "len") {
            if (!bson_get(it, len_)) {
                return false;
            }
            lenIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

bool Projection_blob::isWithAttr() const
{
    return withAttr_;
}

void Projection_blob::setWithAttr(bool value)
{
    withAttr_ = value;
    withAttrIsSet_ = true;
}

bool Projection_blob::withAttrIsSet() const
{
    return withAttrIsSet_;
}

void Projection_blob::unsetwithAttr()
{
    withAttrIsSet_ = false;
}

int32_t Projection_blob::getOffset() const
{
    return offset_;
}

void Projection_blob::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool Projection_blob::offsetIsSet() const
{
    return offsetIsSet_;
}

void Projection_blob::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t Projection_blob::getLen() const
{
    return len_;
}

void Projection_blob::setLen(int32_t value)
{
    len_ = value;
    lenIsSet_ = true;
}

bool Projection_blob::lenIsSet() const
{
    return lenIsSet_;
}

void Projection_blob::unsetlen()
{
    lenIsSet_ = false;
}

}
}
}
}
}


