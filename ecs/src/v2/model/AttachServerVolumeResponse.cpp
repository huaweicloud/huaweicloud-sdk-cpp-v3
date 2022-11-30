

#include "huaweicloud/ecs/v2/model/AttachServerVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AttachServerVolumeResponse::AttachServerVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

AttachServerVolumeResponse::~AttachServerVolumeResponse() = default;

void AttachServerVolumeResponse::validate()
{
}

web::json::value AttachServerVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool AttachServerVolumeResponse::fromJson(const web::json::value& val)
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


std::string AttachServerVolumeResponse::getJobId() const
{
    return jobId_;
}

void AttachServerVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AttachServerVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AttachServerVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


