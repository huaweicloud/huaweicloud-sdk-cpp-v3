

#include "huaweicloud/gaussdb/v3/model/UpdateInstanceMonitorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateInstanceMonitorResponse::UpdateInstanceMonitorResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateInstanceMonitorResponse::~UpdateInstanceMonitorResponse() = default;

void UpdateInstanceMonitorResponse::validate()
{
}

web::json::value UpdateInstanceMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateInstanceMonitorResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstanceMonitorResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstanceMonitorResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstanceMonitorResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstanceMonitorResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


