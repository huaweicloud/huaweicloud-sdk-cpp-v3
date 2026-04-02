

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifySecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifySecurityGroupResponse::ModifySecurityGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifySecurityGroupResponse::~ModifySecurityGroupResponse() = default;

void ModifySecurityGroupResponse::validate()
{
}

web::json::value ModifySecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifySecurityGroupResponse::fromJson(const web::json::value& val)
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


std::string ModifySecurityGroupResponse::getJobId() const
{
    return jobId_;
}

void ModifySecurityGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifySecurityGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifySecurityGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


