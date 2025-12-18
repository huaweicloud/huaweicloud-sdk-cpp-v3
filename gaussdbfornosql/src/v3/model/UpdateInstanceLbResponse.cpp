

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceLbResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateInstanceLbResponse::UpdateInstanceLbResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateInstanceLbResponse::~UpdateInstanceLbResponse() = default;

void UpdateInstanceLbResponse::validate()
{
}

web::json::value UpdateInstanceLbResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateInstanceLbResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstanceLbResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstanceLbResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstanceLbResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstanceLbResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


