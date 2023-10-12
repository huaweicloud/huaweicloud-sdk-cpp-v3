

#include "huaweicloud/rds/v3/model/ModifyCollationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyCollationResponse::ModifyCollationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyCollationResponse::~ModifyCollationResponse() = default;

void ModifyCollationResponse::validate()
{
}

web::json::value ModifyCollationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifyCollationResponse::fromJson(const web::json::value& val)
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


std::string ModifyCollationResponse::getJobId() const
{
    return jobId_;
}

void ModifyCollationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyCollationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyCollationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


