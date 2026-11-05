

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationAuthConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationAuthConfigResponse::ModifySupabaseApplicationAuthConfigResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifySupabaseApplicationAuthConfigResponse::~ModifySupabaseApplicationAuthConfigResponse() = default;

void ModifySupabaseApplicationAuthConfigResponse::validate()
{
}

web::json::value ModifySupabaseApplicationAuthConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifySupabaseApplicationAuthConfigResponse::fromJson(const web::json::value& val)
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


std::string ModifySupabaseApplicationAuthConfigResponse::getJobId() const
{
    return jobId_;
}

void ModifySupabaseApplicationAuthConfigResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifySupabaseApplicationAuthConfigResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifySupabaseApplicationAuthConfigResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


