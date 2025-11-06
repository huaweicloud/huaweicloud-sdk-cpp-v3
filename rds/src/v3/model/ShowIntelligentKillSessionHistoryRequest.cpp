

#include "huaweicloud/rds/v3/model/ShowIntelligentKillSessionHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowIntelligentKillSessionHistoryRequest::ShowIntelligentKillSessionHistoryRequest()
{
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

ShowIntelligentKillSessionHistoryRequest::~ShowIntelligentKillSessionHistoryRequest() = default;

void ShowIntelligentKillSessionHistoryRequest::validate()
{
}

web::json::value ShowIntelligentKillSessionHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ShowIntelligentKillSessionHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ShowIntelligentKillSessionHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowIntelligentKillSessionHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowIntelligentKillSessionHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int64_t ShowIntelligentKillSessionHistoryRequest::getStartTime() const
{
    return startTime_;
}

void ShowIntelligentKillSessionHistoryRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowIntelligentKillSessionHistoryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowIntelligentKillSessionHistoryRequest::getEndTime() const
{
    return endTime_;
}

void ShowIntelligentKillSessionHistoryRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowIntelligentKillSessionHistoryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowIntelligentKillSessionHistoryRequest::getPageNum() const
{
    return pageNum_;
}

void ShowIntelligentKillSessionHistoryRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowIntelligentKillSessionHistoryRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ShowIntelligentKillSessionHistoryRequest::getPageSize() const
{
    return pageSize_;
}

void ShowIntelligentKillSessionHistoryRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowIntelligentKillSessionHistoryRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


