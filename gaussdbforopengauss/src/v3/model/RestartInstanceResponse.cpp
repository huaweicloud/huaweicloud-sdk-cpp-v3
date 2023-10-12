

#include "huaweicloud/gaussdbforopengauss/v3/model/RestartInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RestartInstanceResponse::RestartInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestartInstanceResponse::~RestartInstanceResponse() = default;

void RestartInstanceResponse::validate()
{
}

web::json::value RestartInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestartInstanceResponse::fromJson(const web::json::value& val)
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


std::string RestartInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestartInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


