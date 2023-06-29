

#include "huaweicloud/mpc/v1/model/ListEditingJobRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListEditingJobRequest::ListEditingJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListEditingJobRequest::~ListEditingJobRequest() = default;

void ListEditingJobRequest::validate()
{
}

web::json::value ListEditingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("x-language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool ListEditingJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x-language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ListEditingJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListEditingJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListEditingJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListEditingJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::vector<std::string>& ListEditingJobRequest::getJobId()
{
    return jobId_;
}

void ListEditingJobRequest::setJobId(const std::vector<std::string>& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListEditingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListEditingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListEditingJobRequest::getStatus() const
{
    return status_;
}

void ListEditingJobRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEditingJobRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEditingJobRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListEditingJobRequest::getStartTime() const
{
    return startTime_;
}

void ListEditingJobRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListEditingJobRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListEditingJobRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListEditingJobRequest::getEndTime() const
{
    return endTime_;
}

void ListEditingJobRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListEditingJobRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListEditingJobRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListEditingJobRequest::getPage() const
{
    return page_;
}

void ListEditingJobRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListEditingJobRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListEditingJobRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListEditingJobRequest::getSize() const
{
    return size_;
}

void ListEditingJobRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListEditingJobRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListEditingJobRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


