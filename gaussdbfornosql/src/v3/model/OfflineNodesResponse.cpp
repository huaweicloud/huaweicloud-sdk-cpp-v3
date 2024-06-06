

#include "huaweicloud/gaussdbfornosql/v3/model/OfflineNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




OfflineNodesResponse::OfflineNodesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

OfflineNodesResponse::~OfflineNodesResponse() = default;

void OfflineNodesResponse::validate()
{
}

web::json::value OfflineNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool OfflineNodesResponse::fromJson(const web::json::value& val)
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


std::string OfflineNodesResponse::getJobId() const
{
    return jobId_;
}

void OfflineNodesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool OfflineNodesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void OfflineNodesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


