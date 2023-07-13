

#include "huaweicloud/sdrs/v1/model/StartReverseProtectionGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StartReverseProtectionGroupResponse::StartReverseProtectionGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartReverseProtectionGroupResponse::~StartReverseProtectionGroupResponse() = default;

void StartReverseProtectionGroupResponse::validate()
{
}

web::json::value StartReverseProtectionGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool StartReverseProtectionGroupResponse::fromJson(const web::json::value& val)
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

std::string StartReverseProtectionGroupResponse::getJobId() const
{
    return jobId_;
}

void StartReverseProtectionGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartReverseProtectionGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartReverseProtectionGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


