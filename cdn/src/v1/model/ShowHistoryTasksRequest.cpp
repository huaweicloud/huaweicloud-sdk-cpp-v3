

#include "huaweicloud/cdn/v1/model/ShowHistoryTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowHistoryTasksRequest::ShowHistoryTasksRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startDate_ = 0L;
    startDateIsSet_ = false;
    endDate_ = 0L;
    endDateIsSet_ = false;
    orderField_ = "";
    orderFieldIsSet_ = false;
    orderType_ = "";
    orderTypeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
}

ShowHistoryTasksRequest::~ShowHistoryTasksRequest() = default;

void ShowHistoryTasksRequest::validate()
{
}

web::json::value ShowHistoryTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(orderFieldIsSet_) {
        val[utility::conversions::to_string_t("order_field")] = ModelBase::toJson(orderField_);
    }
    if(orderTypeIsSet_) {
        val[utility::conversions::to_string_t("order_type")] = ModelBase::toJson(orderType_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }

    return val;
}
bool ShowHistoryTasksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    return ok;
}


std::string ShowHistoryTasksRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowHistoryTasksRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowHistoryTasksRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowHistoryTasksRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ShowHistoryTasksRequest::getPageSize() const
{
    return pageSize_;
}

void ShowHistoryTasksRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowHistoryTasksRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowHistoryTasksRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowHistoryTasksRequest::getPageNumber() const
{
    return pageNumber_;
}

void ShowHistoryTasksRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ShowHistoryTasksRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ShowHistoryTasksRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

std::string ShowHistoryTasksRequest::getStatus() const
{
    return status_;
}

void ShowHistoryTasksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHistoryTasksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHistoryTasksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ShowHistoryTasksRequest::getStartDate() const
{
    return startDate_;
}

void ShowHistoryTasksRequest::setStartDate(int64_t value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ShowHistoryTasksRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ShowHistoryTasksRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

int64_t ShowHistoryTasksRequest::getEndDate() const
{
    return endDate_;
}

void ShowHistoryTasksRequest::setEndDate(int64_t value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowHistoryTasksRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowHistoryTasksRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string ShowHistoryTasksRequest::getOrderField() const
{
    return orderField_;
}

void ShowHistoryTasksRequest::setOrderField(const std::string& value)
{
    orderField_ = value;
    orderFieldIsSet_ = true;
}

bool ShowHistoryTasksRequest::orderFieldIsSet() const
{
    return orderFieldIsSet_;
}

void ShowHistoryTasksRequest::unsetorderField()
{
    orderFieldIsSet_ = false;
}

std::string ShowHistoryTasksRequest::getOrderType() const
{
    return orderType_;
}

void ShowHistoryTasksRequest::setOrderType(const std::string& value)
{
    orderType_ = value;
    orderTypeIsSet_ = true;
}

bool ShowHistoryTasksRequest::orderTypeIsSet() const
{
    return orderTypeIsSet_;
}

void ShowHistoryTasksRequest::unsetorderType()
{
    orderTypeIsSet_ = false;
}

std::string ShowHistoryTasksRequest::getFileType() const
{
    return fileType_;
}

void ShowHistoryTasksRequest::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowHistoryTasksRequest::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowHistoryTasksRequest::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string ShowHistoryTasksRequest::getTaskType() const
{
    return taskType_;
}

void ShowHistoryTasksRequest::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ShowHistoryTasksRequest::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ShowHistoryTasksRequest::unsettaskType()
{
    taskTypeIsSet_ = false;
}

}
}
}
}
}


