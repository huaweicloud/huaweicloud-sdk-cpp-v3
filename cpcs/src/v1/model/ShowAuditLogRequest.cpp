

#include "huaweicloud/cpcs/v1/model/ShowAuditLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAuditLogRequest::ShowAuditLogRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

ShowAuditLogRequest::~ShowAuditLogRequest() = default;

void ShowAuditLogRequest::validate()
{
}

web::json::value ShowAuditLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowAuditLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


int32_t ShowAuditLogRequest::getPageSize() const
{
    return pageSize_;
}

void ShowAuditLogRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowAuditLogRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowAuditLogRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowAuditLogRequest::getPageNum() const
{
    return pageNum_;
}

void ShowAuditLogRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowAuditLogRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowAuditLogRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int64_t ShowAuditLogRequest::getStartTime() const
{
    return startTime_;
}

void ShowAuditLogRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAuditLogRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAuditLogRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowAuditLogRequest::getEndTime() const
{
    return endTime_;
}

void ShowAuditLogRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAuditLogRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAuditLogRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


