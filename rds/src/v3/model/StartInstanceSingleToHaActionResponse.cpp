

#include "huaweicloud/rds/v3/model/StartInstanceSingleToHaActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceSingleToHaActionResponse::StartInstanceSingleToHaActionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartInstanceSingleToHaActionResponse::~StartInstanceSingleToHaActionResponse() = default;

void StartInstanceSingleToHaActionResponse::validate()
{
}

web::json::value StartInstanceSingleToHaActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartInstanceSingleToHaActionResponse::fromJson(const web::json::value& val)
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


std::string StartInstanceSingleToHaActionResponse::getJobId() const
{
    return jobId_;
}

void StartInstanceSingleToHaActionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartInstanceSingleToHaActionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartInstanceSingleToHaActionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


