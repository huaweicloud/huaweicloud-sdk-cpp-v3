

#include "huaweicloud/sdrs/v1/model/BatchDeleteProtectedInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchDeleteProtectedInstancesResponse::BatchDeleteProtectedInstancesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchDeleteProtectedInstancesResponse::~BatchDeleteProtectedInstancesResponse() = default;

void BatchDeleteProtectedInstancesResponse::validate()
{
}

web::json::value BatchDeleteProtectedInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchDeleteProtectedInstancesResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteProtectedInstancesResponse::getJobId() const
{
    return jobId_;
}

void BatchDeleteProtectedInstancesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchDeleteProtectedInstancesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchDeleteProtectedInstancesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


