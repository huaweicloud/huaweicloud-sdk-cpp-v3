

#include "huaweicloud/projectman/v4/model/ListIpdProjectIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdProjectIssuesRequest::ListIpdProjectIssuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    isBacklog_ = false;
    isBacklogIsSet_ = false;
    issueType_ = "";
    issueTypeIsSet_ = false;
    srcDomainId_ = "";
    srcDomainIdIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    bodyIsSet_ = false;
}

ListIpdProjectIssuesRequest::~ListIpdProjectIssuesRequest() = default;

void ListIpdProjectIssuesRequest::validate()
{
}

web::json::value ListIpdProjectIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(isBacklogIsSet_) {
        val[utility::conversions::to_string_t("is_backlog")] = ModelBase::toJson(isBacklog_);
    }
    if(issueTypeIsSet_) {
        val[utility::conversions::to_string_t("issue_type")] = ModelBase::toJson(issueType_);
    }
    if(srcDomainIdIsSet_) {
        val[utility::conversions::to_string_t("src_domain_id")] = ModelBase::toJson(srcDomainId_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListIpdProjectIssuesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_backlog"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_backlog"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBacklog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SearchIpdIssuesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListIpdProjectIssuesRequest::getProjectId() const
{
    return projectId_;
}

void ListIpdProjectIssuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIpdProjectIssuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIpdProjectIssuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool ListIpdProjectIssuesRequest::isIsBacklog() const
{
    return isBacklog_;
}

void ListIpdProjectIssuesRequest::setIsBacklog(bool value)
{
    isBacklog_ = value;
    isBacklogIsSet_ = true;
}

bool ListIpdProjectIssuesRequest::isBacklogIsSet() const
{
    return isBacklogIsSet_;
}

void ListIpdProjectIssuesRequest::unsetisBacklog()
{
    isBacklogIsSet_ = false;
}

std::string ListIpdProjectIssuesRequest::getIssueType() const
{
    return issueType_;
}

void ListIpdProjectIssuesRequest::setIssueType(const std::string& value)
{
    issueType_ = value;
    issueTypeIsSet_ = true;
}

bool ListIpdProjectIssuesRequest::issueTypeIsSet() const
{
    return issueTypeIsSet_;
}

void ListIpdProjectIssuesRequest::unsetissueType()
{
    issueTypeIsSet_ = false;
}

std::string ListIpdProjectIssuesRequest::getSrcDomainId() const
{
    return srcDomainId_;
}

void ListIpdProjectIssuesRequest::setSrcDomainId(const std::string& value)
{
    srcDomainId_ = value;
    srcDomainIdIsSet_ = true;
}

bool ListIpdProjectIssuesRequest::srcDomainIdIsSet() const
{
    return srcDomainIdIsSet_;
}

void ListIpdProjectIssuesRequest::unsetsrcDomainId()
{
    srcDomainIdIsSet_ = false;
}

std::string ListIpdProjectIssuesRequest::getView() const
{
    return view_;
}

void ListIpdProjectIssuesRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListIpdProjectIssuesRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListIpdProjectIssuesRequest::unsetview()
{
    viewIsSet_ = false;
}

SearchIpdIssuesRequestBody ListIpdProjectIssuesRequest::getBody() const
{
    return body_;
}

void ListIpdProjectIssuesRequest::setBody(const SearchIpdIssuesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListIpdProjectIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListIpdProjectIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


