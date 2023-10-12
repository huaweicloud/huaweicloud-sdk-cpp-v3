

#include "huaweicloud/drs/v3/model/ModifyJobResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyJobResp::ModifyJobResp()
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

ModifyJobResp::~ModifyJobResp() = default;

void ModifyJobResp::validate()
{
}

web::json::value ModifyJobResp::toJson() const
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
bool ModifyJobResp::fromJson(const web::json::value& val)
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


std::string ModifyJobResp::getId() const
{
    return id_;
}

void ModifyJobResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyJobResp::idIsSet() const
{
    return idIsSet_;
}

void ModifyJobResp::unsetid()
{
    idIsSet_ = false;
}

std::string ModifyJobResp::getStatus() const
{
    return status_;
}

void ModifyJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ModifyJobResp::getErrorCode() const
{
    return errorCode_;
}

void ModifyJobResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ModifyJobResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ModifyJobResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ModifyJobResp::getErrorMsg() const
{
    return errorMsg_;
}

void ModifyJobResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ModifyJobResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ModifyJobResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


