

#include "huaweicloud/gaussdbfornosql/v3/model/ApplyHistoryRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApplyHistoryRsp::ApplyHistoryRsp()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    appliedAt_ = utility::datetime();
    appliedAtIsSet_ = false;
    applyResult_ = "";
    applyResultIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
}

ApplyHistoryRsp::~ApplyHistoryRsp() = default;

void ApplyHistoryRsp::validate()
{
}

web::json::value ApplyHistoryRsp::toJson() const
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
bool ApplyHistoryRsp::fromJson(const web::json::value& val)
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
            utility::datetime refVal;
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


std::string ApplyHistoryRsp::getInstanceId() const
{
    return instanceId_;
}

void ApplyHistoryRsp::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ApplyHistoryRsp::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ApplyHistoryRsp::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ApplyHistoryRsp::getInstanceName() const
{
    return instanceName_;
}

void ApplyHistoryRsp::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ApplyHistoryRsp::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ApplyHistoryRsp::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

utility::datetime ApplyHistoryRsp::getAppliedAt() const
{
    return appliedAt_;
}

void ApplyHistoryRsp::setAppliedAt(const utility::datetime& value)
{
    appliedAt_ = value;
    appliedAtIsSet_ = true;
}

bool ApplyHistoryRsp::appliedAtIsSet() const
{
    return appliedAtIsSet_;
}

void ApplyHistoryRsp::unsetappliedAt()
{
    appliedAtIsSet_ = false;
}

std::string ApplyHistoryRsp::getApplyResult() const
{
    return applyResult_;
}

void ApplyHistoryRsp::setApplyResult(const std::string& value)
{
    applyResult_ = value;
    applyResultIsSet_ = true;
}

bool ApplyHistoryRsp::applyResultIsSet() const
{
    return applyResultIsSet_;
}

void ApplyHistoryRsp::unsetapplyResult()
{
    applyResultIsSet_ = false;
}

std::string ApplyHistoryRsp::getFailureReason() const
{
    return failureReason_;
}

void ApplyHistoryRsp::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool ApplyHistoryRsp::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void ApplyHistoryRsp::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

}
}
}
}
}


