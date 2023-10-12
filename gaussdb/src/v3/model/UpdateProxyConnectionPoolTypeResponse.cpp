

#include "huaweicloud/gaussdb/v3/model/UpdateProxyConnectionPoolTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyConnectionPoolTypeResponse::UpdateProxyConnectionPoolTypeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateProxyConnectionPoolTypeResponse::~UpdateProxyConnectionPoolTypeResponse() = default;

void UpdateProxyConnectionPoolTypeResponse::validate()
{
}

web::json::value UpdateProxyConnectionPoolTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateProxyConnectionPoolTypeResponse::fromJson(const web::json::value& val)
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


std::string UpdateProxyConnectionPoolTypeResponse::getJobId() const
{
    return jobId_;
}

void UpdateProxyConnectionPoolTypeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateProxyConnectionPoolTypeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateProxyConnectionPoolTypeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


