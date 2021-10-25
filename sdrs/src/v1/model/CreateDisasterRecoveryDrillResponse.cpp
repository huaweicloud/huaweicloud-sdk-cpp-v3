

#include "huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateDisasterRecoveryDrillResponse::CreateDisasterRecoveryDrillResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDisasterRecoveryDrillResponse::~CreateDisasterRecoveryDrillResponse() = default;

void CreateDisasterRecoveryDrillResponse::validate()
{
}

web::json::value CreateDisasterRecoveryDrillResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateDisasterRecoveryDrillResponse::fromJson(const web::json::value& val)
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


std::string CreateDisasterRecoveryDrillResponse::getJobId() const
{
    return jobId_;
}

void CreateDisasterRecoveryDrillResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDisasterRecoveryDrillResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDisasterRecoveryDrillResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


