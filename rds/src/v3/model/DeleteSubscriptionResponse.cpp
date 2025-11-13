

#include "huaweicloud/rds/v3/model/DeleteSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSubscriptionResponse::DeleteSubscriptionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteSubscriptionResponse::~DeleteSubscriptionResponse() = default;

void DeleteSubscriptionResponse::validate()
{
}

web::json::value DeleteSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteSubscriptionResponse::fromJson(const web::json::value& val)
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


std::string DeleteSubscriptionResponse::getJobId() const
{
    return jobId_;
}

void DeleteSubscriptionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteSubscriptionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteSubscriptionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


