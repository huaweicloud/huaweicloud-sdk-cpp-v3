

#include "huaweicloud/rds/v3/model/StopSupabaseApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StopSupabaseApplicationResponse::StopSupabaseApplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StopSupabaseApplicationResponse::~StopSupabaseApplicationResponse() = default;

void StopSupabaseApplicationResponse::validate()
{
}

web::json::value StopSupabaseApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StopSupabaseApplicationResponse::fromJson(const web::json::value& val)
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


std::string StopSupabaseApplicationResponse::getJobId() const
{
    return jobId_;
}

void StopSupabaseApplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopSupabaseApplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopSupabaseApplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


