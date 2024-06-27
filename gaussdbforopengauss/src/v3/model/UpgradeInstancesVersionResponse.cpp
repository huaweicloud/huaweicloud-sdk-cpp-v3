

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeInstancesVersionResponse::UpgradeInstancesVersionResponse()
{
    jobIdsIsSet_ = false;
    succeededNum_ = 0;
    succeededNumIsSet_ = false;
    failedNum_ = 0;
    failedNumIsSet_ = false;
    failedInstanceIdsIsSet_ = false;
    errorMessagesIsSet_ = false;
}

UpgradeInstancesVersionResponse::~UpgradeInstancesVersionResponse() = default;

void UpgradeInstancesVersionResponse::validate()
{
}

web::json::value UpgradeInstancesVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }
    if(succeededNumIsSet_) {
        val[utility::conversions::to_string_t("succeeded_num")] = ModelBase::toJson(succeededNum_);
    }
    if(failedNumIsSet_) {
        val[utility::conversions::to_string_t("failed_num")] = ModelBase::toJson(failedNum_);
    }
    if(failedInstanceIdsIsSet_) {
        val[utility::conversions::to_string_t("failed_instance_ids")] = ModelBase::toJson(failedInstanceIds_);
    }
    if(errorMessagesIsSet_) {
        val[utility::conversions::to_string_t("error_messages")] = ModelBase::toJson(errorMessages_);
    }

    return val;
}
bool UpgradeInstancesVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("succeeded_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("succeeded_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSucceededNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_messages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_messages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessages(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UpgradeInstancesVersionResponse::getJobIds()
{
    return jobIds_;
}

void UpgradeInstancesVersionResponse::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool UpgradeInstancesVersionResponse::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void UpgradeInstancesVersionResponse::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

int32_t UpgradeInstancesVersionResponse::getSucceededNum() const
{
    return succeededNum_;
}

void UpgradeInstancesVersionResponse::setSucceededNum(int32_t value)
{
    succeededNum_ = value;
    succeededNumIsSet_ = true;
}

bool UpgradeInstancesVersionResponse::succeededNumIsSet() const
{
    return succeededNumIsSet_;
}

void UpgradeInstancesVersionResponse::unsetsucceededNum()
{
    succeededNumIsSet_ = false;
}

int32_t UpgradeInstancesVersionResponse::getFailedNum() const
{
    return failedNum_;
}

void UpgradeInstancesVersionResponse::setFailedNum(int32_t value)
{
    failedNum_ = value;
    failedNumIsSet_ = true;
}

bool UpgradeInstancesVersionResponse::failedNumIsSet() const
{
    return failedNumIsSet_;
}

void UpgradeInstancesVersionResponse::unsetfailedNum()
{
    failedNumIsSet_ = false;
}

std::vector<std::string>& UpgradeInstancesVersionResponse::getFailedInstanceIds()
{
    return failedInstanceIds_;
}

void UpgradeInstancesVersionResponse::setFailedInstanceIds(const std::vector<std::string>& value)
{
    failedInstanceIds_ = value;
    failedInstanceIdsIsSet_ = true;
}

bool UpgradeInstancesVersionResponse::failedInstanceIdsIsSet() const
{
    return failedInstanceIdsIsSet_;
}

void UpgradeInstancesVersionResponse::unsetfailedInstanceIds()
{
    failedInstanceIdsIsSet_ = false;
}

std::vector<std::string>& UpgradeInstancesVersionResponse::getErrorMessages()
{
    return errorMessages_;
}

void UpgradeInstancesVersionResponse::setErrorMessages(const std::vector<std::string>& value)
{
    errorMessages_ = value;
    errorMessagesIsSet_ = true;
}

bool UpgradeInstancesVersionResponse::errorMessagesIsSet() const
{
    return errorMessagesIsSet_;
}

void UpgradeInstancesVersionResponse::unseterrorMessages()
{
    errorMessagesIsSet_ = false;
}

}
}
}
}
}


