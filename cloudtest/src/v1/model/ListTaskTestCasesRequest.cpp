

#include "huaweicloud/cloudtest/v1/model/ListTaskTestCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskTestCasesRequest::ListTaskTestCasesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTaskTestCasesRequest::~ListTaskTestCasesRequest() = default;

void ListTaskTestCasesRequest::validate()
{
}

web::json::value ListTaskTestCasesRequest::toJson() const
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
bool ListTaskTestCasesRequest::fromJson(const web::json::value& val)
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
            QueryTaskTestCasesInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTaskTestCasesRequest::getProjectId() const
{
    return projectId_;
}

void ListTaskTestCasesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTaskTestCasesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTaskTestCasesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

QueryTaskTestCasesInfo ListTaskTestCasesRequest::getBody() const
{
    return body_;
}

void ListTaskTestCasesRequest::setBody(const QueryTaskTestCasesInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTaskTestCasesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTaskTestCasesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


