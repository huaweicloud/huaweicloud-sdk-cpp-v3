

#include "huaweicloud/gaussdb/v3/model/UpdateTaurusNodeDataIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateTaurusNodeDataIpResponse::UpdateTaurusNodeDataIpResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateTaurusNodeDataIpResponse::~UpdateTaurusNodeDataIpResponse() = default;

void UpdateTaurusNodeDataIpResponse::validate()
{
}

web::json::value UpdateTaurusNodeDataIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateTaurusNodeDataIpResponse::fromJson(const web::json::value& val)
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


std::string UpdateTaurusNodeDataIpResponse::getJobId() const
{
    return jobId_;
}

void UpdateTaurusNodeDataIpResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateTaurusNodeDataIpResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateTaurusNodeDataIpResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


