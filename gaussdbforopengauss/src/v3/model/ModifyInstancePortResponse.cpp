

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyInstancePortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyInstancePortResponse::ModifyInstancePortResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyInstancePortResponse::~ModifyInstancePortResponse() = default;

void ModifyInstancePortResponse::validate()
{
}

web::json::value ModifyInstancePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifyInstancePortResponse::fromJson(const web::json::value& val)
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


std::string ModifyInstancePortResponse::getJobId() const
{
    return jobId_;
}

void ModifyInstancePortResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyInstancePortResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyInstancePortResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


