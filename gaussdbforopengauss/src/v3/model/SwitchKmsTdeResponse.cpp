

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchKmsTdeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchKmsTdeResponse::SwitchKmsTdeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchKmsTdeResponse::~SwitchKmsTdeResponse() = default;

void SwitchKmsTdeResponse::validate()
{
}

web::json::value SwitchKmsTdeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchKmsTdeResponse::fromJson(const web::json::value& val)
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


std::string SwitchKmsTdeResponse::getJobId() const
{
    return jobId_;
}

void SwitchKmsTdeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchKmsTdeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchKmsTdeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


