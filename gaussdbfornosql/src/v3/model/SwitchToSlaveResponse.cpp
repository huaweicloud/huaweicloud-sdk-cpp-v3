

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchToSlaveResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchToSlaveResponse::SwitchToSlaveResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchToSlaveResponse::~SwitchToSlaveResponse() = default;

void SwitchToSlaveResponse::validate()
{
}

web::json::value SwitchToSlaveResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool SwitchToSlaveResponse::fromJson(const web::json::value& val)
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

std::string SwitchToSlaveResponse::getJobId() const
{
    return jobId_;
}

void SwitchToSlaveResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchToSlaveResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchToSlaveResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


