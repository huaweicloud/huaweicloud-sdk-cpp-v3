

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchSetBackupPolicyResponse::BatchSetBackupPolicyResponse()
{
    succeededNum_ = 0;
    succeededNumIsSet_ = false;
    failedNum_ = 0;
    failedNumIsSet_ = false;
    failedInstancesIsSet_ = false;
}

BatchSetBackupPolicyResponse::~BatchSetBackupPolicyResponse() = default;

void BatchSetBackupPolicyResponse::validate()
{
}

web::json::value BatchSetBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(succeededNumIsSet_) {
        val[utility::conversions::to_string_t("succeeded_num")] = ModelBase::toJson(succeededNum_);
    }
    if(failedNumIsSet_) {
        val[utility::conversions::to_string_t("failed_num")] = ModelBase::toJson(failedNum_);
    }
    if(failedInstancesIsSet_) {
        val[utility::conversions::to_string_t("failed_instances")] = ModelBase::toJson(failedInstances_);
    }

    return val;
}
bool BatchSetBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("failed_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchSetBackupPolicyFailedRecordResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedInstances(refVal);
        }
    }
    return ok;
}


int32_t BatchSetBackupPolicyResponse::getSucceededNum() const
{
    return succeededNum_;
}

void BatchSetBackupPolicyResponse::setSucceededNum(int32_t value)
{
    succeededNum_ = value;
    succeededNumIsSet_ = true;
}

bool BatchSetBackupPolicyResponse::succeededNumIsSet() const
{
    return succeededNumIsSet_;
}

void BatchSetBackupPolicyResponse::unsetsucceededNum()
{
    succeededNumIsSet_ = false;
}

int32_t BatchSetBackupPolicyResponse::getFailedNum() const
{
    return failedNum_;
}

void BatchSetBackupPolicyResponse::setFailedNum(int32_t value)
{
    failedNum_ = value;
    failedNumIsSet_ = true;
}

bool BatchSetBackupPolicyResponse::failedNumIsSet() const
{
    return failedNumIsSet_;
}

void BatchSetBackupPolicyResponse::unsetfailedNum()
{
    failedNumIsSet_ = false;
}

std::vector<BatchSetBackupPolicyFailedRecordResult>& BatchSetBackupPolicyResponse::getFailedInstances()
{
    return failedInstances_;
}

void BatchSetBackupPolicyResponse::setFailedInstances(const std::vector<BatchSetBackupPolicyFailedRecordResult>& value)
{
    failedInstances_ = value;
    failedInstancesIsSet_ = true;
}

bool BatchSetBackupPolicyResponse::failedInstancesIsSet() const
{
    return failedInstancesIsSet_;
}

void BatchSetBackupPolicyResponse::unsetfailedInstances()
{
    failedInstancesIsSet_ = false;
}

}
}
}
}
}


