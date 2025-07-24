

#include "huaweicloud/cloudtest/v1/model/QueryCaseResultInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryCaseResultInfo::QueryCaseResultInfo()
{
    uri_ = "";
    uriIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
}

QueryCaseResultInfo::~QueryCaseResultInfo() = default;

void QueryCaseResultInfo::validate()
{
}

web::json::value QueryCaseResultInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }

    return val;
}
bool QueryCaseResultInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
        }
    }
    return ok;
}


std::string QueryCaseResultInfo::getUri() const
{
    return uri_;
}

void QueryCaseResultInfo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool QueryCaseResultInfo::uriIsSet() const
{
    return uriIsSet_;
}

void QueryCaseResultInfo::unseturi()
{
    uriIsSet_ = false;
}

std::string QueryCaseResultInfo::getTaskUri() const
{
    return taskUri_;
}

void QueryCaseResultInfo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool QueryCaseResultInfo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void QueryCaseResultInfo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string QueryCaseResultInfo::getTaskId() const
{
    return taskId_;
}

void QueryCaseResultInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool QueryCaseResultInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void QueryCaseResultInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string QueryCaseResultInfo::getReleaseDev() const
{
    return releaseDev_;
}

void QueryCaseResultInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool QueryCaseResultInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void QueryCaseResultInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

int32_t QueryCaseResultInfo::getPageNo() const
{
    return pageNo_;
}

void QueryCaseResultInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool QueryCaseResultInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void QueryCaseResultInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t QueryCaseResultInfo::getPageSize() const
{
    return pageSize_;
}

void QueryCaseResultInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryCaseResultInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryCaseResultInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string QueryCaseResultInfo::getSortField() const
{
    return sortField_;
}

void QueryCaseResultInfo::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool QueryCaseResultInfo::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void QueryCaseResultInfo::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string QueryCaseResultInfo::getSortType() const
{
    return sortType_;
}

void QueryCaseResultInfo::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool QueryCaseResultInfo::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void QueryCaseResultInfo::unsetsortType()
{
    sortTypeIsSet_ = false;
}

}
}
}
}
}


