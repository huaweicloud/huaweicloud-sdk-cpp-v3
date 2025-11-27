

#include "huaweicloud/rds/v3/model/CreateDistributionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDistributionResponse::CreateDistributionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDistributionResponse::~CreateDistributionResponse() = default;

void CreateDistributionResponse::validate()
{
}

web::json::value CreateDistributionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateDistributionResponse::fromJson(const web::json::value& val)
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


std::string CreateDistributionResponse::getJobId() const
{
    return jobId_;
}

void CreateDistributionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDistributionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDistributionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


