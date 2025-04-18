

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRestoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterRestoreResponse::ExecuteCrossCloudDisasterRestoreResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExecuteCrossCloudDisasterRestoreResponse::~ExecuteCrossCloudDisasterRestoreResponse() = default;

void ExecuteCrossCloudDisasterRestoreResponse::validate()
{
}

web::json::value ExecuteCrossCloudDisasterRestoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterRestoreResponse::fromJson(const web::json::value& val)
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


std::string ExecuteCrossCloudDisasterRestoreResponse::getJobId() const
{
    return jobId_;
}

void ExecuteCrossCloudDisasterRestoreResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRestoreResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteCrossCloudDisasterRestoreResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


