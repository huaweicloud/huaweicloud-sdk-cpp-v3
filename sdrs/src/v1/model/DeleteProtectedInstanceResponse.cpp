

#include "huaweicloud/sdrs/v1/model/DeleteProtectedInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectedInstanceResponse::DeleteProtectedInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteProtectedInstanceResponse::~DeleteProtectedInstanceResponse() = default;

void DeleteProtectedInstanceResponse::validate()
{
}

web::json::value DeleteProtectedInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteProtectedInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteProtectedInstanceResponse::getJobId() const
{
    return jobId_;
}

void DeleteProtectedInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteProtectedInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteProtectedInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


