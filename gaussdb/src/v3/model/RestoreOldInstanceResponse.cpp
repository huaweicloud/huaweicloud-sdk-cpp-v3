

#include "huaweicloud/gaussdb/v3/model/RestoreOldInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestoreOldInstanceResponse::RestoreOldInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreOldInstanceResponse::~RestoreOldInstanceResponse() = default;

void RestoreOldInstanceResponse::validate()
{
}

web::json::value RestoreOldInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RestoreOldInstanceResponse::fromJson(const web::json::value& val)
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

std::string RestoreOldInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestoreOldInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreOldInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreOldInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


