

#include "huaweicloud/gaussdb/v3/model/DbConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DbConfig::DbConfig()
{
    paramName_ = "";
    paramNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

DbConfig::~DbConfig() = default;

void DbConfig::validate()
{
}

web::json::value DbConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramNameIsSet_) {
        val[utility::conversions::to_string_t("param_name")] = ModelBase::toJson(paramName_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool DbConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("param_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamName(refVal);
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


std::string DbConfig::getParamName() const
{
    return paramName_;
}

void DbConfig::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool DbConfig::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void DbConfig::unsetparamName()
{
    paramNameIsSet_ = false;
}

std::string DbConfig::getValue() const
{
    return value_;
}

void DbConfig::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DbConfig::valueIsSet() const
{
    return valueIsSet_;
}

void DbConfig::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


