

#include "huaweicloud/dds/v3/model/UpgradeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpgradeResult::UpgradeResult()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

UpgradeResult::~UpgradeResult() = default;

void UpgradeResult::validate()
{
}

web::json::value UpgradeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool UpgradeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string UpgradeResult::getJobId() const
{
    return jobId_;
}

void UpgradeResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpgradeResult::getInstanceId() const
{
    return instanceId_;
}

void UpgradeResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpgradeResult::getErrorCode() const
{
    return errorCode_;
}

void UpgradeResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpgradeResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpgradeResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpgradeResult::getErrorMessage() const
{
    return errorMessage_;
}

void UpgradeResult::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool UpgradeResult::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void UpgradeResult::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


