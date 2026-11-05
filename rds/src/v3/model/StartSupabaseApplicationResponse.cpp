

#include "huaweicloud/rds/v3/model/StartSupabaseApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartSupabaseApplicationResponse::StartSupabaseApplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartSupabaseApplicationResponse::~StartSupabaseApplicationResponse() = default;

void StartSupabaseApplicationResponse::validate()
{
}

web::json::value StartSupabaseApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartSupabaseApplicationResponse::fromJson(const web::json::value& val)
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


std::string StartSupabaseApplicationResponse::getJobId() const
{
    return jobId_;
}

void StartSupabaseApplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartSupabaseApplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartSupabaseApplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


