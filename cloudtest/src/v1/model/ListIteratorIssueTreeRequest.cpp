

#include "huaweicloud/cloudtest/v1/model/ListIteratorIssueTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListIteratorIssueTreeRequest::ListIteratorIssueTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    iteratorId_ = "";
    iteratorIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListIteratorIssueTreeRequest::~ListIteratorIssueTreeRequest() = default;

void ListIteratorIssueTreeRequest::validate()
{
}

web::json::value ListIteratorIssueTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(iteratorIdIsSet_) {
        val[utility::conversions::to_string_t("iterator_id")] = ModelBase::toJson(iteratorId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListIteratorIssueTreeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iterator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IssueTreeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListIteratorIssueTreeRequest::getProjectId() const
{
    return projectId_;
}

void ListIteratorIssueTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIteratorIssueTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIteratorIssueTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIteratorIssueTreeRequest::getIteratorId() const
{
    return iteratorId_;
}

void ListIteratorIssueTreeRequest::setIteratorId(const std::string& value)
{
    iteratorId_ = value;
    iteratorIdIsSet_ = true;
}

bool ListIteratorIssueTreeRequest::iteratorIdIsSet() const
{
    return iteratorIdIsSet_;
}

void ListIteratorIssueTreeRequest::unsetiteratorId()
{
    iteratorIdIsSet_ = false;
}

IssueTreeInfo ListIteratorIssueTreeRequest::getBody() const
{
    return body_;
}

void ListIteratorIssueTreeRequest::setBody(const IssueTreeInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListIteratorIssueTreeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListIteratorIssueTreeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


