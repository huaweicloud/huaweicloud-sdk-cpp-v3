

#include "huaweicloud/cloudtest/v1/model/AddIssuesToIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddIssuesToIteratorRequest::AddIssuesToIteratorRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    bodyIsSet_ = false;
}

AddIssuesToIteratorRequest::~AddIssuesToIteratorRequest() = default;

void AddIssuesToIteratorRequest::validate()
{
}

web::json::value AddIssuesToIteratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddIssuesToIteratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IssuesInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddIssuesToIteratorRequest::getProjectUuid() const
{
    return projectUuid_;
}

void AddIssuesToIteratorRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool AddIssuesToIteratorRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void AddIssuesToIteratorRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string AddIssuesToIteratorRequest::getIteratorUri() const
{
    return iteratorUri_;
}

void AddIssuesToIteratorRequest::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool AddIssuesToIteratorRequest::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void AddIssuesToIteratorRequest::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

IssuesInfo AddIssuesToIteratorRequest::getBody() const
{
    return body_;
}

void AddIssuesToIteratorRequest::setBody(const IssuesInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddIssuesToIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddIssuesToIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


