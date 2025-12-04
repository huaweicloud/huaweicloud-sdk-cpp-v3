

#include "huaweicloud/live/v2/model/ListCarouselTaskDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListCarouselTaskDetailRequest::ListCarouselTaskDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    carouselTaskId_ = "";
    carouselTaskIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListCarouselTaskDetailRequest::~ListCarouselTaskDetailRequest() = default;

void ListCarouselTaskDetailRequest::validate()
{
}

web::json::value ListCarouselTaskDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(carouselTaskIdIsSet_) {
        val[utility::conversions::to_string_t("carousel_task_id")] = ModelBase::toJson(carouselTaskId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListCarouselTaskDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("carousel_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("carousel_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCarouselTaskId(refVal);
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
    return ok;
}


std::string ListCarouselTaskDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListCarouselTaskDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListCarouselTaskDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListCarouselTaskDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListCarouselTaskDetailRequest::getCarouselTaskId() const
{
    return carouselTaskId_;
}

void ListCarouselTaskDetailRequest::setCarouselTaskId(const std::string& value)
{
    carouselTaskId_ = value;
    carouselTaskIdIsSet_ = true;
}

bool ListCarouselTaskDetailRequest::carouselTaskIdIsSet() const
{
    return carouselTaskIdIsSet_;
}

void ListCarouselTaskDetailRequest::unsetcarouselTaskId()
{
    carouselTaskIdIsSet_ = false;
}

std::string ListCarouselTaskDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListCarouselTaskDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCarouselTaskDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCarouselTaskDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListCarouselTaskDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListCarouselTaskDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCarouselTaskDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCarouselTaskDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


