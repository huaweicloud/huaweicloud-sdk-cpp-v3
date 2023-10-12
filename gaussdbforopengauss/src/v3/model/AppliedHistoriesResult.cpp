

#include "huaweicloud/gaussdbforopengauss/v3/model/AppliedHistoriesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AppliedHistoriesResult::AppliedHistoriesResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    applyResult_ = "";
    applyResultIsSet_ = false;
    appliedAt_ = "";
    appliedAtIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

AppliedHistoriesResult::~AppliedHistoriesResult() = default;

void AppliedHistoriesResult::validate()
{
}

web::json::value AppliedHistoriesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(applyResultIsSet_) {
        val[utility::conversions::to_string_t("apply_result")] = ModelBase::toJson(applyResult_);
    }
    if(appliedAtIsSet_) {
        val[utility::conversions::to_string_t("applied_at")] = ModelBase::toJson(appliedAt_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}
bool AppliedHistoriesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}


std::string AppliedHistoriesResult::getInstanceId() const
{
    return instanceId_;
}

void AppliedHistoriesResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AppliedHistoriesResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AppliedHistoriesResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AppliedHistoriesResult::getInstanceName() const
{
    return instanceName_;
}

void AppliedHistoriesResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool AppliedHistoriesResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void AppliedHistoriesResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string AppliedHistoriesResult::getApplyResult() const
{
    return applyResult_;
}

void AppliedHistoriesResult::setApplyResult(const std::string& value)
{
    applyResult_ = value;
    applyResultIsSet_ = true;
}

bool AppliedHistoriesResult::applyResultIsSet() const
{
    return applyResultIsSet_;
}

void AppliedHistoriesResult::unsetapplyResult()
{
    applyResultIsSet_ = false;
}

std::string AppliedHistoriesResult::getAppliedAt() const
{
    return appliedAt_;
}

void AppliedHistoriesResult::setAppliedAt(const std::string& value)
{
    appliedAt_ = value;
    appliedAtIsSet_ = true;
}

bool AppliedHistoriesResult::appliedAtIsSet() const
{
    return appliedAtIsSet_;
}

void AppliedHistoriesResult::unsetappliedAt()
{
    appliedAtIsSet_ = false;
}

std::string AppliedHistoriesResult::getErrorCode() const
{
    return errorCode_;
}

void AppliedHistoriesResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool AppliedHistoriesResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void AppliedHistoriesResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


