

#include "huaweicloud/rds/v3/model/UpdateInstancesProxyPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstancesProxyPortResponse::UpdateInstancesProxyPortResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateInstancesProxyPortResponse::~UpdateInstancesProxyPortResponse() = default;

void UpdateInstancesProxyPortResponse::validate()
{
}

web::json::value UpdateInstancesProxyPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateInstancesProxyPortResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstancesProxyPortResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstancesProxyPortResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstancesProxyPortResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstancesProxyPortResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


