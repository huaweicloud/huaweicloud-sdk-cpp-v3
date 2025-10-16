

#include "huaweicloud/rds/v3/model/CreateSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSubscriptionResponse::CreateSubscriptionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateSubscriptionResponse::~CreateSubscriptionResponse() = default;

void CreateSubscriptionResponse::validate()
{
}

web::json::value CreateSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateSubscriptionResponse::fromJson(const web::json::value& val)
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


std::string CreateSubscriptionResponse::getJobId() const
{
    return jobId_;
}

void CreateSubscriptionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateSubscriptionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateSubscriptionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


