

#include "huaweicloud/gaussdb/v3/model/ShowKillProcessHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKillProcessHistoryRequest::ShowKillProcessHistoryRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ShowKillProcessHistoryRequest::~ShowKillProcessHistoryRequest() = default;

void ShowKillProcessHistoryRequest::validate()
{
}

web::json::value ShowKillProcessHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ShowKillProcessHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
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
    return ok;
}


std::string ShowKillProcessHistoryRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowKillProcessHistoryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowKillProcessHistoryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowKillProcessHistoryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowKillProcessHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowKillProcessHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowKillProcessHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowKillProcessHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int64_t ShowKillProcessHistoryRequest::getStartTime() const
{
    return startTime_;
}

void ShowKillProcessHistoryRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowKillProcessHistoryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowKillProcessHistoryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowKillProcessHistoryRequest::getEndTime() const
{
    return endTime_;
}

void ShowKillProcessHistoryRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowKillProcessHistoryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowKillProcessHistoryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowKillProcessHistoryRequest::getPageNum() const
{
    return pageNum_;
}

void ShowKillProcessHistoryRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowKillProcessHistoryRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowKillProcessHistoryRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ShowKillProcessHistoryRequest::getPageSize() const
{
    return pageSize_;
}

void ShowKillProcessHistoryRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowKillProcessHistoryRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowKillProcessHistoryRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


