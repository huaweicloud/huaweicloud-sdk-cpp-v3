

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDisasterRecoveryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDisasterRecoveryResponse::DeleteDisasterRecoveryResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteDisasterRecoveryResponse::~DeleteDisasterRecoveryResponse() = default;

void DeleteDisasterRecoveryResponse::validate()
{
}

web::json::value DeleteDisasterRecoveryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteDisasterRecoveryResponse::fromJson(const web::json::value& val)
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


std::string DeleteDisasterRecoveryResponse::getJobId() const
{
    return jobId_;
}

void DeleteDisasterRecoveryResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDisasterRecoveryResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDisasterRecoveryResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


