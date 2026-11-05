

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationPasswordResponse::ModifySupabaseApplicationPasswordResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifySupabaseApplicationPasswordResponse::~ModifySupabaseApplicationPasswordResponse() = default;

void ModifySupabaseApplicationPasswordResponse::validate()
{
}

web::json::value ModifySupabaseApplicationPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifySupabaseApplicationPasswordResponse::fromJson(const web::json::value& val)
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


std::string ModifySupabaseApplicationPasswordResponse::getJobId() const
{
    return jobId_;
}

void ModifySupabaseApplicationPasswordResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifySupabaseApplicationPasswordResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifySupabaseApplicationPasswordResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


