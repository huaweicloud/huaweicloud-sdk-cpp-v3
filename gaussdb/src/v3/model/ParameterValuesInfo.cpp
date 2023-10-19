

#include "huaweicloud/gaussdb/v3/model/ParameterValuesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ParameterValuesInfo::ParameterValuesInfo()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ParameterValuesInfo::~ParameterValuesInfo() = default;

void ParameterValuesInfo::validate()
{
}

web::json::value ParameterValuesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(restartRequiredIsSet_) {
        val[utility::conversions::to_string_t("restart_required")] = ModelBase::toJson(restartRequired_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ParameterValuesInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restart_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ParameterValuesInfo::getName() const
{
    return name_;
}

void ParameterValuesInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParameterValuesInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ParameterValuesInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ParameterValuesInfo::getValue() const
{
    return value_;
}

void ParameterValuesInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ParameterValuesInfo::valueIsSet() const
{
    return valueIsSet_;
}

void ParameterValuesInfo::unsetvalue()
{
    valueIsSet_ = false;
}

bool ParameterValuesInfo::isRestartRequired() const
{
    return restartRequired_;
}

void ParameterValuesInfo::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool ParameterValuesInfo::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void ParameterValuesInfo::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

bool ParameterValuesInfo::isReadonly() const
{
    return readonly_;
}

void ParameterValuesInfo::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool ParameterValuesInfo::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void ParameterValuesInfo::unsetreadonly()
{
    readonlyIsSet_ = false;
}

std::string ParameterValuesInfo::getValueRange() const
{
    return valueRange_;
}

void ParameterValuesInfo::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ParameterValuesInfo::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ParameterValuesInfo::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ParameterValuesInfo::getType() const
{
    return type_;
}

void ParameterValuesInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ParameterValuesInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ParameterValuesInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ParameterValuesInfo::getDescription() const
{
    return description_;
}

void ParameterValuesInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ParameterValuesInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ParameterValuesInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


