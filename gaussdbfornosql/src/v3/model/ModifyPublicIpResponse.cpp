

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyPublicIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyPublicIpResponse::ModifyPublicIpResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyPublicIpResponse::~ModifyPublicIpResponse() = default;

void ModifyPublicIpResponse::validate()
{
}

web::json::value ModifyPublicIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifyPublicIpResponse::fromJson(const web::json::value& val)
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


std::string ModifyPublicIpResponse::getJobId() const
{
    return jobId_;
}

void ModifyPublicIpResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyPublicIpResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyPublicIpResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


