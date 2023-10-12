

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchConfigurationResponse::SwitchConfigurationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchConfigurationResponse::~SwitchConfigurationResponse() = default;

void SwitchConfigurationResponse::validate()
{
}

web::json::value SwitchConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchConfigurationResponse::fromJson(const web::json::value& val)
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


std::string SwitchConfigurationResponse::getJobId() const
{
    return jobId_;
}

void SwitchConfigurationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchConfigurationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchConfigurationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


