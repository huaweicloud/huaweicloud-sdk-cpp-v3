

#include "huaweicloud/sdrs/v1/model/DetachProtectedInstanceReplicationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DetachProtectedInstanceReplicationResponse::DetachProtectedInstanceReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DetachProtectedInstanceReplicationResponse::~DetachProtectedInstanceReplicationResponse() = default;

void DetachProtectedInstanceReplicationResponse::validate()
{
}

web::json::value DetachProtectedInstanceReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DetachProtectedInstanceReplicationResponse::fromJson(const web::json::value& val)
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


std::string DetachProtectedInstanceReplicationResponse::getJobId() const
{
    return jobId_;
}

void DetachProtectedInstanceReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DetachProtectedInstanceReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DetachProtectedInstanceReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


