

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseDetailV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseDetailV2Request::ShowTestCaseDetailV2Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseNumber_ = "";
    testcaseNumberIsSet_ = false;
}

ShowTestCaseDetailV2Request::~ShowTestCaseDetailV2Request() = default;

void ShowTestCaseDetailV2Request::validate()
{
}

web::json::value ShowTestCaseDetailV2Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(testcaseNumberIsSet_) {
        val[utility::conversions::to_string_t("testcase_number")] = ModelBase::toJson(testcaseNumber_);
    }

    return val;
}
bool ShowTestCaseDetailV2Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("testcase_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseNumber(refVal);
        }
    }
    return ok;
}


std::string ShowTestCaseDetailV2Request::getProjectId() const
{
    return projectId_;
}

void ShowTestCaseDetailV2Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestCaseDetailV2Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestCaseDetailV2Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTestCaseDetailV2Request::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void ShowTestCaseDetailV2Request::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool ShowTestCaseDetailV2Request::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void ShowTestCaseDetailV2Request::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

}
}
}
}
}


