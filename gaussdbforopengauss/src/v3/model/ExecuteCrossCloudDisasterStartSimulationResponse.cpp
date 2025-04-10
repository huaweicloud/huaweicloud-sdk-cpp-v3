

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterStartSimulationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterStartSimulationResponse::ExecuteCrossCloudDisasterStartSimulationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudDisasterStartSimulationResponse::~ExecuteCrossCloudDisasterStartSimulationResponse() = default;

void ExecuteCrossCloudDisasterStartSimulationResponse::validate()
{
}

web::json::value ExecuteCrossCloudDisasterStartSimulationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterStartSimulationResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudDisasterStartSimulationResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudDisasterStartSimulationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterStartSimulationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudDisasterStartSimulationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


