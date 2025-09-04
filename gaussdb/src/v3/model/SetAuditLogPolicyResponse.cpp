

#include "huaweicloud/gaussdb/v3/model/SetAuditLogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetAuditLogPolicyResponse::SetAuditLogPolicyResponse()
{
    result_ = "";
    resultIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

SetAuditLogPolicyResponse::~SetAuditLogPolicyResponse() = default;

void SetAuditLogPolicyResponse::validate()
{
}

web::json::value SetAuditLogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SetAuditLogPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string SetAuditLogPolicyResponse::getResult() const
{
    return result_;
}

void SetAuditLogPolicyResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetAuditLogPolicyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetAuditLogPolicyResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string SetAuditLogPolicyResponse::getJobId() const
{
    return jobId_;
}

void SetAuditLogPolicyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SetAuditLogPolicyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SetAuditLogPolicyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


