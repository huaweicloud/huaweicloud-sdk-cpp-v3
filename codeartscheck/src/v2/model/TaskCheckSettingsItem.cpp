

#include "huaweicloud/codeartscheck/v2/model/TaskCheckSettingsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskCheckSettingsItem::TaskCheckSettingsItem()
{
    cfgKey_ = "";
    cfgKeyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    cfgValue_ = "";
    cfgValueIsSet_ = false;
}

TaskCheckSettingsItem::~TaskCheckSettingsItem() = default;

void TaskCheckSettingsItem::validate()
{
}

web::json::value TaskCheckSettingsItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cfgKeyIsSet_) {
        val[utility::conversions::to_string_t("cfg_key")] = ModelBase::toJson(cfgKey_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(cfgValueIsSet_) {
        val[utility::conversions::to_string_t("cfg_value")] = ModelBase::toJson(cfgValue_);
    }

    return val;
}
bool TaskCheckSettingsItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cfg_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cfg_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCfgKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cfg_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cfg_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCfgValue(refVal);
        }
    }
    return ok;
}


std::string TaskCheckSettingsItem::getCfgKey() const
{
    return cfgKey_;
}

void TaskCheckSettingsItem::setCfgKey(const std::string& value)
{
    cfgKey_ = value;
    cfgKeyIsSet_ = true;
}

bool TaskCheckSettingsItem::cfgKeyIsSet() const
{
    return cfgKeyIsSet_;
}

void TaskCheckSettingsItem::unsetcfgKey()
{
    cfgKeyIsSet_ = false;
}

std::string TaskCheckSettingsItem::getStatus() const
{
    return status_;
}

void TaskCheckSettingsItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskCheckSettingsItem::statusIsSet() const
{
    return statusIsSet_;
}

void TaskCheckSettingsItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TaskCheckSettingsItem::getCfgValue() const
{
    return cfgValue_;
}

void TaskCheckSettingsItem::setCfgValue(const std::string& value)
{
    cfgValue_ = value;
    cfgValueIsSet_ = true;
}

bool TaskCheckSettingsItem::cfgValueIsSet() const
{
    return cfgValueIsSet_;
}

void TaskCheckSettingsItem::unsetcfgValue()
{
    cfgValueIsSet_ = false;
}

}
}
}
}
}


