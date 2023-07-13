

#include "huaweicloud/ecs/v2/model/DetachServerVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DetachServerVolumeResponse::DetachServerVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DetachServerVolumeResponse::~DetachServerVolumeResponse() = default;

void DetachServerVolumeResponse::validate()
{
}

web::json::value DetachServerVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DetachServerVolumeResponse::fromJson(const web::json::value& val)
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

std::string DetachServerVolumeResponse::getJobId() const
{
    return jobId_;
}

void DetachServerVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DetachServerVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DetachServerVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


