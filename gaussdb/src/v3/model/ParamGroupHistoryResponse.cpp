

#include "huaweicloud/gaussdb/v3/model/ParamGroupHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ParamGroupHistoryResponse::ParamGroupHistoryResponse()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    updateResult_ = "";
    updateResultIsSet_ = false;
    isApplied_ = false;
    isAppliedIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    applied_ = "";
    appliedIsSet_ = false;
}

ParamGroupHistoryResponse::~ParamGroupHistoryResponse() = default;

void ParamGroupHistoryResponse::validate()
{
}

web::json::value ParamGroupHistoryResponse::toJson() const
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
    if(isAppliedIsSet_) {
        val[utility::conversions::to_string_t("is_applied")] = ModelBase::toJson(isApplied_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(appliedIsSet_) {
        val[utility::conversions::to_string_t("applied")] = ModelBase::toJson(applied_);
    }

    return val;
}
bool ParamGroupHistoryResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_applied"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_applied"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsApplied(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
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
    return ok;
}


std::string ParamGroupHistoryResponse::getParameterName() const
{
    return parameterName_;
}

void ParamGroupHistoryResponse::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ParamGroupHistoryResponse::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ParamGroupHistoryResponse::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ParamGroupHistoryResponse::getOldValue() const
{
    return oldValue_;
}

void ParamGroupHistoryResponse::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool ParamGroupHistoryResponse::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void ParamGroupHistoryResponse::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string ParamGroupHistoryResponse::getNewValue() const
{
    return newValue_;
}

void ParamGroupHistoryResponse::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool ParamGroupHistoryResponse::newValueIsSet() const
{
    return newValueIsSet_;
}

void ParamGroupHistoryResponse::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string ParamGroupHistoryResponse::getUpdateResult() const
{
    return updateResult_;
}

void ParamGroupHistoryResponse::setUpdateResult(const std::string& value)
{
    updateResult_ = value;
    updateResultIsSet_ = true;
}

bool ParamGroupHistoryResponse::updateResultIsSet() const
{
    return updateResultIsSet_;
}

void ParamGroupHistoryResponse::unsetupdateResult()
{
    updateResultIsSet_ = false;
}

bool ParamGroupHistoryResponse::isIsApplied() const
{
    return isApplied_;
}

void ParamGroupHistoryResponse::setIsApplied(bool value)
{
    isApplied_ = value;
    isAppliedIsSet_ = true;
}

bool ParamGroupHistoryResponse::isAppliedIsSet() const
{
    return isAppliedIsSet_;
}

void ParamGroupHistoryResponse::unsetisApplied()
{
    isAppliedIsSet_ = false;
}

std::string ParamGroupHistoryResponse::getUpdated() const
{
    return updated_;
}

void ParamGroupHistoryResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ParamGroupHistoryResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ParamGroupHistoryResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ParamGroupHistoryResponse::getApplied() const
{
    return applied_;
}

void ParamGroupHistoryResponse::setApplied(const std::string& value)
{
    applied_ = value;
    appliedIsSet_ = true;
}

bool ParamGroupHistoryResponse::appliedIsSet() const
{
    return appliedIsSet_;
}

void ParamGroupHistoryResponse::unsetapplied()
{
    appliedIsSet_ = false;
}

}
}
}
}
}


