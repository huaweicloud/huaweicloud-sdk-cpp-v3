

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreRedisDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreRedisDataResponse::RestoreRedisDataResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreRedisDataResponse::~RestoreRedisDataResponse() = default;

void RestoreRedisDataResponse::validate()
{
}

web::json::value RestoreRedisDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestoreRedisDataResponse::fromJson(const web::json::value& val)
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


std::string RestoreRedisDataResponse::getJobId() const
{
    return jobId_;
}

void RestoreRedisDataResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreRedisDataResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreRedisDataResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


