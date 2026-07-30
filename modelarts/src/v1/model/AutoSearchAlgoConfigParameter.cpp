

#include "huaweicloud/modelarts/v1/model/AutoSearchAlgoConfigParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AutoSearchAlgoConfigParameter::AutoSearchAlgoConfigParameter()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

AutoSearchAlgoConfigParameter::~AutoSearchAlgoConfigParameter() = default;

void AutoSearchAlgoConfigParameter::validate()
{
}

web::json::value AutoSearchAlgoConfigParameter::toJson() const
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
bool AutoSearchAlgoConfigParameter::fromJson(const web::json::value& val)
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


std::string AutoSearchAlgoConfigParameter::getKey() const
{
    return key_;
}

void AutoSearchAlgoConfigParameter::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AutoSearchAlgoConfigParameter::keyIsSet() const
{
    return keyIsSet_;
}

void AutoSearchAlgoConfigParameter::unsetkey()
{
    keyIsSet_ = false;
}

std::string AutoSearchAlgoConfigParameter::getValue() const
{
    return value_;
}

void AutoSearchAlgoConfigParameter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AutoSearchAlgoConfigParameter::valueIsSet() const
{
    return valueIsSet_;
}

void AutoSearchAlgoConfigParameter::unsetvalue()
{
    valueIsSet_ = false;
}

std::string AutoSearchAlgoConfigParameter::getType() const
{
    return type_;
}

void AutoSearchAlgoConfigParameter::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AutoSearchAlgoConfigParameter::typeIsSet() const
{
    return typeIsSet_;
}

void AutoSearchAlgoConfigParameter::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


