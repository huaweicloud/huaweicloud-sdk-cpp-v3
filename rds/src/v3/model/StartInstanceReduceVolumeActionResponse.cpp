

#include "huaweicloud/rds/v3/model/StartInstanceReduceVolumeActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceReduceVolumeActionResponse::StartInstanceReduceVolumeActionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartInstanceReduceVolumeActionResponse::~StartInstanceReduceVolumeActionResponse() = default;

void StartInstanceReduceVolumeActionResponse::validate()
{
}

web::json::value StartInstanceReduceVolumeActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartInstanceReduceVolumeActionResponse::fromJson(const web::json::value& val)
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


std::string StartInstanceReduceVolumeActionResponse::getJobId() const
{
    return jobId_;
}

void StartInstanceReduceVolumeActionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartInstanceReduceVolumeActionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartInstanceReduceVolumeActionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


