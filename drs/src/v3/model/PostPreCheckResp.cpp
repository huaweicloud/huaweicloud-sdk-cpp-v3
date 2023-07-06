

#include "huaweicloud/drs/v3/model/PostPreCheckResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




PostPreCheckResp::PostPreCheckResp()
{
    id_ = "";
    idIsSet_ = false;
    precheckId_ = "";
    precheckIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

PostPreCheckResp::~PostPreCheckResp() = default;

void PostPreCheckResp::validate()
{
}

web::json::value PostPreCheckResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(precheckIdIsSet_) {
        val[utility::conversions::to_string_t("precheck_id")] = ModelBase::toJson(precheckId_);
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

bool PostPreCheckResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("precheck_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckId(refVal);
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

std::string PostPreCheckResp::getId() const
{
    return id_;
}

void PostPreCheckResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostPreCheckResp::idIsSet() const
{
    return idIsSet_;
}

void PostPreCheckResp::unsetid()
{
    idIsSet_ = false;
}

std::string PostPreCheckResp::getPrecheckId() const
{
    return precheckId_;
}

void PostPreCheckResp::setPrecheckId(const std::string& value)
{
    precheckId_ = value;
    precheckIdIsSet_ = true;
}

bool PostPreCheckResp::precheckIdIsSet() const
{
    return precheckIdIsSet_;
}

void PostPreCheckResp::unsetprecheckId()
{
    precheckIdIsSet_ = false;
}

std::string PostPreCheckResp::getStatus() const
{
    return status_;
}

void PostPreCheckResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PostPreCheckResp::statusIsSet() const
{
    return statusIsSet_;
}

void PostPreCheckResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PostPreCheckResp::getErrorCode() const
{
    return errorCode_;
}

void PostPreCheckResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool PostPreCheckResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void PostPreCheckResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string PostPreCheckResp::getErrorMsg() const
{
    return errorMsg_;
}

void PostPreCheckResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool PostPreCheckResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void PostPreCheckResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


