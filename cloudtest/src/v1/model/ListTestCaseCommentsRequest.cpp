

#include "huaweicloud/cloudtest/v1/model/ListTestCaseCommentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCaseCommentsRequest::ListTestCaseCommentsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
}

ListTestCaseCommentsRequest::~ListTestCaseCommentsRequest() = default;

void ListTestCaseCommentsRequest::validate()
{
}

web::json::value ListTestCaseCommentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }

    return val;
}
bool ListTestCaseCommentsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    return ok;
}


std::string ListTestCaseCommentsRequest::getProjectId() const
{
    return projectId_;
}

void ListTestCaseCommentsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTestCaseCommentsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTestCaseCommentsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTestCaseCommentsRequest::getTestcaseId() const
{
    return testcaseId_;
}

void ListTestCaseCommentsRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ListTestCaseCommentsRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ListTestCaseCommentsRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

int32_t ListTestCaseCommentsRequest::getPageNo() const
{
    return pageNo_;
}

void ListTestCaseCommentsRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListTestCaseCommentsRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListTestCaseCommentsRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListTestCaseCommentsRequest::getPageSize() const
{
    return pageSize_;
}

void ListTestCaseCommentsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTestCaseCommentsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTestCaseCommentsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListTestCaseCommentsRequest::getVersionUri() const
{
    return versionUri_;
}

void ListTestCaseCommentsRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool ListTestCaseCommentsRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void ListTestCaseCommentsRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

}
}
}
}
}


