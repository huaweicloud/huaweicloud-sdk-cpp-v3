

#include "huaweicloud/modelarts/v1/model/DependArg.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DependArg::DependArg()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

DependArg::~DependArg() = default;

void DependArg::validate()
{
}

web::json::value DependArg::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool DependArg::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DependArg::getKey() const
{
    return key_;
}

void DependArg::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DependArg::keyIsSet() const
{
    return keyIsSet_;
}

void DependArg::unsetkey()
{
    keyIsSet_ = false;
}

std::string DependArg::getValue() const
{
    return value_;
}

void DependArg::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DependArg::valueIsSet() const
{
    return valueIsSet_;
}

void DependArg::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


