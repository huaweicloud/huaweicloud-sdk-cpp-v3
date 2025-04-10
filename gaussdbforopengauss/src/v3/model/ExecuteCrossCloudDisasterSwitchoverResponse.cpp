

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterSwitchoverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterSwitchoverResponse::ExecuteCrossCloudDisasterSwitchoverResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudDisasterSwitchoverResponse::~ExecuteCrossCloudDisasterSwitchoverResponse() = default;

void ExecuteCrossCloudDisasterSwitchoverResponse::validate()
{
}

web::json::value ExecuteCrossCloudDisasterSwitchoverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterSwitchoverResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudDisasterSwitchoverResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudDisasterSwitchoverResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterSwitchoverResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudDisasterSwitchoverResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


