

#include "huaweicloud/codeartsdeploy/v2/model/ConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ConfigInfo::ConfigInfo()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ConfigInfo::~ConfigInfo() = default;

void ConfigInfo::validate()
{
}

web::json::value ConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ConfigInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string ConfigInfo::getName() const
{
    return name_;
}

void ConfigInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigInfo::getType() const
{
    return type_;
}

void ConfigInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ConfigInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ConfigInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ConfigInfo::getValue() const
{
    return value_;
}

void ConfigInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ConfigInfo::valueIsSet() const
{
    return valueIsSet_;
}

void ConfigInfo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


