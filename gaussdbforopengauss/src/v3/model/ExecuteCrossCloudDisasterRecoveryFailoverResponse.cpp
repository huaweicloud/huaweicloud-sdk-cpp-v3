

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRecoveryFailoverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterRecoveryFailoverResponse::ExecuteCrossCloudDisasterRecoveryFailoverResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudDisasterRecoveryFailoverResponse::~ExecuteCrossCloudDisasterRecoveryFailoverResponse() = default;

void ExecuteCrossCloudDisasterRecoveryFailoverResponse::validate()
{
}

web::json::value ExecuteCrossCloudDisasterRecoveryFailoverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterRecoveryFailoverResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudDisasterRecoveryFailoverResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRecoveryFailoverResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


