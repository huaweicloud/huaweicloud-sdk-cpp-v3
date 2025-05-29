

#include "huaweicloud/codeartsbuild/v3/model/ShowJobRolePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobRolePermissionRequest::ShowJobRolePermissionRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobRolePermissionRequest::~ShowJobRolePermissionRequest() = default;

void ShowJobRolePermissionRequest::validate()
{
}

web::json::value ShowJobRolePermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowJobRolePermissionRequest::fromJson(const web::json::value& val)
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


std::string ShowJobRolePermissionRequest::getJobId() const
{
    return jobId_;
}

void ShowJobRolePermissionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobRolePermissionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobRolePermissionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


