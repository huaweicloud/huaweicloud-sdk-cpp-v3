

#include "huaweicloud/cloudtest/v1/model/ListAllTestCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAllTestCasesRequest::ListAllTestCasesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAllTestCasesRequest::~ListAllTestCasesRequest() = default;

void ListAllTestCasesRequest::validate()
{
}

web::json::value ListAllTestCasesRequest::toJson() const
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
bool ListAllTestCasesRequest::fromJson(const web::json::value& val)
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
            TestCasesQueryInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAllTestCasesRequest::getProjectId() const
{
    return projectId_;
}

void ListAllTestCasesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAllTestCasesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAllTestCasesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

TestCasesQueryInfo ListAllTestCasesRequest::getBody() const
{
    return body_;
}

void ListAllTestCasesRequest::setBody(const TestCasesQueryInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAllTestCasesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAllTestCasesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


