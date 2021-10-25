

#include "huaweicloud/sdrs/v1/model/ResizeProtectedInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ResizeProtectedInstanceResponse::ResizeProtectedInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResizeProtectedInstanceResponse::~ResizeProtectedInstanceResponse() = default;

void ResizeProtectedInstanceResponse::validate()
{
}

web::json::value ResizeProtectedInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ResizeProtectedInstanceResponse::fromJson(const web::json::value& val)
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


std::string ResizeProtectedInstanceResponse::getJobId() const
{
    return jobId_;
}

void ResizeProtectedInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeProtectedInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeProtectedInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


