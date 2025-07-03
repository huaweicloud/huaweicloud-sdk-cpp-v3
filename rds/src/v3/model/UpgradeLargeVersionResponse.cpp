

#include "huaweicloud/rds/v3/model/UpgradeLargeVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeLargeVersionResponse::UpgradeLargeVersionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpgradeLargeVersionResponse::~UpgradeLargeVersionResponse() = default;

void UpgradeLargeVersionResponse::validate()
{
}

web::json::value UpgradeLargeVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpgradeLargeVersionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpgradeLargeVersionResponse::getJobId() const
{
    return jobId_;
}

void UpgradeLargeVersionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeLargeVersionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeLargeVersionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpgradeLargeVersionResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpgradeLargeVersionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpgradeLargeVersionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpgradeLargeVersionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


