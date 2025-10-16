

#include "huaweicloud/rds/v3/model/ModifyPublicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyPublicationResponse::ModifyPublicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyPublicationResponse::~ModifyPublicationResponse() = default;

void ModifyPublicationResponse::validate()
{
}

web::json::value ModifyPublicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifyPublicationResponse::fromJson(const web::json::value& val)
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


std::string ModifyPublicationResponse::getJobId() const
{
    return jobId_;
}

void ModifyPublicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyPublicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyPublicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


