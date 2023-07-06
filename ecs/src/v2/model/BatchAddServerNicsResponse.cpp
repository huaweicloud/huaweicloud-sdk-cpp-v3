

#include "huaweicloud/ecs/v2/model/BatchAddServerNicsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerNicsResponse::BatchAddServerNicsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchAddServerNicsResponse::~BatchAddServerNicsResponse() = default;

void BatchAddServerNicsResponse::validate()
{
}

web::json::value BatchAddServerNicsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool BatchAddServerNicsResponse::fromJson(const web::json::value& val)
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

std::string BatchAddServerNicsResponse::getJobId() const
{
    return jobId_;
}

void BatchAddServerNicsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchAddServerNicsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchAddServerNicsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


