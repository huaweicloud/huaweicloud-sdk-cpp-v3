

#include "huaweicloud/ecs/v2/model/BatchStopServersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStopServersResponse::BatchStopServersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchStopServersResponse::~BatchStopServersResponse() = default;

void BatchStopServersResponse::validate()
{
}

web::json::value BatchStopServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool BatchStopServersResponse::fromJson(const web::json::value& val)
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

std::string BatchStopServersResponse::getJobId() const
{
    return jobId_;
}

void BatchStopServersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchStopServersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchStopServersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


