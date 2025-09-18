

#include "huaweicloud/codeartscheck/v2/model/TaskAdvancedSettingsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskAdvancedSettingsItem::TaskAdvancedSettingsItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TaskAdvancedSettingsItem::~TaskAdvancedSettingsItem() = default;

void TaskAdvancedSettingsItem::validate()
{
}

web::json::value TaskAdvancedSettingsItem::toJson() const
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
bool TaskAdvancedSettingsItem::fromJson(const web::json::value& val)
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


std::string TaskAdvancedSettingsItem::getKey() const
{
    return key_;
}

void TaskAdvancedSettingsItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TaskAdvancedSettingsItem::keyIsSet() const
{
    return keyIsSet_;
}

void TaskAdvancedSettingsItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string TaskAdvancedSettingsItem::getValue() const
{
    return value_;
}

void TaskAdvancedSettingsItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TaskAdvancedSettingsItem::valueIsSet() const
{
    return valueIsSet_;
}

void TaskAdvancedSettingsItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


