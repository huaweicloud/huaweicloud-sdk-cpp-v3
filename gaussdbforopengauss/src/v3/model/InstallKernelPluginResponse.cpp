

#include "huaweicloud/gaussdbforopengauss/v3/model/InstallKernelPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstallKernelPluginResponse::InstallKernelPluginResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

InstallKernelPluginResponse::~InstallKernelPluginResponse() = default;

void InstallKernelPluginResponse::validate()
{
}

web::json::value InstallKernelPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool InstallKernelPluginResponse::fromJson(const web::json::value& val)
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


std::string InstallKernelPluginResponse::getJobId() const
{
    return jobId_;
}

void InstallKernelPluginResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool InstallKernelPluginResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void InstallKernelPluginResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


