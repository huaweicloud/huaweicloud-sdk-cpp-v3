

#include "huaweicloud/gaussdb/v3/model/RestartStarrocksNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartStarrocksNodeResponse::RestartStarrocksNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestartStarrocksNodeResponse::~RestartStarrocksNodeResponse() = default;

void RestartStarrocksNodeResponse::validate()
{
}

web::json::value RestartStarrocksNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestartStarrocksNodeResponse::fromJson(const web::json::value& val)
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


std::string RestartStarrocksNodeResponse::getJobId() const
{
    return jobId_;
}

void RestartStarrocksNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartStarrocksNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartStarrocksNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


