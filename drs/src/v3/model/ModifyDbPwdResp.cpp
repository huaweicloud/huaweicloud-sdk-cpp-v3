

#include "huaweicloud/drs/v3/model/ModifyDbPwdResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyDbPwdResp::ModifyDbPwdResp()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    endPointType_ = "";
    endPointTypeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ModifyDbPwdResp::~ModifyDbPwdResp() = default;

void ModifyDbPwdResp::validate()
{
}

web::json::value ModifyDbPwdResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(endPointTypeIsSet_) {
        val[utility::conversions::to_string_t("end_point_type")] = ModelBase::toJson(endPointType_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool ModifyDbPwdResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("end_point_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_point_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndPointType(refVal);
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

std::string ModifyDbPwdResp::getId() const
{
    return id_;
}

void ModifyDbPwdResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyDbPwdResp::idIsSet() const
{
    return idIsSet_;
}

void ModifyDbPwdResp::unsetid()
{
    idIsSet_ = false;
}

std::string ModifyDbPwdResp::getStatus() const
{
    return status_;
}

void ModifyDbPwdResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyDbPwdResp::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyDbPwdResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ModifyDbPwdResp::getEndPointType() const
{
    return endPointType_;
}

void ModifyDbPwdResp::setEndPointType(const std::string& value)
{
    endPointType_ = value;
    endPointTypeIsSet_ = true;
}

bool ModifyDbPwdResp::endPointTypeIsSet() const
{
    return endPointTypeIsSet_;
}

void ModifyDbPwdResp::unsetendPointType()
{
    endPointTypeIsSet_ = false;
}

std::string ModifyDbPwdResp::getErrorCode() const
{
    return errorCode_;
}

void ModifyDbPwdResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ModifyDbPwdResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ModifyDbPwdResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ModifyDbPwdResp::getErrorMsg() const
{
    return errorMsg_;
}

void ModifyDbPwdResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ModifyDbPwdResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ModifyDbPwdResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


