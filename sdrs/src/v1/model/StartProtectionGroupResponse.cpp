

#include "huaweicloud/sdrs/v1/model/StartProtectionGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StartProtectionGroupResponse::StartProtectionGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartProtectionGroupResponse::~StartProtectionGroupResponse() = default;

void StartProtectionGroupResponse::validate()
{
}

web::json::value StartProtectionGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartProtectionGroupResponse::fromJson(const web::json::value& val)
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


std::string StartProtectionGroupResponse::getJobId() const
{
    return jobId_;
}

void StartProtectionGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartProtectionGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartProtectionGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


