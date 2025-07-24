

#include "huaweicloud/cloudtest/v1/model/ListTestReportsByConditionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestReportsByConditionRequest::ListTestReportsByConditionRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pageSize_ = 0L;
    pageSizeIsSet_ = false;
    pageNo_ = "";
    pageNoIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    own_ = false;
    ownIsSet_ = false;
}

ListTestReportsByConditionRequest::~ListTestReportsByConditionRequest() = default;

void ListTestReportsByConditionRequest::validate()
{
}

web::json::value ListTestReportsByConditionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(ownIsSet_) {
        val[utility::conversions::to_string_t("own")] = ModelBase::toJson(own_);
    }

    return val;
}
bool ListTestReportsByConditionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("own"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("own"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwn(refVal);
        }
    }
    return ok;
}


std::string ListTestReportsByConditionRequest::getProjectId() const
{
    return projectId_;
}

void ListTestReportsByConditionRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTestReportsByConditionRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTestReportsByConditionRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ListTestReportsByConditionRequest::getPageSize() const
{
    return pageSize_;
}

void ListTestReportsByConditionRequest::setPageSize(int64_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTestReportsByConditionRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTestReportsByConditionRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListTestReportsByConditionRequest::getPageNo() const
{
    return pageNo_;
}

void ListTestReportsByConditionRequest::setPageNo(const std::string& value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListTestReportsByConditionRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListTestReportsByConditionRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string ListTestReportsByConditionRequest::getKeyWord() const
{
    return keyWord_;
}

void ListTestReportsByConditionRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListTestReportsByConditionRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListTestReportsByConditionRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

bool ListTestReportsByConditionRequest::isOwn() const
{
    return own_;
}

void ListTestReportsByConditionRequest::setOwn(bool value)
{
    own_ = value;
    ownIsSet_ = true;
}

bool ListTestReportsByConditionRequest::ownIsSet() const
{
    return ownIsSet_;
}

void ListTestReportsByConditionRequest::unsetown()
{
    ownIsSet_ = false;
}

}
}
}
}
}


