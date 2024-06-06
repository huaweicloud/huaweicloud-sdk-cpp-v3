

#include "huaweicloud/gaussdb/v3/model/RestartProxyInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartProxyInstanceResponse::RestartProxyInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestartProxyInstanceResponse::~RestartProxyInstanceResponse() = default;

void RestartProxyInstanceResponse::validate()
{
}

web::json::value RestartProxyInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestartProxyInstanceResponse::fromJson(const web::json::value& val)
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


std::string RestartProxyInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestartProxyInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartProxyInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartProxyInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


