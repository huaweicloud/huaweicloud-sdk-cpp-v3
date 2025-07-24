

#include "huaweicloud/cloudtest/v1/model/ShowMindmapBackupByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapBackupByPageRequest::ShowMindmapBackupByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowMindmapBackupByPageRequest::~ShowMindmapBackupByPageRequest() = default;

void ShowMindmapBackupByPageRequest::validate()
{
}

web::json::value ShowMindmapBackupByPageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowMindmapBackupByPageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommRequestMindmapBackupPageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowMindmapBackupByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowMindmapBackupByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowMindmapBackupByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowMindmapBackupByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestMindmapBackupPageParam ShowMindmapBackupByPageRequest::getBody() const
{
    return body_;
}

void ShowMindmapBackupByPageRequest::setBody(const CommRequestMindmapBackupPageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowMindmapBackupByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowMindmapBackupByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


