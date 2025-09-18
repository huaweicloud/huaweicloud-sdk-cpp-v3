

#include "huaweicloud/projectman/v4/model/ListIssueCustomFieldsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueCustomFieldsRequest::ListIssueCustomFieldsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListIssueCustomFieldsRequest::~ListIssueCustomFieldsRequest() = default;

void ListIssueCustomFieldsRequest::validate()
{
}

web::json::value ListIssueCustomFieldsRequest::toJson() const
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
bool ListIssueCustomFieldsRequest::fromJson(const web::json::value& val)
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
            ListIssueCustomFieldsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListIssueCustomFieldsRequest::getProjectId() const
{
    return projectId_;
}

void ListIssueCustomFieldsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssueCustomFieldsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssueCustomFieldsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ListIssueCustomFieldsRequestBody ListIssueCustomFieldsRequest::getBody() const
{
    return body_;
}

void ListIssueCustomFieldsRequest::setBody(const ListIssueCustomFieldsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListIssueCustomFieldsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListIssueCustomFieldsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


