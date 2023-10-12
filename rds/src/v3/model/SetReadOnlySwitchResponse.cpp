

#include "huaweicloud/rds/v3/model/SetReadOnlySwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetReadOnlySwitchResponse::SetReadOnlySwitchResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SetReadOnlySwitchResponse::~SetReadOnlySwitchResponse() = default;

void SetReadOnlySwitchResponse::validate()
{
}

web::json::value SetReadOnlySwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SetReadOnlySwitchResponse::fromJson(const web::json::value& val)
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


std::string SetReadOnlySwitchResponse::getJobId() const
{
    return jobId_;
}

void SetReadOnlySwitchResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SetReadOnlySwitchResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SetReadOnlySwitchResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


