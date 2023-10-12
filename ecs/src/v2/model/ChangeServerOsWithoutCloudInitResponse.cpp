

#include "huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithoutCloudInitResponse::ChangeServerOsWithoutCloudInitResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ChangeServerOsWithoutCloudInitResponse::~ChangeServerOsWithoutCloudInitResponse() = default;

void ChangeServerOsWithoutCloudInitResponse::validate()
{
}

web::json::value ChangeServerOsWithoutCloudInitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ChangeServerOsWithoutCloudInitResponse::fromJson(const web::json::value& val)
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


std::string ChangeServerOsWithoutCloudInitResponse::getJobId() const
{
    return jobId_;
}

void ChangeServerOsWithoutCloudInitResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeServerOsWithoutCloudInitResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


