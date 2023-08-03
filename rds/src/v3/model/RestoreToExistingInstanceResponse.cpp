

#include "huaweicloud/rds/v3/model/RestoreToExistingInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreToExistingInstanceResponse::RestoreToExistingInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreToExistingInstanceResponse::~RestoreToExistingInstanceResponse() = default;

void RestoreToExistingInstanceResponse::validate()
{
}

web::json::value RestoreToExistingInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RestoreToExistingInstanceResponse::fromJson(const web::json::value& val)
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

std::string RestoreToExistingInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestoreToExistingInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreToExistingInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreToExistingInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


