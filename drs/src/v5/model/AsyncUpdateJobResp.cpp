

#include "huaweicloud/drs/v5/model/AsyncUpdateJobResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AsyncUpdateJobResp::AsyncUpdateJobResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

AsyncUpdateJobResp::~AsyncUpdateJobResp() = default;

void AsyncUpdateJobResp::validate()
{
}

web::json::value AsyncUpdateJobResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
bool AsyncUpdateJobResp::fromJson(const web::json::value& val)
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


std::string AsyncUpdateJobResp::getId() const
{
    return id_;
}

void AsyncUpdateJobResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AsyncUpdateJobResp::idIsSet() const
{
    return idIsSet_;
}

void AsyncUpdateJobResp::unsetid()
{
    idIsSet_ = false;
}

std::string AsyncUpdateJobResp::getName() const
{
    return name_;
}

void AsyncUpdateJobResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AsyncUpdateJobResp::nameIsSet() const
{
    return nameIsSet_;
}

void AsyncUpdateJobResp::unsetname()
{
    nameIsSet_ = false;
}

std::string AsyncUpdateJobResp::getStatus() const
{
    return status_;
}

void AsyncUpdateJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AsyncUpdateJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void AsyncUpdateJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AsyncUpdateJobResp::getErrorCode() const
{
    return errorCode_;
}

void AsyncUpdateJobResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool AsyncUpdateJobResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void AsyncUpdateJobResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string AsyncUpdateJobResp::getErrorMsg() const
{
    return errorMsg_;
}

void AsyncUpdateJobResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool AsyncUpdateJobResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void AsyncUpdateJobResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


