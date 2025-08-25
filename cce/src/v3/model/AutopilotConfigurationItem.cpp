

#include "huaweicloud/cce/v3/model/AutopilotConfigurationItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotConfigurationItem::AutopilotConfigurationItem()
{
    name_ = "";
    nameIsSet_ = false;
    valueIsSet_ = false;
}

AutopilotConfigurationItem::~AutopilotConfigurationItem() = default;

void AutopilotConfigurationItem::validate()
{
}

web::json::value AutopilotConfigurationItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool AutopilotConfigurationItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string AutopilotConfigurationItem::getName() const
{
    return name_;
}

void AutopilotConfigurationItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AutopilotConfigurationItem::nameIsSet() const
{
    return nameIsSet_;
}

void AutopilotConfigurationItem::unsetname()
{
    nameIsSet_ = false;
}

Object AutopilotConfigurationItem::getValue() const
{
    return value_;
}

void AutopilotConfigurationItem::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AutopilotConfigurationItem::valueIsSet() const
{
    return valueIsSet_;
}

void AutopilotConfigurationItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


