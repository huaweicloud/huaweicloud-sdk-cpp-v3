

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateMysqlCompatibilityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateMysqlCompatibilityResponse::UpdateMysqlCompatibilityResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateMysqlCompatibilityResponse::~UpdateMysqlCompatibilityResponse() = default;

void UpdateMysqlCompatibilityResponse::validate()
{
}

web::json::value UpdateMysqlCompatibilityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateMysqlCompatibilityResponse::fromJson(const web::json::value& val)
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


std::string UpdateMysqlCompatibilityResponse::getJobId() const
{
    return jobId_;
}

void UpdateMysqlCompatibilityResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateMysqlCompatibilityResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateMysqlCompatibilityResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


