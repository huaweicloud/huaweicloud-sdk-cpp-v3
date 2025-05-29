

#include "huaweicloud/codeartsbuild/v3/model/BuildRecord_parameters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildRecord_parameters::BuildRecord_parameters()
{
    name_ = "";
    nameIsSet_ = false;
    secret_ = false;
    secretIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

BuildRecord_parameters::~BuildRecord_parameters() = default;

void BuildRecord_parameters::validate()
{
}

web::json::value BuildRecord_parameters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool BuildRecord_parameters::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecret(refVal);
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


std::string BuildRecord_parameters::getName() const
{
    return name_;
}

void BuildRecord_parameters::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BuildRecord_parameters::nameIsSet() const
{
    return nameIsSet_;
}

void BuildRecord_parameters::unsetname()
{
    nameIsSet_ = false;
}

bool BuildRecord_parameters::isSecret() const
{
    return secret_;
}

void BuildRecord_parameters::setSecret(bool value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool BuildRecord_parameters::secretIsSet() const
{
    return secretIsSet_;
}

void BuildRecord_parameters::unsetsecret()
{
    secretIsSet_ = false;
}

std::string BuildRecord_parameters::getValue() const
{
    return value_;
}

void BuildRecord_parameters::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BuildRecord_parameters::valueIsSet() const
{
    return valueIsSet_;
}

void BuildRecord_parameters::unsetvalue()
{
    valueIsSet_ = false;
}

std::string BuildRecord_parameters::getType() const
{
    return type_;
}

void BuildRecord_parameters::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BuildRecord_parameters::typeIsSet() const
{
    return typeIsSet_;
}

void BuildRecord_parameters::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


