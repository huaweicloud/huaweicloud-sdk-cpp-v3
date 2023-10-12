

#include "huaweicloud/sdrs/v1/model/StopProtectionGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StopProtectionGroupResponse::StopProtectionGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StopProtectionGroupResponse::~StopProtectionGroupResponse() = default;

void StopProtectionGroupResponse::validate()
{
}

web::json::value StopProtectionGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StopProtectionGroupResponse::fromJson(const web::json::value& val)
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


std::string StopProtectionGroupResponse::getJobId() const
{
    return jobId_;
}

void StopProtectionGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopProtectionGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopProtectionGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


