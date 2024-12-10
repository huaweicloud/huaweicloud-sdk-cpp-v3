

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateFeaturesResponse::UpdateFeaturesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateFeaturesResponse::~UpdateFeaturesResponse() = default;

void UpdateFeaturesResponse::validate()
{
}

web::json::value UpdateFeaturesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateFeaturesResponse::fromJson(const web::json::value& val)
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


std::string UpdateFeaturesResponse::getJobId() const
{
    return jobId_;
}

void UpdateFeaturesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateFeaturesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateFeaturesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


