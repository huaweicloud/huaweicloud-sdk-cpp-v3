

#include "huaweicloud/cdn/v1/model/RefererConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




RefererConfig::RefererConfig()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    includeEmpty_ = false;
    includeEmptyIsSet_ = false;
}

RefererConfig::~RefererConfig() = default;

void RefererConfig::validate()
{
}

web::json::value RefererConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(includeEmptyIsSet_) {
        val[utility::conversions::to_string_t("include_empty")] = ModelBase::toJson(includeEmpty_);
    }

    return val;
}
bool RefererConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_empty"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_empty"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeEmpty(refVal);
        }
    }
    return ok;
}


std::string RefererConfig::getType() const
{
    return type_;
}

void RefererConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RefererConfig::typeIsSet() const
{
    return typeIsSet_;
}

void RefererConfig::unsettype()
{
    typeIsSet_ = false;
}

std::string RefererConfig::getValue() const
{
    return value_;
}

void RefererConfig::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool RefererConfig::valueIsSet() const
{
    return valueIsSet_;
}

void RefererConfig::unsetvalue()
{
    valueIsSet_ = false;
}

bool RefererConfig::isIncludeEmpty() const
{
    return includeEmpty_;
}

void RefererConfig::setIncludeEmpty(bool value)
{
    includeEmpty_ = value;
    includeEmptyIsSet_ = true;
}

bool RefererConfig::includeEmptyIsSet() const
{
    return includeEmptyIsSet_;
}

void RefererConfig::unsetincludeEmpty()
{
    includeEmptyIsSet_ = false;
}

}
}
}
}
}


