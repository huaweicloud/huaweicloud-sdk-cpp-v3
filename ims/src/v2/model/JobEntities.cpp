

#include "huaweicloud/ims/v2/model/JobEntities.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




JobEntities::JobEntities()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    currentTask_ = "";
    currentTaskIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    additionErrorCode_ = "";
    additionErrorCodeIsSet_ = false;
    additionErrorMsg_ = "";
    additionErrorMsgIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    alarmCode_ = "";
    alarmCodeIsSet_ = false;
    processPercent_ = 0.0;
    processPercentIsSet_ = false;
    resultsIsSet_ = false;
    subJobsResultIsSet_ = false;
    subJobsListIsSet_ = false;
}

JobEntities::~JobEntities() = default;

void JobEntities::validate()
{
}

web::json::value JobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(currentTaskIsSet_) {
        val[utility::conversions::to_string_t("current_task")] = ModelBase::toJson(currentTask_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(additionErrorCodeIsSet_) {
        val[utility::conversions::to_string_t("addition_error_code")] = ModelBase::toJson(additionErrorCode_);
    }
    if(additionErrorMsgIsSet_) {
        val[utility::conversions::to_string_t("addition_error_msg")] = ModelBase::toJson(additionErrorMsg_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(alarmCodeIsSet_) {
        val[utility::conversions::to_string_t("alarm_code")] = ModelBase::toJson(alarmCode_);
    }
    if(processPercentIsSet_) {
        val[utility::conversions::to_string_t("process_percent")] = ModelBase::toJson(processPercent_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(subJobsResultIsSet_) {
        val[utility::conversions::to_string_t("sub_jobs_result")] = ModelBase::toJson(subJobsResult_);
    }
    if(subJobsListIsSet_) {
        val[utility::conversions::to_string_t("sub_jobs_list")] = ModelBase::toJson(subJobsList_);
    }

    return val;
}
bool JobEntities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addition_error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addition_error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addition_error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addition_error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_percent"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<JobEntitiesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_jobs_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_jobs_result"));
        if(!fieldValue.is_null())
        {
            std::vector<SubJobResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobsResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_jobs_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_jobs_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobsList(refVal);
        }
    }
    return ok;
}


std::string JobEntities::getImageId() const
{
    return imageId_;
}

void JobEntities::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool JobEntities::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void JobEntities::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string JobEntities::getCurrentTask() const
{
    return currentTask_;
}

void JobEntities::setCurrentTask(const std::string& value)
{
    currentTask_ = value;
    currentTaskIsSet_ = true;
}

bool JobEntities::currentTaskIsSet() const
{
    return currentTaskIsSet_;
}

void JobEntities::unsetcurrentTask()
{
    currentTaskIsSet_ = false;
}

std::string JobEntities::getImageName() const
{
    return imageName_;
}

void JobEntities::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool JobEntities::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void JobEntities::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string JobEntities::getAdditionErrorCode() const
{
    return additionErrorCode_;
}

void JobEntities::setAdditionErrorCode(const std::string& value)
{
    additionErrorCode_ = value;
    additionErrorCodeIsSet_ = true;
}

bool JobEntities::additionErrorCodeIsSet() const
{
    return additionErrorCodeIsSet_;
}

void JobEntities::unsetadditionErrorCode()
{
    additionErrorCodeIsSet_ = false;
}

std::string JobEntities::getAdditionErrorMsg() const
{
    return additionErrorMsg_;
}

void JobEntities::setAdditionErrorMsg(const std::string& value)
{
    additionErrorMsg_ = value;
    additionErrorMsgIsSet_ = true;
}

bool JobEntities::additionErrorMsgIsSet() const
{
    return additionErrorMsgIsSet_;
}

void JobEntities::unsetadditionErrorMsg()
{
    additionErrorMsgIsSet_ = false;
}

std::string JobEntities::getErrorCode() const
{
    return errorCode_;
}

void JobEntities::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool JobEntities::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void JobEntities::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string JobEntities::getError() const
{
    return error_;
}

void JobEntities::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool JobEntities::errorIsSet() const
{
    return errorIsSet_;
}

void JobEntities::unseterror()
{
    errorIsSet_ = false;
}

std::string JobEntities::getAlarmCode() const
{
    return alarmCode_;
}

void JobEntities::setAlarmCode(const std::string& value)
{
    alarmCode_ = value;
    alarmCodeIsSet_ = true;
}

bool JobEntities::alarmCodeIsSet() const
{
    return alarmCodeIsSet_;
}

void JobEntities::unsetalarmCode()
{
    alarmCodeIsSet_ = false;
}

double JobEntities::getProcessPercent() const
{
    return processPercent_;
}

void JobEntities::setProcessPercent(double value)
{
    processPercent_ = value;
    processPercentIsSet_ = true;
}

bool JobEntities::processPercentIsSet() const
{
    return processPercentIsSet_;
}

void JobEntities::unsetprocessPercent()
{
    processPercentIsSet_ = false;
}

std::vector<JobEntitiesResult>& JobEntities::getResults()
{
    return results_;
}

void JobEntities::setResults(const std::vector<JobEntitiesResult>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool JobEntities::resultsIsSet() const
{
    return resultsIsSet_;
}

void JobEntities::unsetresults()
{
    resultsIsSet_ = false;
}

std::vector<SubJobResult>& JobEntities::getSubJobsResult()
{
    return subJobsResult_;
}

void JobEntities::setSubJobsResult(const std::vector<SubJobResult>& value)
{
    subJobsResult_ = value;
    subJobsResultIsSet_ = true;
}

bool JobEntities::subJobsResultIsSet() const
{
    return subJobsResultIsSet_;
}

void JobEntities::unsetsubJobsResult()
{
    subJobsResultIsSet_ = false;
}

std::vector<std::string>& JobEntities::getSubJobsList()
{
    return subJobsList_;
}

void JobEntities::setSubJobsList(const std::vector<std::string>& value)
{
    subJobsList_ = value;
    subJobsListIsSet_ = true;
}

bool JobEntities::subJobsListIsSet() const
{
    return subJobsListIsSet_;
}

void JobEntities::unsetsubJobsList()
{
    subJobsListIsSet_ = false;
}

}
}
}
}
}


