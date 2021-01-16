

#include "huaweicloud/ecs/v2/model/BatchRebootServersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchRebootServersResponse::BatchRebootServersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchRebootServersResponse::~BatchRebootServersResponse() = default;

void BatchRebootServersResponse::validate()
{
}

web::json::value BatchRebootServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool BatchRebootServersResponse::fromJson(const web::json::value& val)
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


std::string BatchRebootServersResponse::getJobId() const
{
    return jobId_;
}

void BatchRebootServersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchRebootServersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchRebootServersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


