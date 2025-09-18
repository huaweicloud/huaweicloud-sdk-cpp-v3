

#include "huaweicloud/projectman/v4/model/ShowIterationV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIterationV4Response::ShowIterationV4Response()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    chartsIsSet_ = false;
    closedTotal_ = 0;
    closedTotalIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    haveTask_ = false;
    haveTaskIsSet_ = false;
    iterationId_ = 0;
    iterationIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    openedTotal_ = 0;
    openedTotalIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowIterationV4Response::~ShowIterationV4Response() = default;

void ShowIterationV4Response::validate()
{
}

web::json::value ShowIterationV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(chartsIsSet_) {
        val[utility::conversions::to_string_t("charts")] = ModelBase::toJson(charts_);
    }
    if(closedTotalIsSet_) {
        val[utility::conversions::to_string_t("closed_total")] = ModelBase::toJson(closedTotal_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(haveTaskIsSet_) {
        val[utility::conversions::to_string_t("have_task")] = ModelBase::toJson(haveTask_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(openedTotalIsSet_) {
        val[utility::conversions::to_string_t("opened_total")] = ModelBase::toJson(openedTotal_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowIterationV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charts"));
        if(!fieldValue.is_null())
        {
            std::vector<Chart> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("have_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("have_task"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaveTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opened_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opened_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenedTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
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
    return ok;
}


std::string ShowIterationV4Response::getBeginTime() const
{
    return beginTime_;
}

void ShowIterationV4Response::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowIterationV4Response::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowIterationV4Response::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::vector<Chart>& ShowIterationV4Response::getCharts()
{
    return charts_;
}

void ShowIterationV4Response::setCharts(const std::vector<Chart>& value)
{
    charts_ = value;
    chartsIsSet_ = true;
}

bool ShowIterationV4Response::chartsIsSet() const
{
    return chartsIsSet_;
}

void ShowIterationV4Response::unsetcharts()
{
    chartsIsSet_ = false;
}

int32_t ShowIterationV4Response::getClosedTotal() const
{
    return closedTotal_;
}

void ShowIterationV4Response::setClosedTotal(int32_t value)
{
    closedTotal_ = value;
    closedTotalIsSet_ = true;
}

bool ShowIterationV4Response::closedTotalIsSet() const
{
    return closedTotalIsSet_;
}

void ShowIterationV4Response::unsetclosedTotal()
{
    closedTotalIsSet_ = false;
}

std::string ShowIterationV4Response::getCreatedTime() const
{
    return createdTime_;
}

void ShowIterationV4Response::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowIterationV4Response::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowIterationV4Response::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowIterationV4Response::getEndTime() const
{
    return endTime_;
}

void ShowIterationV4Response::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowIterationV4Response::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowIterationV4Response::unsetendTime()
{
    endTimeIsSet_ = false;
}

bool ShowIterationV4Response::isHaveTask() const
{
    return haveTask_;
}

void ShowIterationV4Response::setHaveTask(bool value)
{
    haveTask_ = value;
    haveTaskIsSet_ = true;
}

bool ShowIterationV4Response::haveTaskIsSet() const
{
    return haveTaskIsSet_;
}

void ShowIterationV4Response::unsethaveTask()
{
    haveTaskIsSet_ = false;
}

int32_t ShowIterationV4Response::getIterationId() const
{
    return iterationId_;
}

void ShowIterationV4Response::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool ShowIterationV4Response::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void ShowIterationV4Response::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

std::string ShowIterationV4Response::getName() const
{
    return name_;
}

void ShowIterationV4Response::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowIterationV4Response::nameIsSet() const
{
    return nameIsSet_;
}

void ShowIterationV4Response::unsetname()
{
    nameIsSet_ = false;
}

int32_t ShowIterationV4Response::getOpenedTotal() const
{
    return openedTotal_;
}

void ShowIterationV4Response::setOpenedTotal(int32_t value)
{
    openedTotal_ = value;
    openedTotalIsSet_ = true;
}

bool ShowIterationV4Response::openedTotalIsSet() const
{
    return openedTotalIsSet_;
}

void ShowIterationV4Response::unsetopenedTotal()
{
    openedTotalIsSet_ = false;
}

std::string ShowIterationV4Response::getProgress() const
{
    return progress_;
}

void ShowIterationV4Response::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowIterationV4Response::progressIsSet() const
{
    return progressIsSet_;
}

void ShowIterationV4Response::unsetprogress()
{
    progressIsSet_ = false;
}

int32_t ShowIterationV4Response::getTotal() const
{
    return total_;
}

void ShowIterationV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowIterationV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ShowIterationV4Response::unsettotal()
{
    totalIsSet_ = false;
}

std::string ShowIterationV4Response::getUpdatedTime() const
{
    return updatedTime_;
}

void ShowIterationV4Response::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ShowIterationV4Response::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ShowIterationV4Response::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string ShowIterationV4Response::getStatus() const
{
    return status_;
}

void ShowIterationV4Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIterationV4Response::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIterationV4Response::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


