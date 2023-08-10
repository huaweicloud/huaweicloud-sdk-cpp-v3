

#include "huaweicloud/gaussdb/v3/model/UpdateProxyPortResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyPortResponse::UpdateProxyPortResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateProxyPortResponse::~UpdateProxyPortResponse() = default;

void UpdateProxyPortResponse::validate()
{
}

web::json::value UpdateProxyPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateProxyPortResponse::fromJson(const web::json::value& val)
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

std::string UpdateProxyPortResponse::getJobId() const
{
    return jobId_;
}

void UpdateProxyPortResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateProxyPortResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateProxyPortResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


