

#include "huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallServerWithoutCloudInitResponse::ReinstallServerWithoutCloudInitResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ReinstallServerWithoutCloudInitResponse::~ReinstallServerWithoutCloudInitResponse() = default;

void ReinstallServerWithoutCloudInitResponse::validate()
{
}

web::json::value ReinstallServerWithoutCloudInitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ReinstallServerWithoutCloudInitResponse::fromJson(const web::json::value& val)
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


std::string ReinstallServerWithoutCloudInitResponse::getJobId() const
{
    return jobId_;
}

void ReinstallServerWithoutCloudInitResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ReinstallServerWithoutCloudInitResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


