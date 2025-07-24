

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseDetailRequest::ShowTestCaseDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
}

ShowTestCaseDetailRequest::~ShowTestCaseDetailRequest() = default;

void ShowTestCaseDetailRequest::validate()
{
}

web::json::value ShowTestCaseDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }

    return val;
}
bool ShowTestCaseDetailRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowTestCaseDetailRequest::getProjectId() const
{
    return projectId_;
}

void ShowTestCaseDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestCaseDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestCaseDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTestCaseDetailRequest::getTestcaseId() const
{
    return testcaseId_;
}

void ShowTestCaseDetailRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ShowTestCaseDetailRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ShowTestCaseDetailRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

}
}
}
}
}


