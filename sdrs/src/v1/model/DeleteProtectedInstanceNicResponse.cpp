

#include "huaweicloud/sdrs/v1/model/DeleteProtectedInstanceNicResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectedInstanceNicResponse::DeleteProtectedInstanceNicResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteProtectedInstanceNicResponse::~DeleteProtectedInstanceNicResponse() = default;

void DeleteProtectedInstanceNicResponse::validate()
{
}

web::json::value DeleteProtectedInstanceNicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteProtectedInstanceNicResponse::fromJson(const web::json::value& val)
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

std::string DeleteProtectedInstanceNicResponse::getJobId() const
{
    return jobId_;
}

void DeleteProtectedInstanceNicResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteProtectedInstanceNicResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteProtectedInstanceNicResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


