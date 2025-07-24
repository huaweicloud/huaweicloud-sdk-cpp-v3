

#include "huaweicloud/cloudtest/v1/model/RemoveIssuesFromIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RemoveIssuesFromIteratorRequest::RemoveIssuesFromIteratorRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    iteratorId_ = "";
    iteratorIdIsSet_ = false;
    bodyIsSet_ = false;
}

RemoveIssuesFromIteratorRequest::~RemoveIssuesFromIteratorRequest() = default;

void RemoveIssuesFromIteratorRequest::validate()
{
}

web::json::value RemoveIssuesFromIteratorRequest::toJson() const
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
bool RemoveIssuesFromIteratorRequest::fromJson(const web::json::value& val)
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
            RemoveIssuesInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RemoveIssuesFromIteratorRequest::getProjectId() const
{
    return projectId_;
}

void RemoveIssuesFromIteratorRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RemoveIssuesFromIteratorRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RemoveIssuesFromIteratorRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RemoveIssuesFromIteratorRequest::getIteratorId() const
{
    return iteratorId_;
}

void RemoveIssuesFromIteratorRequest::setIteratorId(const std::string& value)
{
    iteratorId_ = value;
    iteratorIdIsSet_ = true;
}

bool RemoveIssuesFromIteratorRequest::iteratorIdIsSet() const
{
    return iteratorIdIsSet_;
}

void RemoveIssuesFromIteratorRequest::unsetiteratorId()
{
    iteratorIdIsSet_ = false;
}

RemoveIssuesInfo RemoveIssuesFromIteratorRequest::getBody() const
{
    return body_;
}

void RemoveIssuesFromIteratorRequest::setBody(const RemoveIssuesInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RemoveIssuesFromIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RemoveIssuesFromIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


