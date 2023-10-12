

#include "huaweicloud/drs/v3/model/RetryTaskResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




RetryTaskResp::RetryTaskResp()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

RetryTaskResp::~RetryTaskResp() = default;

void RetryTaskResp::validate()
{
}

web::json::value RetryTaskResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool RetryTaskResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string RetryTaskResp::getId() const
{
    return id_;
}

void RetryTaskResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RetryTaskResp::idIsSet() const
{
    return idIsSet_;
}

void RetryTaskResp::unsetid()
{
    idIsSet_ = false;
}

std::string RetryTaskResp::getStatus() const
{
    return status_;
}

void RetryTaskResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RetryTaskResp::statusIsSet() const
{
    return statusIsSet_;
}

void RetryTaskResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RetryTaskResp::getErrorCode() const
{
    return errorCode_;
}

void RetryTaskResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool RetryTaskResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void RetryTaskResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string RetryTaskResp::getErrorMsg() const
{
    return errorMsg_;
}

void RetryTaskResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool RetryTaskResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void RetryTaskResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


