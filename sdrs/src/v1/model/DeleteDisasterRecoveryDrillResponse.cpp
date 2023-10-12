

#include "huaweicloud/sdrs/v1/model/DeleteDisasterRecoveryDrillResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteDisasterRecoveryDrillResponse::DeleteDisasterRecoveryDrillResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteDisasterRecoveryDrillResponse::~DeleteDisasterRecoveryDrillResponse() = default;

void DeleteDisasterRecoveryDrillResponse::validate()
{
}

web::json::value DeleteDisasterRecoveryDrillResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteDisasterRecoveryDrillResponse::fromJson(const web::json::value& val)
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


std::string DeleteDisasterRecoveryDrillResponse::getJobId() const
{
    return jobId_;
}

void DeleteDisasterRecoveryDrillResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDisasterRecoveryDrillResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDisasterRecoveryDrillResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


