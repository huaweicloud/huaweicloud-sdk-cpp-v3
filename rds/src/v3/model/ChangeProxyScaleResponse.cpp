

#include "huaweicloud/rds/v3/model/ChangeProxyScaleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangeProxyScaleResponse::ChangeProxyScaleResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ChangeProxyScaleResponse::~ChangeProxyScaleResponse() = default;

void ChangeProxyScaleResponse::validate()
{
}

web::json::value ChangeProxyScaleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ChangeProxyScaleResponse::fromJson(const web::json::value& val)
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

std::string ChangeProxyScaleResponse::getJobId() const
{
    return jobId_;
}

void ChangeProxyScaleResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeProxyScaleResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeProxyScaleResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


