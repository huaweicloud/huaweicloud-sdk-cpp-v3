

#include "huaweicloud/rds/v3/model/DeleteSupabaseApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSupabaseApplicationResponse::DeleteSupabaseApplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteSupabaseApplicationResponse::~DeleteSupabaseApplicationResponse() = default;

void DeleteSupabaseApplicationResponse::validate()
{
}

web::json::value DeleteSupabaseApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteSupabaseApplicationResponse::fromJson(const web::json::value& val)
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


std::string DeleteSupabaseApplicationResponse::getJobId() const
{
    return jobId_;
}

void DeleteSupabaseApplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteSupabaseApplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteSupabaseApplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


