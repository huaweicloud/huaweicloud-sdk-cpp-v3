

#include "huaweicloud/dds/v3/model/ApplyHistoryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ApplyHistoryInfo::ApplyHistoryInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    appliedAt_ = "";
    appliedAtIsSet_ = false;
    applyResult_ = "";
    applyResultIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
}

ApplyHistoryInfo::~ApplyHistoryInfo() = default;

void ApplyHistoryInfo::validate()
{
}

web::json::value ApplyHistoryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(appliedAtIsSet_) {
        val[utility::conversions::to_string_t("applied_at")] = ModelBase::toJson(appliedAt_);
    }
    if(applyResultIsSet_) {
        val[utility::conversions::to_string_t("apply_result")] = ModelBase::toJson(applyResult_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }

    return val;
}
bool ApplyHistoryInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("applied_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applied_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppliedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("failure_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureReason(refVal);
        }
    }
    return ok;
}


std::string ApplyHistoryInfo::getInstanceId() const
{
    return instanceId_;
}

void ApplyHistoryInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ApplyHistoryInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ApplyHistoryInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ApplyHistoryInfo::getInstanceName() const
{
    return instanceName_;
}

void ApplyHistoryInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ApplyHistoryInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ApplyHistoryInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ApplyHistoryInfo::getAppliedAt() const
{
    return appliedAt_;
}

void ApplyHistoryInfo::setAppliedAt(const std::string& value)
{
    appliedAt_ = value;
    appliedAtIsSet_ = true;
}

bool ApplyHistoryInfo::appliedAtIsSet() const
{
    return appliedAtIsSet_;
}

void ApplyHistoryInfo::unsetappliedAt()
{
    appliedAtIsSet_ = false;
}

std::string ApplyHistoryInfo::getApplyResult() const
{
    return applyResult_;
}

void ApplyHistoryInfo::setApplyResult(const std::string& value)
{
    applyResult_ = value;
    applyResultIsSet_ = true;
}

bool ApplyHistoryInfo::applyResultIsSet() const
{
    return applyResultIsSet_;
}

void ApplyHistoryInfo::unsetapplyResult()
{
    applyResultIsSet_ = false;
}

std::string ApplyHistoryInfo::getFailureReason() const
{
    return failureReason_;
}

void ApplyHistoryInfo::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool ApplyHistoryInfo::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void ApplyHistoryInfo::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

}
}
}
}
}


