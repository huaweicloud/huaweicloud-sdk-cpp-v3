

#include "huaweicloud/rds/v3/model/ParamGroupHistoryResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ParamGroupHistoryResult::ParamGroupHistoryResult()
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
    updateTime_ = "";
    updateTimeIsSet_ = false;
    applyTime_ = "";
    applyTimeIsSet_ = false;
}

ParamGroupHistoryResult::~ParamGroupHistoryResult() = default;

void ParamGroupHistoryResult::validate()
{
}

web::json::value ParamGroupHistoryResult::toJson() const
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
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(applyTimeIsSet_) {
        val[utility::conversions::to_string_t("apply_time")] = ModelBase::toJson(applyTime_);
    }

    return val;
}
bool ParamGroupHistoryResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyTime(refVal);
        }
    }
    return ok;
}


std::string ParamGroupHistoryResult::getParameterName() const
{
    return parameterName_;
}

void ParamGroupHistoryResult::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ParamGroupHistoryResult::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ParamGroupHistoryResult::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ParamGroupHistoryResult::getOldValue() const
{
    return oldValue_;
}

void ParamGroupHistoryResult::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool ParamGroupHistoryResult::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void ParamGroupHistoryResult::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string ParamGroupHistoryResult::getNewValue() const
{
    return newValue_;
}

void ParamGroupHistoryResult::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool ParamGroupHistoryResult::newValueIsSet() const
{
    return newValueIsSet_;
}

void ParamGroupHistoryResult::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string ParamGroupHistoryResult::getUpdateResult() const
{
    return updateResult_;
}

void ParamGroupHistoryResult::setUpdateResult(const std::string& value)
{
    updateResult_ = value;
    updateResultIsSet_ = true;
}

bool ParamGroupHistoryResult::updateResultIsSet() const
{
    return updateResultIsSet_;
}

void ParamGroupHistoryResult::unsetupdateResult()
{
    updateResultIsSet_ = false;
}

bool ParamGroupHistoryResult::isApplied() const
{
    return applied_;
}

void ParamGroupHistoryResult::setApplied(bool value)
{
    applied_ = value;
    appliedIsSet_ = true;
}

bool ParamGroupHistoryResult::appliedIsSet() const
{
    return appliedIsSet_;
}

void ParamGroupHistoryResult::unsetapplied()
{
    appliedIsSet_ = false;
}

std::string ParamGroupHistoryResult::getUpdateTime() const
{
    return updateTime_;
}

void ParamGroupHistoryResult::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ParamGroupHistoryResult::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ParamGroupHistoryResult::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ParamGroupHistoryResult::getApplyTime() const
{
    return applyTime_;
}

void ParamGroupHistoryResult::setApplyTime(const std::string& value)
{
    applyTime_ = value;
    applyTimeIsSet_ = true;
}

bool ParamGroupHistoryResult::applyTimeIsSet() const
{
    return applyTimeIsSet_;
}

void ParamGroupHistoryResult::unsetapplyTime()
{
    applyTimeIsSet_ = false;
}

}
}
}
}
}


