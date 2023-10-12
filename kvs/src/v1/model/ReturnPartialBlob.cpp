

#include "huaweicloud/kvs/v1/model/ReturnPartialBlob.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ReturnPartialBlob::ReturnPartialBlob()
{
    returnAttr_ = false;
    returnAttrIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    len_ = 0;
    lenIsSet_ = false;
}

ReturnPartialBlob::~ReturnPartialBlob() = default;

void ReturnPartialBlob::validate()
{
}

bool ReturnPartialBlob::toBson(Builder &builder) const
{

    if (returnAttrIsSet_ && !bson_append(builder, "ReturnAttr", returnAttr_)) {
        return false;
    }
    if (offsetIsSet_ && !bson_append(builder, "Offset", offset_)) {
        return false;
    }
    if (lenIsSet_ && !bson_append(builder, "Len", len_)) {
        return false;
    }

    return true;
}

bool ReturnPartialBlob::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "ReturnAttr") {
            if (!bson_get(it, returnAttr_)) {
                return false;
            }
            returnAttrIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Offset") {
            if (!bson_get(it, offset_)) {
                return false;
            }
            offsetIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Len") {
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

bool ReturnPartialBlob::isReturnAttr() const
{
    return returnAttr_;
}

void ReturnPartialBlob::setReturnAttr(bool value)
{
    returnAttr_ = value;
    returnAttrIsSet_ = true;
}

bool ReturnPartialBlob::returnAttrIsSet() const
{
    return returnAttrIsSet_;
}

void ReturnPartialBlob::unsetreturnAttr()
{
    returnAttrIsSet_ = false;
}

int32_t ReturnPartialBlob::getOffset() const
{
    return offset_;
}

void ReturnPartialBlob::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ReturnPartialBlob::offsetIsSet() const
{
    return offsetIsSet_;
}

void ReturnPartialBlob::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ReturnPartialBlob::getLen() const
{
    return len_;
}

void ReturnPartialBlob::setLen(int32_t value)
{
    len_ = value;
    lenIsSet_ = true;
}

bool ReturnPartialBlob::lenIsSet() const
{
    return lenIsSet_;
}

void ReturnPartialBlob::unsetlen()
{
    lenIsSet_ = false;
}

}
}
}
}
}


