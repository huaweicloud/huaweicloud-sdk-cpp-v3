

#include "huaweicloud/antiddos/v1/model/UpdateDDosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateDDosResponse::UpdateDDosResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

UpdateDDosResponse::~UpdateDDosResponse() = default;

void UpdateDDosResponse::validate()
{
}

web::json::value UpdateDDosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool UpdateDDosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string UpdateDDosResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateDDosResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateDDosResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateDDosResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateDDosResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateDDosResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateDDosResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateDDosResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string UpdateDDosResponse::getTaskId() const
{
    return taskId_;
}

void UpdateDDosResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateDDosResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateDDosResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


