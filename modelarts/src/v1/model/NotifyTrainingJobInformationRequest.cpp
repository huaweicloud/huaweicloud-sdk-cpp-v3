

#include "huaweicloud/modelarts/v1/model/NotifyTrainingJobInformationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NotifyTrainingJobInformationRequest::NotifyTrainingJobInformationRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    reportType_ = "";
    reportTypeIsSet_ = false;
    bodyIsSet_ = false;
}

NotifyTrainingJobInformationRequest::~NotifyTrainingJobInformationRequest() = default;

void NotifyTrainingJobInformationRequest::validate()
{
}

web::json::value NotifyTrainingJobInformationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(reportTypeIsSet_) {
        val[utility::conversions::to_string_t("report_type")] = ModelBase::toJson(reportType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool NotifyTrainingJobInformationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReportEventBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NotifyTrainingJobInformationRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void NotifyTrainingJobInformationRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool NotifyTrainingJobInformationRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void NotifyTrainingJobInformationRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string NotifyTrainingJobInformationRequest::getTaskId() const
{
    return taskId_;
}

void NotifyTrainingJobInformationRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool NotifyTrainingJobInformationRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void NotifyTrainingJobInformationRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string NotifyTrainingJobInformationRequest::getReportType() const
{
    return reportType_;
}

void NotifyTrainingJobInformationRequest::setReportType(const std::string& value)
{
    reportType_ = value;
    reportTypeIsSet_ = true;
}

bool NotifyTrainingJobInformationRequest::reportTypeIsSet() const
{
    return reportTypeIsSet_;
}

void NotifyTrainingJobInformationRequest::unsetreportType()
{
    reportTypeIsSet_ = false;
}

ReportEventBody NotifyTrainingJobInformationRequest::getBody() const
{
    return body_;
}

void NotifyTrainingJobInformationRequest::setBody(const ReportEventBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NotifyTrainingJobInformationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NotifyTrainingJobInformationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


