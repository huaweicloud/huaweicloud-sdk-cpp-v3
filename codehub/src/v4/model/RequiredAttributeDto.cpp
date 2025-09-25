

#include "huaweicloud/codehub/v4/model/RequiredAttributeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RequiredAttributeDto::RequiredAttributeDto()
{
    name_ = "";
    nameIsSet_ = false;
    isRequired_ = false;
    isRequiredIsSet_ = false;
}

RequiredAttributeDto::~RequiredAttributeDto() = default;

void RequiredAttributeDto::validate()
{
}

web::json::value RequiredAttributeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(isRequiredIsSet_) {
        val[utility::conversions::to_string_t("is_required")] = ModelBase::toJson(isRequired_);
    }

    return val;
}
bool RequiredAttributeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRequired(refVal);
        }
    }
    return ok;
}


std::string RequiredAttributeDto::getName() const
{
    return name_;
}

void RequiredAttributeDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RequiredAttributeDto::nameIsSet() const
{
    return nameIsSet_;
}

void RequiredAttributeDto::unsetname()
{
    nameIsSet_ = false;
}

bool RequiredAttributeDto::isIsRequired() const
{
    return isRequired_;
}

void RequiredAttributeDto::setIsRequired(bool value)
{
    isRequired_ = value;
    isRequiredIsSet_ = true;
}

bool RequiredAttributeDto::isRequiredIsSet() const
{
    return isRequiredIsSet_;
}

void RequiredAttributeDto::unsetisRequired()
{
    isRequiredIsSet_ = false;
}

}
}
}
}
}


