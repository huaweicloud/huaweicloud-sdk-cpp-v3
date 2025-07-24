

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseReviewsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseReviewsRequest::ShowTestCaseReviewsRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    testcaseUri_ = "";
    testcaseUriIsSet_ = false;
}

ShowTestCaseReviewsRequest::~ShowTestCaseReviewsRequest() = default;

void ShowTestCaseReviewsRequest::validate()
{
}

web::json::value ShowTestCaseReviewsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(testcaseUriIsSet_) {
        val[utility::conversions::to_string_t("testcase_uri")] = ModelBase::toJson(testcaseUri_);
    }

    return val;
}
bool ShowTestCaseReviewsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseUri(refVal);
        }
    }
    return ok;
}


std::string ShowTestCaseReviewsRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowTestCaseReviewsRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowTestCaseReviewsRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowTestCaseReviewsRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ShowTestCaseReviewsRequest::getVersionUri() const
{
    return versionUri_;
}

void ShowTestCaseReviewsRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool ShowTestCaseReviewsRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void ShowTestCaseReviewsRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

int32_t ShowTestCaseReviewsRequest::getPageNo() const
{
    return pageNo_;
}

void ShowTestCaseReviewsRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ShowTestCaseReviewsRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ShowTestCaseReviewsRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ShowTestCaseReviewsRequest::getPageSize() const
{
    return pageSize_;
}

void ShowTestCaseReviewsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowTestCaseReviewsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowTestCaseReviewsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ShowTestCaseReviewsRequest::getTestcaseUri() const
{
    return testcaseUri_;
}

void ShowTestCaseReviewsRequest::setTestcaseUri(const std::string& value)
{
    testcaseUri_ = value;
    testcaseUriIsSet_ = true;
}

bool ShowTestCaseReviewsRequest::testcaseUriIsSet() const
{
    return testcaseUriIsSet_;
}

void ShowTestCaseReviewsRequest::unsettestcaseUri()
{
    testcaseUriIsSet_ = false;
}

}
}
}
}
}


