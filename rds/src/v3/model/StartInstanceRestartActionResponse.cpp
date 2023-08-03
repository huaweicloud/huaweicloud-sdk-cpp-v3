

#include "huaweicloud/rds/v3/model/StartInstanceRestartActionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceRestartActionResponse::StartInstanceRestartActionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartInstanceRestartActionResponse::~StartInstanceRestartActionResponse() = default;

void StartInstanceRestartActionResponse::validate()
{
}

web::json::value StartInstanceRestartActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool StartInstanceRestartActionResponse::fromJson(const web::json::value& val)
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

std::string StartInstanceRestartActionResponse::getJobId() const
{
    return jobId_;
}

void StartInstanceRestartActionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartInstanceRestartActionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartInstanceRestartActionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


