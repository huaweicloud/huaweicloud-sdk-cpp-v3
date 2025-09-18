

#include "huaweicloud/projectman/v4/model/ListIssuesV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssuesV4Request::ListIssuesV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListIssuesV4Request::~ListIssuesV4Request() = default;

void ListIssuesV4Request::validate()
{
}

web::json::value ListIssuesV4Request::toJson() const
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
bool ListIssuesV4Request::fromJson(const web::json::value& val)
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
            ListIssueRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListIssuesV4Request::getProjectId() const
{
    return projectId_;
}

void ListIssuesV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssuesV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssuesV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ListIssueRequestV4 ListIssuesV4Request::getBody() const
{
    return body_;
}

void ListIssuesV4Request::setBody(const ListIssueRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListIssuesV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListIssuesV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


