

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterEndSimulationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterEndSimulationResponse::ExecuteCrossCloudDisasterEndSimulationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudDisasterEndSimulationResponse::~ExecuteCrossCloudDisasterEndSimulationResponse() = default;

void ExecuteCrossCloudDisasterEndSimulationResponse::validate()
{
}

web::json::value ExecuteCrossCloudDisasterEndSimulationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterEndSimulationResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudDisasterEndSimulationResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudDisasterEndSimulationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterEndSimulationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudDisasterEndSimulationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


