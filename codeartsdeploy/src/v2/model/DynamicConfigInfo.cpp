

#include "huaweicloud/codeartsdeploy/v2/model/DynamicConfigInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DynamicConfigInfo::DynamicConfigInfo()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DynamicConfigInfo::~DynamicConfigInfo() = default;

void DynamicConfigInfo::validate()
{
}

web::json::value DynamicConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool DynamicConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}

std::string DynamicConfigInfo::getKey() const
{
    return key_;
}

void DynamicConfigInfo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DynamicConfigInfo::keyIsSet() const
{
    return keyIsSet_;
}

void DynamicConfigInfo::unsetkey()
{
    keyIsSet_ = false;
}

std::string DynamicConfigInfo::getValue() const
{
    return value_;
}

void DynamicConfigInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DynamicConfigInfo::valueIsSet() const
{
    return valueIsSet_;
}

void DynamicConfigInfo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string DynamicConfigInfo::getType() const
{
    return type_;
}

void DynamicConfigInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DynamicConfigInfo::typeIsSet() const
{
    return typeIsSet_;
}

void DynamicConfigInfo::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


