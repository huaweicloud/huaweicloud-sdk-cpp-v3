

#include "huaweicloud/cloudtest/v1/model/ListTaskResultsDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskResultsDetailRequest::ListTaskResultsDetailRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    resultUri_ = "";
    resultUriIsSet_ = false;
    pageNo_ = "";
    pageNoIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

ListTaskResultsDetailRequest::~ListTaskResultsDetailRequest() = default;

void ListTaskResultsDetailRequest::validate()
{
}

web::json::value ListTaskResultsDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(resultUriIsSet_) {
        val[utility::conversions::to_string_t("result_uri")] = ModelBase::toJson(resultUri_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListTaskResultsDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListTaskResultsDetailRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListTaskResultsDetailRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListTaskResultsDetailRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListTaskResultsDetailRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ListTaskResultsDetailRequest::getTaskUri() const
{
    return taskUri_;
}

void ListTaskResultsDetailRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool ListTaskResultsDetailRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void ListTaskResultsDetailRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string ListTaskResultsDetailRequest::getResultUri() const
{
    return resultUri_;
}

void ListTaskResultsDetailRequest::setResultUri(const std::string& value)
{
    resultUri_ = value;
    resultUriIsSet_ = true;
}

bool ListTaskResultsDetailRequest::resultUriIsSet() const
{
    return resultUriIsSet_;
}

void ListTaskResultsDetailRequest::unsetresultUri()
{
    resultUriIsSet_ = false;
}

std::string ListTaskResultsDetailRequest::getPageNo() const
{
    return pageNo_;
}

void ListTaskResultsDetailRequest::setPageNo(const std::string& value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListTaskResultsDetailRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListTaskResultsDetailRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string ListTaskResultsDetailRequest::getPageSize() const
{
    return pageSize_;
}

void ListTaskResultsDetailRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTaskResultsDetailRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTaskResultsDetailRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListTaskResultsDetailRequest::getResult() const
{
    return result_;
}

void ListTaskResultsDetailRequest::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTaskResultsDetailRequest::resultIsSet() const
{
    return resultIsSet_;
}

void ListTaskResultsDetailRequest::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


