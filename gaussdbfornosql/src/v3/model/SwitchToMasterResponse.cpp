

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchToMasterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchToMasterResponse::SwitchToMasterResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchToMasterResponse::~SwitchToMasterResponse() = default;

void SwitchToMasterResponse::validate()
{
}

web::json::value SwitchToMasterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchToMasterResponse::fromJson(const web::json::value& val)
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


std::string SwitchToMasterResponse::getJobId() const
{
    return jobId_;
}

void SwitchToMasterResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchToMasterResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchToMasterResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


