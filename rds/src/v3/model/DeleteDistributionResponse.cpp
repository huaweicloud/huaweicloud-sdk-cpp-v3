

#include "huaweicloud/rds/v3/model/DeleteDistributionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteDistributionResponse::DeleteDistributionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteDistributionResponse::~DeleteDistributionResponse() = default;

void DeleteDistributionResponse::validate()
{
}

web::json::value DeleteDistributionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteDistributionResponse::fromJson(const web::json::value& val)
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


std::string DeleteDistributionResponse::getJobId() const
{
    return jobId_;
}

void DeleteDistributionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDistributionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDistributionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


