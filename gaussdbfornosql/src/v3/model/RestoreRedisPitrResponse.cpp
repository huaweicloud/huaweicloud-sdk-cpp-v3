

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreRedisPitrResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreRedisPitrResponse::RestoreRedisPitrResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreRedisPitrResponse::~RestoreRedisPitrResponse() = default;

void RestoreRedisPitrResponse::validate()
{
}

web::json::value RestoreRedisPitrResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestoreRedisPitrResponse::fromJson(const web::json::value& val)
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


std::string RestoreRedisPitrResponse::getJobId() const
{
    return jobId_;
}

void RestoreRedisPitrResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreRedisPitrResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreRedisPitrResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


