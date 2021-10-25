

#include "huaweicloud/sdrs/v1/model/ExpandReplicationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ExpandReplicationResponse::ExpandReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExpandReplicationResponse::~ExpandReplicationResponse() = default;

void ExpandReplicationResponse::validate()
{
}

web::json::value ExpandReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ExpandReplicationResponse::fromJson(const web::json::value& val)
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


std::string ExpandReplicationResponse::getJobId() const
{
    return jobId_;
}

void ExpandReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExpandReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExpandReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


