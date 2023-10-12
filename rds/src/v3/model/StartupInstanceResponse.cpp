

#include "huaweicloud/rds/v3/model/StartupInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartupInstanceResponse::StartupInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartupInstanceResponse::~StartupInstanceResponse() = default;

void StartupInstanceResponse::validate()
{
}

web::json::value StartupInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartupInstanceResponse::fromJson(const web::json::value& val)
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


std::string StartupInstanceResponse::getJobId() const
{
    return jobId_;
}

void StartupInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartupInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartupInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


