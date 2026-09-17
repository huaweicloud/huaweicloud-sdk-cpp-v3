

#include "huaweicloud/cloudtest/v1/model/ListTestCasesByConditionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCasesByConditionRequest::ListTestCasesByConditionRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    bodyIsSet_ = false;
}

ListTestCasesByConditionRequest::~ListTestCasesByConditionRequest() = default;

void ListTestCasesByConditionRequest::validate()
{
}

web::json::value ListTestCasesByConditionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTestCasesByConditionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TestCasesListQueryInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTestCasesByConditionRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListTestCasesByConditionRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListTestCasesByConditionRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListTestCasesByConditionRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

TestCasesListQueryInfo ListTestCasesByConditionRequest::getBody() const
{
    return body_;
}

void ListTestCasesByConditionRequest::setBody(const TestCasesListQueryInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTestCasesByConditionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTestCasesByConditionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


