

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchOverDisasterRecoveryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchOverDisasterRecoveryResponse::SwitchOverDisasterRecoveryResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchOverDisasterRecoveryResponse::~SwitchOverDisasterRecoveryResponse() = default;

void SwitchOverDisasterRecoveryResponse::validate()
{
}

web::json::value SwitchOverDisasterRecoveryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchOverDisasterRecoveryResponse::fromJson(const web::json::value& val)
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


std::string SwitchOverDisasterRecoveryResponse::getJobId() const
{
    return jobId_;
}

void SwitchOverDisasterRecoveryResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchOverDisasterRecoveryResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchOverDisasterRecoveryResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


