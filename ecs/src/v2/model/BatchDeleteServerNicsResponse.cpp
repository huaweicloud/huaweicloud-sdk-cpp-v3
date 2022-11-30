

#include "huaweicloud/ecs/v2/model/BatchDeleteServerNicsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerNicsResponse::BatchDeleteServerNicsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchDeleteServerNicsResponse::~BatchDeleteServerNicsResponse() = default;

void BatchDeleteServerNicsResponse::validate()
{
}

web::json::value BatchDeleteServerNicsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool BatchDeleteServerNicsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteServerNicsResponse::getJobId() const
{
    return jobId_;
}

void BatchDeleteServerNicsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchDeleteServerNicsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchDeleteServerNicsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


