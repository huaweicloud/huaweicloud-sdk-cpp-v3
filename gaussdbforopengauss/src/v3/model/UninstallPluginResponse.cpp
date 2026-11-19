

#include "huaweicloud/gaussdbforopengauss/v3/model/UninstallPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UninstallPluginResponse::UninstallPluginResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UninstallPluginResponse::~UninstallPluginResponse() = default;

void UninstallPluginResponse::validate()
{
}

web::json::value UninstallPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UninstallPluginResponse::fromJson(const web::json::value& val)
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


std::string UninstallPluginResponse::getJobId() const
{
    return jobId_;
}

void UninstallPluginResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UninstallPluginResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UninstallPluginResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


