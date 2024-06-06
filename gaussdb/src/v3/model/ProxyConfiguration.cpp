

#include "huaweicloud/gaussdb/v3/model/ProxyConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyConfiguration::ProxyConfiguration()
{
    name_ = "";
    nameIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    elemType_ = "";
    elemTypeIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ProxyConfiguration::~ProxyConfiguration() = default;

void ProxyConfiguration::validate()
{
}

web::json::value ProxyConfiguration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(elemTypeIsSet_) {
        val[utility::conversions::to_string_t("elem_type")] = ModelBase::toJson(elemType_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ProxyConfiguration::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueRange(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string ProxyConfiguration::getName() const
{
    return name_;
}

void ProxyConfiguration::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProxyConfiguration::nameIsSet() const
{
    return nameIsSet_;
}

void ProxyConfiguration::unsetname()
{
    nameIsSet_ = false;
}

std::string ProxyConfiguration::getDataType() const
{
    return dataType_;
}

void ProxyConfiguration::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool ProxyConfiguration::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void ProxyConfiguration::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string ProxyConfiguration::getElemType() const
{
    return elemType_;
}

void ProxyConfiguration::setElemType(const std::string& value)
{
    elemType_ = value;
    elemTypeIsSet_ = true;
}

bool ProxyConfiguration::elemTypeIsSet() const
{
    return elemTypeIsSet_;
}

void ProxyConfiguration::unsetelemType()
{
    elemTypeIsSet_ = false;
}

std::string ProxyConfiguration::getValueRange() const
{
    return valueRange_;
}

void ProxyConfiguration::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ProxyConfiguration::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ProxyConfiguration::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ProxyConfiguration::getValue() const
{
    return value_;
}

void ProxyConfiguration::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ProxyConfiguration::valueIsSet() const
{
    return valueIsSet_;
}

void ProxyConfiguration::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ProxyConfiguration::getDescription() const
{
    return description_;
}

void ProxyConfiguration::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProxyConfiguration::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProxyConfiguration::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


