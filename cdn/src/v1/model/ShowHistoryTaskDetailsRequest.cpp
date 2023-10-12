

#include "huaweicloud/cdn/v1/model/ShowHistoryTaskDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowHistoryTaskDetailsRequest::ShowHistoryTaskDetailsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    historyTasksId_ = "";
    historyTasksIdIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

ShowHistoryTaskDetailsRequest::~ShowHistoryTaskDetailsRequest() = default;

void ShowHistoryTaskDetailsRequest::validate()
{
}

web::json::value ShowHistoryTaskDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(historyTasksIdIsSet_) {
        val[utility::conversions::to_string_t("history_tasks_id")] = ModelBase::toJson(historyTasksId_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ShowHistoryTaskDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("history_tasks_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history_tasks_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistoryTasksId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string ShowHistoryTaskDetailsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowHistoryTaskDetailsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowHistoryTaskDetailsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowHistoryTaskDetailsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowHistoryTaskDetailsRequest::getHistoryTasksId() const
{
    return historyTasksId_;
}

void ShowHistoryTaskDetailsRequest::setHistoryTasksId(const std::string& value)
{
    historyTasksId_ = value;
    historyTasksIdIsSet_ = true;
}

bool ShowHistoryTaskDetailsRequest::historyTasksIdIsSet() const
{
    return historyTasksIdIsSet_;
}

void ShowHistoryTaskDetailsRequest::unsethistoryTasksId()
{
    historyTasksIdIsSet_ = false;
}

int32_t ShowHistoryTaskDetailsRequest::getPageSize() const
{
    return pageSize_;
}

void ShowHistoryTaskDetailsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowHistoryTaskDetailsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowHistoryTaskDetailsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowHistoryTaskDetailsRequest::getPageNumber() const
{
    return pageNumber_;
}

void ShowHistoryTaskDetailsRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ShowHistoryTaskDetailsRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ShowHistoryTaskDetailsRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

std::string ShowHistoryTaskDetailsRequest::getStatus() const
{
    return status_;
}

void ShowHistoryTaskDetailsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHistoryTaskDetailsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHistoryTaskDetailsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowHistoryTaskDetailsRequest::getUrl() const
{
    return url_;
}

void ShowHistoryTaskDetailsRequest::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowHistoryTaskDetailsRequest::urlIsSet() const
{
    return urlIsSet_;
}

void ShowHistoryTaskDetailsRequest::unseturl()
{
    urlIsSet_ = false;
}

int64_t ShowHistoryTaskDetailsRequest::getCreateTime() const
{
    return createTime_;
}

void ShowHistoryTaskDetailsRequest::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowHistoryTaskDetailsRequest::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowHistoryTaskDetailsRequest::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


