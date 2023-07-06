

#include "huaweicloud/sdrs/v1/model/StartFailoverProtectionGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StartFailoverProtectionGroupResponse::StartFailoverProtectionGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartFailoverProtectionGroupResponse::~StartFailoverProtectionGroupResponse() = default;

void StartFailoverProtectionGroupResponse::validate()
{
}

web::json::value StartFailoverProtectionGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool StartFailoverProtectionGroupResponse::fromJson(const web::json::value& val)
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

std::string StartFailoverProtectionGroupResponse::getJobId() const
{
    return jobId_;
}

void StartFailoverProtectionGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartFailoverProtectionGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartFailoverProtectionGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


