

#include "huaweicloud/modelarts/v1/model/ListTrainingJobTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobTasksRequest::ListTrainingJobTasksRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    scheduleCount_ = 0;
    scheduleCountIsSet_ = false;
}

ListTrainingJobTasksRequest::~ListTrainingJobTasksRequest() = default;

void ListTrainingJobTasksRequest::validate()
{
}

web::json::value ListTrainingJobTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(scheduleCountIsSet_) {
        val[utility::conversions::to_string_t("schedule_count")] = ModelBase::toJson(scheduleCount_);
    }

    return val;
}
bool ListTrainingJobTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("training_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleCount(refVal);
        }
    }
    return ok;
}


std::string ListTrainingJobTasksRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ListTrainingJobTasksRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ListTrainingJobTasksRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ListTrainingJobTasksRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

int32_t ListTrainingJobTasksRequest::getScheduleCount() const
{
    return scheduleCount_;
}

void ListTrainingJobTasksRequest::setScheduleCount(int32_t value)
{
    scheduleCount_ = value;
    scheduleCountIsSet_ = true;
}

bool ListTrainingJobTasksRequest::scheduleCountIsSet() const
{
    return scheduleCountIsSet_;
}

void ListTrainingJobTasksRequest::unsetscheduleCount()
{
    scheduleCountIsSet_ = false;
}

}
}
}
}
}


