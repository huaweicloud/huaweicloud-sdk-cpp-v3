

#include "huaweicloud/cloudtest/v1/model/ListTaskResultsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskResultsRequest::ListTaskResultsRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    pageNo_ = "";
    pageNoIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
}

ListTaskResultsRequest::~ListTaskResultsRequest() = default;

void ListTaskResultsRequest::validate()
{
}

web::json::value ListTaskResultsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }

    return val;
}
bool ListTaskResultsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    return ok;
}


std::string ListTaskResultsRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListTaskResultsRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListTaskResultsRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListTaskResultsRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ListTaskResultsRequest::getTaskUri() const
{
    return taskUri_;
}

void ListTaskResultsRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool ListTaskResultsRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void ListTaskResultsRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string ListTaskResultsRequest::getIteratorUri() const
{
    return iteratorUri_;
}

void ListTaskResultsRequest::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool ListTaskResultsRequest::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void ListTaskResultsRequest::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

std::string ListTaskResultsRequest::getPageNo() const
{
    return pageNo_;
}

void ListTaskResultsRequest::setPageNo(const std::string& value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListTaskResultsRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListTaskResultsRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string ListTaskResultsRequest::getPageSize() const
{
    return pageSize_;
}

void ListTaskResultsRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTaskResultsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTaskResultsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListTaskResultsRequest::getReleaseDev() const
{
    return releaseDev_;
}

void ListTaskResultsRequest::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool ListTaskResultsRequest::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void ListTaskResultsRequest::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

}
}
}
}
}


