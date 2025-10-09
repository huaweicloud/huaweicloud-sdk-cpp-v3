

#include "huaweicloud/rds/v3/model/ApplyHistoryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ApplyHistoryInfo::ApplyHistoryInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    applyResult_ = "";
    applyResultIsSet_ = false;
    applyTime_ = "";
    applyTimeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
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
    if(applyResultIsSet_) {
        val[utility::conversions::to_string_t("apply_result")] = ModelBase::toJson(applyResult_);
    }
    if(applyTimeIsSet_) {
        val[utility::conversions::to_string_t("apply_time")] = ModelBase::toJson(applyTime_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
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
    if(val.has_field(utility::conversions::to_string_t("apply_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyResult(refVal);
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

std::string ApplyHistoryInfo::getApplyTime() const
{
    return applyTime_;
}

void ApplyHistoryInfo::setApplyTime(const std::string& value)
{
    applyTime_ = value;
    applyTimeIsSet_ = true;
}

bool ApplyHistoryInfo::applyTimeIsSet() const
{
    return applyTimeIsSet_;
}

void ApplyHistoryInfo::unsetapplyTime()
{
    applyTimeIsSet_ = false;
}

std::string ApplyHistoryInfo::getErrorCode() const
{
    return errorCode_;
}

void ApplyHistoryInfo::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ApplyHistoryInfo::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ApplyHistoryInfo::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


