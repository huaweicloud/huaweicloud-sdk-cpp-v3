

#include "huaweicloud/rds/v3/model/StopInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StopInstanceResponse::StopInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StopInstanceResponse::~StopInstanceResponse() = default;

void StopInstanceResponse::validate()
{
}

web::json::value StopInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool StopInstanceResponse::fromJson(const web::json::value& val)
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

std::string StopInstanceResponse::getJobId() const
{
    return jobId_;
}

void StopInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


