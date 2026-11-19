

#include "huaweicloud/gaussdbforopengauss/v3/model/ApplyConfigurationWithEntitiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ApplyConfigurationWithEntitiesResponse::ApplyConfigurationWithEntitiesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ApplyConfigurationWithEntitiesResponse::~ApplyConfigurationWithEntitiesResponse() = default;

void ApplyConfigurationWithEntitiesResponse::validate()
{
}

web::json::value ApplyConfigurationWithEntitiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ApplyConfigurationWithEntitiesResponse::fromJson(const web::json::value& val)
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


std::string ApplyConfigurationWithEntitiesResponse::getJobId() const
{
    return jobId_;
}

void ApplyConfigurationWithEntitiesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ApplyConfigurationWithEntitiesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ApplyConfigurationWithEntitiesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


