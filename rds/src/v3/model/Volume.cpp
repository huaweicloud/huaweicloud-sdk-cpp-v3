

#include "huaweicloud/rds/v3/model/Volume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Volume::Volume()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

Volume::~Volume() = default;

void Volume::validate()
{
}

web::json::value Volume::toJson() const
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

bool Volume::fromJson(const web::json::value& val)
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

std::string Volume::getType() const
{
    return type_;
}

void Volume::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Volume::typeIsSet() const
{
    return typeIsSet_;
}

void Volume::unsettype()
{
    typeIsSet_ = false;
}

int32_t Volume::getSize() const
{
    return size_;
}

void Volume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Volume::sizeIsSet() const
{
    return sizeIsSet_;
}

void Volume::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


