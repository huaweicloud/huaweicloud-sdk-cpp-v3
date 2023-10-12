

#include "huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchCreateProtectedInstancesResponse::BatchCreateProtectedInstancesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchCreateProtectedInstancesResponse::~BatchCreateProtectedInstancesResponse() = default;

void BatchCreateProtectedInstancesResponse::validate()
{
}

web::json::value BatchCreateProtectedInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchCreateProtectedInstancesResponse::fromJson(const web::json::value& val)
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


std::string BatchCreateProtectedInstancesResponse::getJobId() const
{
    return jobId_;
}

void BatchCreateProtectedInstancesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchCreateProtectedInstancesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchCreateProtectedInstancesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


