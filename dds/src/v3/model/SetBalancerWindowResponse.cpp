

#include "huaweicloud/dds/v3/model/SetBalancerWindowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetBalancerWindowResponse::SetBalancerWindowResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SetBalancerWindowResponse::~SetBalancerWindowResponse() = default;

void SetBalancerWindowResponse::validate()
{
}

web::json::value SetBalancerWindowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SetBalancerWindowResponse::fromJson(const web::json::value& val)
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


std::string SetBalancerWindowResponse::getJobId() const
{
    return jobId_;
}

void SetBalancerWindowResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SetBalancerWindowResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SetBalancerWindowResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


