

#include "huaweicloud/identitycenter/v1/model/ConsumersDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ConsumersDto::ConsumersDto()
{
    binding_ = "";
    bindingIsSet_ = false;
    defaultValue_ = false;
    defaultValueIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
}

ConsumersDto::~ConsumersDto() = default;

void ConsumersDto::validate()
{
}

web::json::value ConsumersDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bindingIsSet_) {
        val[utility::conversions::to_string_t("binding")] = ModelBase::toJson(binding_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool ConsumersDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("binding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


std::string ConsumersDto::getBinding() const
{
    return binding_;
}

void ConsumersDto::setBinding(const std::string& value)
{
    binding_ = value;
    bindingIsSet_ = true;
}

bool ConsumersDto::bindingIsSet() const
{
    return bindingIsSet_;
}

void ConsumersDto::unsetbinding()
{
    bindingIsSet_ = false;
}

bool ConsumersDto::isDefaultValue() const
{
    return defaultValue_;
}

void ConsumersDto::setDefaultValue(bool value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ConsumersDto::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ConsumersDto::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string ConsumersDto::getLocation() const
{
    return location_;
}

void ConsumersDto::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ConsumersDto::locationIsSet() const
{
    return locationIsSet_;
}

void ConsumersDto::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


