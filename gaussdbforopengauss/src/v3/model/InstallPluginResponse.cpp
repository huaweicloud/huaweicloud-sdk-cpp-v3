

#include "huaweicloud/gaussdbforopengauss/v3/model/InstallPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstallPluginResponse::InstallPluginResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

InstallPluginResponse::~InstallPluginResponse() = default;

void InstallPluginResponse::validate()
{
}

web::json::value InstallPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool InstallPluginResponse::fromJson(const web::json::value& val)
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


std::string InstallPluginResponse::getJobId() const
{
    return jobId_;
}

void InstallPluginResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool InstallPluginResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void InstallPluginResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


