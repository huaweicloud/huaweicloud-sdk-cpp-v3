

#include "huaweicloud/cloudtest/v1/model/ListIssueTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListIssueTreeRequest::ListIssueTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListIssueTreeRequest::~ListIssueTreeRequest() = default;

void ListIssueTreeRequest::validate()
{
}

web::json::value ListIssueTreeRequest::toJson() const
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
bool ListIssueTreeRequest::fromJson(const web::json::value& val)
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
            QueryIssueTreeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListIssueTreeRequest::getProjectId() const
{
    return projectId_;
}

void ListIssueTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssueTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssueTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIssueTreeRequest::getVersionId() const
{
    return versionId_;
}

void ListIssueTreeRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ListIssueTreeRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ListIssueTreeRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

QueryIssueTreeInfo ListIssueTreeRequest::getBody() const
{
    return body_;
}

void ListIssueTreeRequest::setBody(const QueryIssueTreeInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListIssueTreeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListIssueTreeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


