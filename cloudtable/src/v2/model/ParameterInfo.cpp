

#include "huaweicloud/cloudtable/v2/model/ParameterInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ParameterInfo::ParameterInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    valueType_ = "";
    valueTypeIsSet_ = false;
    runningValue_ = "";
    runningValueIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    reboot_ = false;
    rebootIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ParameterInfo::~ParameterInfo() = default;

void ParameterInfo::validate()
{
}

web::json::value ParameterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(valueTypeIsSet_) {
        val[utility::conversions::to_string_t("value_type")] = ModelBase::toJson(valueType_);
    }
    if(runningValueIsSet_) {
        val[utility::conversions::to_string_t("running_value")] = ModelBase::toJson(runningValue_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(rebootIsSet_) {
        val[utility::conversions::to_string_t("reboot")] = ModelBase::toJson(reboot_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool ParameterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reboot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reboot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReboot(refVal);
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

std::string ParameterInfo::getId() const
{
    return id_;
}

void ParameterInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ParameterInfo::idIsSet() const
{
    return idIsSet_;
}

void ParameterInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ParameterInfo::getName() const
{
    return name_;
}

void ParameterInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParameterInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ParameterInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ParameterInfo::getDefaultValue() const
{
    return defaultValue_;
}

void ParameterInfo::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ParameterInfo::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ParameterInfo::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string ParameterInfo::getValueType() const
{
    return valueType_;
}

void ParameterInfo::setValueType(const std::string& value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool ParameterInfo::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void ParameterInfo::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

std::string ParameterInfo::getRunningValue() const
{
    return runningValue_;
}

void ParameterInfo::setRunningValue(const std::string& value)
{
    runningValue_ = value;
    runningValueIsSet_ = true;
}

bool ParameterInfo::runningValueIsSet() const
{
    return runningValueIsSet_;
}

void ParameterInfo::unsetrunningValue()
{
    runningValueIsSet_ = false;
}

std::string ParameterInfo::getUnit() const
{
    return unit_;
}

void ParameterInfo::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ParameterInfo::unitIsSet() const
{
    return unitIsSet_;
}

void ParameterInfo::unsetunit()
{
    unitIsSet_ = false;
}

bool ParameterInfo::isReboot() const
{
    return reboot_;
}

void ParameterInfo::setReboot(bool value)
{
    reboot_ = value;
    rebootIsSet_ = true;
}

bool ParameterInfo::rebootIsSet() const
{
    return rebootIsSet_;
}

void ParameterInfo::unsetreboot()
{
    rebootIsSet_ = false;
}

std::string ParameterInfo::getValueRange() const
{
    return valueRange_;
}

void ParameterInfo::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ParameterInfo::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ParameterInfo::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ParameterInfo::getDescription() const
{
    return description_;
}

void ParameterInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ParameterInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ParameterInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


