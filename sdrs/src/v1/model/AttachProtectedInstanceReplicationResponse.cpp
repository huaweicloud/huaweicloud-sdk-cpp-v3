

#include "huaweicloud/sdrs/v1/model/AttachProtectedInstanceReplicationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




AttachProtectedInstanceReplicationResponse::AttachProtectedInstanceReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

AttachProtectedInstanceReplicationResponse::~AttachProtectedInstanceReplicationResponse() = default;

void AttachProtectedInstanceReplicationResponse::validate()
{
}

web::json::value AttachProtectedInstanceReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool AttachProtectedInstanceReplicationResponse::fromJson(const web::json::value& val)
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


std::string AttachProtectedInstanceReplicationResponse::getJobId() const
{
    return jobId_;
}

void AttachProtectedInstanceReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AttachProtectedInstanceReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AttachProtectedInstanceReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


