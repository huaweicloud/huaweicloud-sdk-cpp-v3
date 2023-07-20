

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateClientNetworkResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateClientNetworkResponse::UpdateClientNetworkResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateClientNetworkResponse::~UpdateClientNetworkResponse() = default;

void UpdateClientNetworkResponse::validate()
{
}

web::json::value UpdateClientNetworkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateClientNetworkResponse::fromJson(const web::json::value& val)
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

std::string UpdateClientNetworkResponse::getJobId() const
{
    return jobId_;
}

void UpdateClientNetworkResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateClientNetworkResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateClientNetworkResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


