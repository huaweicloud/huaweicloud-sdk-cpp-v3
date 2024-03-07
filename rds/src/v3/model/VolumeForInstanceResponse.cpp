

#include "huaweicloud/rds/v3/model/VolumeForInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




VolumeForInstanceResponse::VolumeForInstanceResponse()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

VolumeForInstanceResponse::~VolumeForInstanceResponse() = default;

void VolumeForInstanceResponse::validate()
{
}

web::json::value VolumeForInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool VolumeForInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
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


std::string VolumeForInstanceResponse::getType() const
{
    return type_;
}

void VolumeForInstanceResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool VolumeForInstanceResponse::typeIsSet() const
{
    return typeIsSet_;
}

void VolumeForInstanceResponse::unsettype()
{
    typeIsSet_ = false;
}

int32_t VolumeForInstanceResponse::getSize() const
{
    return size_;
}

void VolumeForInstanceResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool VolumeForInstanceResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void VolumeForInstanceResponse::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


