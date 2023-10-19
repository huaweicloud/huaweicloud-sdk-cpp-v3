

#include "huaweicloud/gaussdb/v3/model/UpdateProxyConfigurationItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyConfigurationItem::UpdateProxyConfigurationItem()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    elemType_ = "";
    elemTypeIsSet_ = false;
}

UpdateProxyConfigurationItem::~UpdateProxyConfigurationItem() = default;

void UpdateProxyConfigurationItem::validate()
{
}

web::json::value UpdateProxyConfigurationItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(elemTypeIsSet_) {
        val[utility::conversions::to_string_t("elem_type")] = ModelBase::toJson(elemType_);
    }

    return val;
}
bool UpdateProxyConfigurationItem::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elem_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elem_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElemType(refVal);
        }
    }
    return ok;
}


std::string UpdateProxyConfigurationItem::getName() const
{
    return name_;
}

void UpdateProxyConfigurationItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProxyConfigurationItem::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProxyConfigurationItem::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateProxyConfigurationItem::getValue() const
{
    return value_;
}

void UpdateProxyConfigurationItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UpdateProxyConfigurationItem::valueIsSet() const
{
    return valueIsSet_;
}

void UpdateProxyConfigurationItem::unsetvalue()
{
    valueIsSet_ = false;
}

std::string UpdateProxyConfigurationItem::getElemType() const
{
    return elemType_;
}

void UpdateProxyConfigurationItem::setElemType(const std::string& value)
{
    elemType_ = value;
    elemTypeIsSet_ = true;
}

bool UpdateProxyConfigurationItem::elemTypeIsSet() const
{
    return elemTypeIsSet_;
}

void UpdateProxyConfigurationItem::unsetelemType()
{
    elemTypeIsSet_ = false;
}

}
}
}
}
}


