

#include "huaweicloud/codeartspipeline/v2/model/PipelineStateStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineStateStatus::PipelineStateStatus()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    elapsedTime_ = "";
    elapsedTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    outcome_ = "";
    outcomeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    childrenIsSet_ = false;
    detailUrl_ = "";
    detailUrlIsSet_ = false;
}

PipelineStateStatus::~PipelineStateStatus() = default;

void PipelineStateStatus::validate()
{
}

web::json::value PipelineStateStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(elapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("elapsed_time")] = ModelBase::toJson(elapsedTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(outcomeIsSet_) {
        val[utility::conversions::to_string_t("outcome")] = ModelBase::toJson(outcome_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }

    return val;
}
bool PipelineStateStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elapsed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElapsedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("outcome"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outcome"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutcome(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineStateStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailUrl(refVal);
        }
    }
    return ok;
}


std::string PipelineStateStatus::getId() const
{
    return id_;
}

void PipelineStateStatus::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineStateStatus::idIsSet() const
{
    return idIsSet_;
}

void PipelineStateStatus::unsetid()
{
    idIsSet_ = false;
}

std::string PipelineStateStatus::getName() const
{
    return name_;
}

void PipelineStateStatus::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineStateStatus::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineStateStatus::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineStateStatus::getType() const
{
    return type_;
}

void PipelineStateStatus::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PipelineStateStatus::typeIsSet() const
{
    return typeIsSet_;
}

void PipelineStateStatus::unsettype()
{
    typeIsSet_ = false;
}

std::string PipelineStateStatus::getStartTime() const
{
    return startTime_;
}

void PipelineStateStatus::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PipelineStateStatus::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PipelineStateStatus::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string PipelineStateStatus::getEndTime() const
{
    return endTime_;
}

void PipelineStateStatus::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool PipelineStateStatus::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void PipelineStateStatus::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string PipelineStateStatus::getElapsedTime() const
{
    return elapsedTime_;
}

void PipelineStateStatus::setElapsedTime(const std::string& value)
{
    elapsedTime_ = value;
    elapsedTimeIsSet_ = true;
}

bool PipelineStateStatus::elapsedTimeIsSet() const
{
    return elapsedTimeIsSet_;
}

void PipelineStateStatus::unsetelapsedTime()
{
    elapsedTimeIsSet_ = false;
}

std::string PipelineStateStatus::getStatus() const
{
    return status_;
}

void PipelineStateStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineStateStatus::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineStateStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PipelineStateStatus::getOutcome() const
{
    return outcome_;
}

void PipelineStateStatus::setOutcome(const std::string& value)
{
    outcome_ = value;
    outcomeIsSet_ = true;
}

bool PipelineStateStatus::outcomeIsSet() const
{
    return outcomeIsSet_;
}

void PipelineStateStatus::unsetoutcome()
{
    outcomeIsSet_ = false;
}

std::string PipelineStateStatus::getErrorCode() const
{
    return errorCode_;
}

void PipelineStateStatus::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool PipelineStateStatus::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void PipelineStateStatus::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string PipelineStateStatus::getErrorMsg() const
{
    return errorMsg_;
}

void PipelineStateStatus::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool PipelineStateStatus::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void PipelineStateStatus::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::vector<PipelineStateStatus>& PipelineStateStatus::getChildren()
{
    return *children_;
}

void PipelineStateStatus::setChildren(const std::vector<PipelineStateStatus>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool PipelineStateStatus::childrenIsSet() const
{
    return childrenIsSet_;
}

void PipelineStateStatus::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string PipelineStateStatus::getDetailUrl() const
{
    return detailUrl_;
}

void PipelineStateStatus::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool PipelineStateStatus::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void PipelineStateStatus::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

}
}
}
}
}


