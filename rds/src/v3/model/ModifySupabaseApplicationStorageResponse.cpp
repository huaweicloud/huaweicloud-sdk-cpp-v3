

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationStorageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationStorageResponse::ModifySupabaseApplicationStorageResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifySupabaseApplicationStorageResponse::~ModifySupabaseApplicationStorageResponse() = default;

void ModifySupabaseApplicationStorageResponse::validate()
{
}

web::json::value ModifySupabaseApplicationStorageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifySupabaseApplicationStorageResponse::fromJson(const web::json::value& val)
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


std::string ModifySupabaseApplicationStorageResponse::getJobId() const
{
    return jobId_;
}

void ModifySupabaseApplicationStorageResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifySupabaseApplicationStorageResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifySupabaseApplicationStorageResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


