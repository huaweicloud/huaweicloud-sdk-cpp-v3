

#include "huaweicloud/sdrs/v1/model/AddProtectedInstanceNicResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




AddProtectedInstanceNicResponse::AddProtectedInstanceNicResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

AddProtectedInstanceNicResponse::~AddProtectedInstanceNicResponse() = default;

void AddProtectedInstanceNicResponse::validate()
{
}

web::json::value AddProtectedInstanceNicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool AddProtectedInstanceNicResponse::fromJson(const web::json::value& val)
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

std::string AddProtectedInstanceNicResponse::getJobId() const
{
    return jobId_;
}

void AddProtectedInstanceNicResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AddProtectedInstanceNicResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AddProtectedInstanceNicResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


