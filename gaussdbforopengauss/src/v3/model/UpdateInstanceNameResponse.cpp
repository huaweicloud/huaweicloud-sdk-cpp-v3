

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateInstanceNameResponse::UpdateInstanceNameResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateInstanceNameResponse::~UpdateInstanceNameResponse() = default;

void UpdateInstanceNameResponse::validate()
{
}

web::json::value UpdateInstanceNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateInstanceNameResponse::fromJson(const web::json::value& val)
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

std::string UpdateInstanceNameResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstanceNameResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstanceNameResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstanceNameResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


