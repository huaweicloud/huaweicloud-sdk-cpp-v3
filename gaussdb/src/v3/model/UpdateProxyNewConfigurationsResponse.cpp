

#include "huaweicloud/gaussdb/v3/model/UpdateProxyNewConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyNewConfigurationsResponse::UpdateProxyNewConfigurationsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateProxyNewConfigurationsResponse::~UpdateProxyNewConfigurationsResponse() = default;

void UpdateProxyNewConfigurationsResponse::validate()
{
}

web::json::value UpdateProxyNewConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateProxyNewConfigurationsResponse::fromJson(const web::json::value& val)
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


std::string UpdateProxyNewConfigurationsResponse::getJobId() const
{
    return jobId_;
}

void UpdateProxyNewConfigurationsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateProxyNewConfigurationsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateProxyNewConfigurationsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


