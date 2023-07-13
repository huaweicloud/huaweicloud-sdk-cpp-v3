

#include "huaweicloud/drs/v3/model/CheckJobResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CheckJobResp::CheckJobResp()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

CheckJobResp::~CheckJobResp() = default;

void CheckJobResp::validate()
{
}

web::json::value CheckJobResp::toJson() const
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
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}

bool CheckJobResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}

std::string CheckJobResp::getId() const
{
    return id_;
}

void CheckJobResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckJobResp::idIsSet() const
{
    return idIsSet_;
}

void CheckJobResp::unsetid()
{
    idIsSet_ = false;
}

std::string CheckJobResp::getStatus() const
{
    return status_;
}

void CheckJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void CheckJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CheckJobResp::getErrorCode() const
{
    return errorCode_;
}

void CheckJobResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CheckJobResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CheckJobResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CheckJobResp::getErrorMsg() const
{
    return errorMsg_;
}

void CheckJobResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CheckJobResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CheckJobResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

bool CheckJobResp::isSuccess() const
{
    return success_;
}

void CheckJobResp::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool CheckJobResp::successIsSet() const
{
    return successIsSet_;
}

void CheckJobResp::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


