

#include "huaweicloud/iotdm/v5/model/Flavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




Flavor::Flavor()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

Flavor::~Flavor() = default;

void Flavor::validate()
{
}

web::json::value Flavor::toJson() const
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
bool Flavor::fromJson(const web::json::value& val)
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


std::string Flavor::getType() const
{
    return type_;
}

void Flavor::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Flavor::typeIsSet() const
{
    return typeIsSet_;
}

void Flavor::unsettype()
{
    typeIsSet_ = false;
}

int32_t Flavor::getSize() const
{
    return size_;
}

void Flavor::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Flavor::sizeIsSet() const
{
    return sizeIsSet_;
}

void Flavor::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


