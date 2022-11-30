

#include "huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithCloudInitResponse::ChangeServerOsWithCloudInitResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ChangeServerOsWithCloudInitResponse::~ChangeServerOsWithCloudInitResponse() = default;

void ChangeServerOsWithCloudInitResponse::validate()
{
}

web::json::value ChangeServerOsWithCloudInitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ChangeServerOsWithCloudInitResponse::fromJson(const web::json::value& val)
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


std::string ChangeServerOsWithCloudInitResponse::getJobId() const
{
    return jobId_;
}

void ChangeServerOsWithCloudInitResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeServerOsWithCloudInitResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeServerOsWithCloudInitResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


