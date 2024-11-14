

#include "huaweicloud/dds/v3/model/ConfigurationModifyHistoryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ConfigurationModifyHistoryInfo::ConfigurationModifyHistoryInfo()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    updateResult_ = "";
    updateResultIsSet_ = false;
    applied_ = false;
    appliedIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    appliedAt_ = "";
    appliedAtIsSet_ = false;
}

ConfigurationModifyHistoryInfo::~ConfigurationModifyHistoryInfo() = default;

void ConfigurationModifyHistoryInfo::validate()
{
}

web::json::value ConfigurationModifyHistoryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parameterNameIsSet_) {
        val[utility::conversions::to_string_t("parameter_name")] = ModelBase::toJson(parameterName_);
    }
    if(oldValueIsSet_) {
        val[utility::conversions::to_string_t("old_value")] = ModelBase::toJson(oldValue_);
    }
    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(updateResultIsSet_) {
        val[utility::conversions::to_string_t("update_result")] = ModelBase::toJson(updateResult_);
    }
    if(appliedIsSet_) {
        val[utility::conversions::to_string_t("applied")] = ModelBase::toJson(applied_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(appliedAtIsSet_) {
        val[utility::conversions::to_string_t("applied_at")] = ModelBase::toJson(appliedAt_);
    }

    return val;
}
bool ConfigurationModifyHistoryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameter_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applied"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applied"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplied(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applied_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applied_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppliedAt(refVal);
        }
    }
    return ok;
}


std::string ConfigurationModifyHistoryInfo::getParameterName() const
{
    return parameterName_;
}

void ConfigurationModifyHistoryInfo::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ConfigurationModifyHistoryInfo::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ConfigurationModifyHistoryInfo::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ConfigurationModifyHistoryInfo::getOldValue() const
{
    return oldValue_;
}

void ConfigurationModifyHistoryInfo::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool ConfigurationModifyHistoryInfo::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void ConfigurationModifyHistoryInfo::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string ConfigurationModifyHistoryInfo::getNewValue() const
{
    return newValue_;
}

void ConfigurationModifyHistoryInfo::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool ConfigurationModifyHistoryInfo::newValueIsSet() const
{
    return newValueIsSet_;
}

void ConfigurationModifyHistoryInfo::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string ConfigurationModifyHistoryInfo::getUpdateResult() const
{
    return updateResult_;
}

void ConfigurationModifyHistoryInfo::setUpdateResult(const std::string& value)
{
    updateResult_ = value;
    updateResultIsSet_ = true;
}

bool ConfigurationModifyHistoryInfo::updateResultIsSet() const
{
    return updateResultIsSet_;
}

void ConfigurationModifyHistoryInfo::unsetupdateResult()
{
    updateResultIsSet_ = false;
}

bool ConfigurationModifyHistoryInfo::isApplied() const
{
    return applied_;
}

void ConfigurationModifyHistoryInfo::setApplied(bool value)
{
    applied_ = value;
    appliedIsSet_ = true;
}

bool ConfigurationModifyHistoryInfo::appliedIsSet() const
{
    return appliedIsSet_;
}

void ConfigurationModifyHistoryInfo::unsetapplied()
{
    appliedIsSet_ = false;
}

std::string ConfigurationModifyHistoryInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void ConfigurationModifyHistoryInfo::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ConfigurationModifyHistoryInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ConfigurationModifyHistoryInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ConfigurationModifyHistoryInfo::getAppliedAt() const
{
    return appliedAt_;
}

void ConfigurationModifyHistoryInfo::setAppliedAt(const std::string& value)
{
    appliedAt_ = value;
    appliedAtIsSet_ = true;
}

bool ConfigurationModifyHistoryInfo::appliedAtIsSet() const
{
    return appliedAtIsSet_;
}

void ConfigurationModifyHistoryInfo::unsetappliedAt()
{
    appliedAtIsSet_ = false;
}

}
}
}
}
}


