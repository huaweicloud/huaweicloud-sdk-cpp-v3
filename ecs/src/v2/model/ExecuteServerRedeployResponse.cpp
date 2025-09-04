

#include "huaweicloud/ecs/v2/model/ExecuteServerRedeployResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ExecuteServerRedeployResponse::ExecuteServerRedeployResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteServerRedeployResponse::~ExecuteServerRedeployResponse() = default;

void ExecuteServerRedeployResponse::validate()
{
}

web::json::value ExecuteServerRedeployResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteServerRedeployResponse::fromJson(const web::json::value& val)
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


std::string ExecuteServerRedeployResponse::getJobId() const
{
    return jobId_;
}

void ExecuteServerRedeployResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteServerRedeployResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteServerRedeployResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


