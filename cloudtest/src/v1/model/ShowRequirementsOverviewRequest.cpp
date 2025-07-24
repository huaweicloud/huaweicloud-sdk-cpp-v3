

#include "huaweicloud/cloudtest/v1/model/ShowRequirementsOverviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowRequirementsOverviewRequest::ShowRequirementsOverviewRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowRequirementsOverviewRequest::~ShowRequirementsOverviewRequest() = default;

void ShowRequirementsOverviewRequest::validate()
{
}

web::json::value ShowRequirementsOverviewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowRequirementsOverviewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryRequirementsOverviewInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowRequirementsOverviewRequest::getProjectId() const
{
    return projectId_;
}

void ShowRequirementsOverviewRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowRequirementsOverviewRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowRequirementsOverviewRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowRequirementsOverviewRequest::getVersionId() const
{
    return versionId_;
}

void ShowRequirementsOverviewRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ShowRequirementsOverviewRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ShowRequirementsOverviewRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

QueryRequirementsOverviewInfo ShowRequirementsOverviewRequest::getBody() const
{
    return body_;
}

void ShowRequirementsOverviewRequest::setBody(const QueryRequirementsOverviewInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowRequirementsOverviewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowRequirementsOverviewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


