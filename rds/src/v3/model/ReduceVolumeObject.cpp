

#include "huaweicloud/rds/v3/model/ReduceVolumeObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReduceVolumeObject::ReduceVolumeObject()
{
    size_ = 0;
    sizeIsSet_ = false;
}

ReduceVolumeObject::~ReduceVolumeObject() = default;

void ReduceVolumeObject::validate()
{
}

web::json::value ReduceVolumeObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ReduceVolumeObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


int32_t ReduceVolumeObject::getSize() const
{
    return size_;
}

void ReduceVolumeObject::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ReduceVolumeObject::sizeIsSet() const
{
    return sizeIsSet_;
}

void ReduceVolumeObject::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


