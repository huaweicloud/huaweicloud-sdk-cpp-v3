

#include "huaweicloud/metastudio/v1/model/SystemProperty.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SystemProperty::SystemProperty()
{
    action_ = "";
    actionIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

SystemProperty::~SystemProperty() = default;

void SystemProperty::validate()
{
}

web::json::value SystemProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool SystemProperty::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
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


std::string SystemProperty::getAction() const
{
    return action_;
}

void SystemProperty::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool SystemProperty::actionIsSet() const
{
    return actionIsSet_;
}

void SystemProperty::unsetaction()
{
    actionIsSet_ = false;
}

std::string SystemProperty::getKey() const
{
    return key_;
}

void SystemProperty::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SystemProperty::keyIsSet() const
{
    return keyIsSet_;
}

void SystemProperty::unsetkey()
{
    keyIsSet_ = false;
}

std::string SystemProperty::getValue() const
{
    return value_;
}

void SystemProperty::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SystemProperty::valueIsSet() const
{
    return valueIsSet_;
}

void SystemProperty::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


