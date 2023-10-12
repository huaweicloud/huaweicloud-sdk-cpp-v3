

#include "huaweicloud/ecs/v2/model/BatchStartServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStartServersResponse::BatchStartServersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchStartServersResponse::~BatchStartServersResponse() = default;

void BatchStartServersResponse::validate()
{
}

web::json::value BatchStartServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchStartServersResponse::fromJson(const web::json::value& val)
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


std::string BatchStartServersResponse::getJobId() const
{
    return jobId_;
}

void BatchStartServersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchStartServersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchStartServersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


