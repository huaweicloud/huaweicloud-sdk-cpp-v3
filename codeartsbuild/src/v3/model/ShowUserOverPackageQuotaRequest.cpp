

#include "huaweicloud/codeartsbuild/v3/model/ShowUserOverPackageQuotaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowUserOverPackageQuotaRequest::ShowUserOverPackageQuotaRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowUserOverPackageQuotaRequest::~ShowUserOverPackageQuotaRequest() = default;

void ShowUserOverPackageQuotaRequest::validate()
{
}

web::json::value ShowUserOverPackageQuotaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowUserOverPackageQuotaRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowUserOverPackageQuotaRequest::getProjectId() const
{
    return projectId_;
}

void ShowUserOverPackageQuotaRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowUserOverPackageQuotaRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowUserOverPackageQuotaRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


