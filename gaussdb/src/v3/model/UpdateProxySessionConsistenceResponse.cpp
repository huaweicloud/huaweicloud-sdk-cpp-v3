

#include "huaweicloud/gaussdb/v3/model/UpdateProxySessionConsistenceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxySessionConsistenceResponse::UpdateProxySessionConsistenceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateProxySessionConsistenceResponse::~UpdateProxySessionConsistenceResponse() = default;

void UpdateProxySessionConsistenceResponse::validate()
{
}

web::json::value UpdateProxySessionConsistenceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateProxySessionConsistenceResponse::fromJson(const web::json::value& val)
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

std::string UpdateProxySessionConsistenceResponse::getJobId() const
{
    return jobId_;
}

void UpdateProxySessionConsistenceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateProxySessionConsistenceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateProxySessionConsistenceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


