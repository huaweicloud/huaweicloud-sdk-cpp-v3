

#include "huaweicloud/gaussdbforopengauss/v3/model/StartMysqlCompatibilityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StartMysqlCompatibilityResponse::StartMysqlCompatibilityResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartMysqlCompatibilityResponse::~StartMysqlCompatibilityResponse() = default;

void StartMysqlCompatibilityResponse::validate()
{
}

web::json::value StartMysqlCompatibilityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartMysqlCompatibilityResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StartMysqlCompatibilityResponse::getJobId() const
{
    return jobId_;
}

void StartMysqlCompatibilityResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartMysqlCompatibilityResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartMysqlCompatibilityResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


