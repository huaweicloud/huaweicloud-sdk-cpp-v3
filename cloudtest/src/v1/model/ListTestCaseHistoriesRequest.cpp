

#include "huaweicloud/cloudtest/v1/model/ListTestCaseHistoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCaseHistoriesRequest::ListTestCaseHistoriesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTestCaseHistoriesRequest::~ListTestCaseHistoriesRequest() = default;

void ListTestCaseHistoriesRequest::validate()
{
}

web::json::value ListTestCaseHistoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTestCaseHistoriesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListTestCaseHistoriesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTestCaseHistoriesRequest::getProjectId() const
{
    return projectId_;
}

void ListTestCaseHistoriesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTestCaseHistoriesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTestCaseHistoriesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTestCaseHistoriesRequest::getTestcaseId() const
{
    return testcaseId_;
}

void ListTestCaseHistoriesRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ListTestCaseHistoriesRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ListTestCaseHistoriesRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

ListTestCaseHistoriesRequestBody ListTestCaseHistoriesRequest::getBody() const
{
    return body_;
}

void ListTestCaseHistoriesRequest::setBody(const ListTestCaseHistoriesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTestCaseHistoriesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTestCaseHistoriesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


