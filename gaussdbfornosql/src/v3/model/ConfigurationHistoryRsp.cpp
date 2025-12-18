

#include "huaweicloud/gaussdbfornosql/v3/model/ConfigurationHistoryRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ConfigurationHistoryRsp::ConfigurationHistoryRsp()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    updateResult_ = "";
    updateResultIsSet_ = false;
    applied_ = "";
    appliedIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    appliedAt_ = "";
    appliedAtIsSet_ = false;
}

ConfigurationHistoryRsp::~ConfigurationHistoryRsp() = default;

void ConfigurationHistoryRsp::validate()
{
}

web::json::value ConfigurationHistoryRsp::toJson() const
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
bool ConfigurationHistoryRsp::fromJson(const web::json::value& val)
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
            std::string refVal;
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


std::string ConfigurationHistoryRsp::getParameterName() const
{
    return parameterName_;
}

void ConfigurationHistoryRsp::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ConfigurationHistoryRsp::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ConfigurationHistoryRsp::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ConfigurationHistoryRsp::getOldValue() const
{
    return oldValue_;
}

void ConfigurationHistoryRsp::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool ConfigurationHistoryRsp::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void ConfigurationHistoryRsp::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string ConfigurationHistoryRsp::getNewValue() const
{
    return newValue_;
}

void ConfigurationHistoryRsp::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool ConfigurationHistoryRsp::newValueIsSet() const
{
    return newValueIsSet_;
}

void ConfigurationHistoryRsp::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string ConfigurationHistoryRsp::getUpdateResult() const
{
    return updateResult_;
}

void ConfigurationHistoryRsp::setUpdateResult(const std::string& value)
{
    updateResult_ = value;
    updateResultIsSet_ = true;
}

bool ConfigurationHistoryRsp::updateResultIsSet() const
{
    return updateResultIsSet_;
}

void ConfigurationHistoryRsp::unsetupdateResult()
{
    updateResultIsSet_ = false;
}

std::string ConfigurationHistoryRsp::getApplied() const
{
    return applied_;
}

void ConfigurationHistoryRsp::setApplied(const std::string& value)
{
    applied_ = value;
    appliedIsSet_ = true;
}

bool ConfigurationHistoryRsp::appliedIsSet() const
{
    return appliedIsSet_;
}

void ConfigurationHistoryRsp::unsetapplied()
{
    appliedIsSet_ = false;
}

std::string ConfigurationHistoryRsp::getUpdatedAt() const
{
    return updatedAt_;
}

void ConfigurationHistoryRsp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ConfigurationHistoryRsp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ConfigurationHistoryRsp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ConfigurationHistoryRsp::getAppliedAt() const
{
    return appliedAt_;
}

void ConfigurationHistoryRsp::setAppliedAt(const std::string& value)
{
    appliedAt_ = value;
    appliedAtIsSet_ = true;
}

bool ConfigurationHistoryRsp::appliedAtIsSet() const
{
    return appliedAtIsSet_;
}

void ConfigurationHistoryRsp::unsetappliedAt()
{
    appliedAtIsSet_ = false;
}

}
}
}
}
}


