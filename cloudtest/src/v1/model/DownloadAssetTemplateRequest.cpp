

#include "huaweicloud/cloudtest/v1/model/DownloadAssetTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DownloadAssetTemplateRequest::DownloadAssetTemplateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

DownloadAssetTemplateRequest::~DownloadAssetTemplateRequest() = default;

void DownloadAssetTemplateRequest::validate()
{
}

web::json::value DownloadAssetTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool DownloadAssetTemplateRequest::fromJson(const web::json::value& val)
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


std::string DownloadAssetTemplateRequest::getProjectId() const
{
    return projectId_;
}

void DownloadAssetTemplateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DownloadAssetTemplateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DownloadAssetTemplateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


