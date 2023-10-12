

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyPortResponse::ModifyPortResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyPortResponse::~ModifyPortResponse() = default;

void ModifyPortResponse::validate()
{
}

web::json::value ModifyPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifyPortResponse::fromJson(const web::json::value& val)
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


std::string ModifyPortResponse::getJobId() const
{
    return jobId_;
}

void ModifyPortResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyPortResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyPortResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


