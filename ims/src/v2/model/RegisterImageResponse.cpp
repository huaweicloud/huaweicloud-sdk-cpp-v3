

#include "huaweicloud/ims/v2/model/RegisterImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




RegisterImageResponse::RegisterImageResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RegisterImageResponse::~RegisterImageResponse() = default;

void RegisterImageResponse::validate()
{
}

web::json::value RegisterImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RegisterImageResponse::fromJson(const web::json::value& val)
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

std::string RegisterImageResponse::getJobId() const
{
    return jobId_;
}

void RegisterImageResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RegisterImageResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RegisterImageResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


