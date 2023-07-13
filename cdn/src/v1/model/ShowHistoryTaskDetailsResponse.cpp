

#include "huaweicloud/cdn/v1/model/ShowHistoryTaskDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowHistoryTaskDetailsResponse::ShowHistoryTaskDetailsResponse()
{
    id_ = "";
    idIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    urlsIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    processing_ = 0;
    processingIsSet_ = false;
    succeed_ = 0;
    succeedIsSet_ = false;
    failed_ = 0;
    failedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
}

ShowHistoryTaskDetailsResponse::~ShowHistoryTaskDetailsResponse() = default;

void ShowHistoryTaskDetailsResponse::validate()
{
}

web::json::value ShowHistoryTaskDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(processingIsSet_) {
        val[utility::conversions::to_string_t("processing")] = ModelBase::toJson(processing_);
    }
    if(succeedIsSet_) {
        val[utility::conversions::to_string_t("succeed")] = ModelBase::toJson(succeed_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }

    return val;
}

bool ShowHistoryTaskDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<UrlObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("processing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessing(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("succeed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("succeed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSucceed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
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
    return ok;
}

std::string ShowHistoryTaskDetailsResponse::getId() const
{
    return id_;
}

void ShowHistoryTaskDetailsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowHistoryTaskDetailsResponse::getTaskType() const
{
    return taskType_;
}

void ShowHistoryTaskDetailsResponse::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string ShowHistoryTaskDetailsResponse::getStatus() const
{
    return status_;
}

void ShowHistoryTaskDetailsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<UrlObject>& ShowHistoryTaskDetailsResponse::getUrls()
{
    return urls_;
}

void ShowHistoryTaskDetailsResponse::setUrls(const std::vector<UrlObject>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::urlsIsSet() const
{
    return urlsIsSet_;
}

void ShowHistoryTaskDetailsResponse::unseturls()
{
    urlsIsSet_ = false;
}

int64_t ShowHistoryTaskDetailsResponse::getCreateTime() const
{
    return createTime_;
}

void ShowHistoryTaskDetailsResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int32_t ShowHistoryTaskDetailsResponse::getProcessing() const
{
    return processing_;
}

void ShowHistoryTaskDetailsResponse::setProcessing(int32_t value)
{
    processing_ = value;
    processingIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::processingIsSet() const
{
    return processingIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsetprocessing()
{
    processingIsSet_ = false;
}

int32_t ShowHistoryTaskDetailsResponse::getSucceed() const
{
    return succeed_;
}

void ShowHistoryTaskDetailsResponse::setSucceed(int32_t value)
{
    succeed_ = value;
    succeedIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::succeedIsSet() const
{
    return succeedIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsetsucceed()
{
    succeedIsSet_ = false;
}

int32_t ShowHistoryTaskDetailsResponse::getFailed() const
{
    return failed_;
}

void ShowHistoryTaskDetailsResponse::setFailed(int32_t value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::failedIsSet() const
{
    return failedIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsetfailed()
{
    failedIsSet_ = false;
}

int32_t ShowHistoryTaskDetailsResponse::getTotal() const
{
    return total_;
}

void ShowHistoryTaskDetailsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ShowHistoryTaskDetailsResponse::getFileType() const
{
    return fileType_;
}

void ShowHistoryTaskDetailsResponse::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowHistoryTaskDetailsResponse::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowHistoryTaskDetailsResponse::unsetfileType()
{
    fileTypeIsSet_ = false;
}

}
}
}
}
}


