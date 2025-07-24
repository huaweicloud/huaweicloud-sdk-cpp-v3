

#include "huaweicloud/cloudtest/v1/model/DashboardDataQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DashboardDataQuery::DashboardDataQuery()
{
    endTime_ = 0L;
    endTimeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    taskIdsIsSet_ = false;
}

DashboardDataQuery::~DashboardDataQuery() = default;

void DashboardDataQuery::validate()
{
}

web::json::value DashboardDataQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("task_ids")] = ModelBase::toJson(taskIds_);
    }

    return val;
}
bool DashboardDataQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    return ok;
}


int64_t DashboardDataQuery::getEndTime() const
{
    return endTime_;
}

void DashboardDataQuery::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DashboardDataQuery::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DashboardDataQuery::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t DashboardDataQuery::getPageNum() const
{
    return pageNum_;
}

void DashboardDataQuery::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool DashboardDataQuery::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void DashboardDataQuery::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t DashboardDataQuery::getPageSize() const
{
    return pageSize_;
}

void DashboardDataQuery::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool DashboardDataQuery::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void DashboardDataQuery::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int64_t DashboardDataQuery::getStartTime() const
{
    return startTime_;
}

void DashboardDataQuery::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DashboardDataQuery::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DashboardDataQuery::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::vector<std::string>& DashboardDataQuery::getTaskIds()
{
    return taskIds_;
}

void DashboardDataQuery::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool DashboardDataQuery::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void DashboardDataQuery::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

}
}
}
}
}


