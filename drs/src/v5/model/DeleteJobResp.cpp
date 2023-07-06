

#include "huaweicloud/drs/v5/model/DeleteJobResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteJobResp::DeleteJobResp()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteJobResp::~DeleteJobResp() = default;

void DeleteJobResp::validate()
{
}

web::json::value DeleteJobResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool DeleteJobResp::fromJson(const web::json::value& val)
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
    return ok;
}

std::string DeleteJobResp::getErrorCode() const
{
    return errorCode_;
}

void DeleteJobResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DeleteJobResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DeleteJobResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DeleteJobResp::getErrorMsg() const
{
    return errorMsg_;
}

void DeleteJobResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DeleteJobResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DeleteJobResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string DeleteJobResp::getId() const
{
    return id_;
}

void DeleteJobResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteJobResp::idIsSet() const
{
    return idIsSet_;
}

void DeleteJobResp::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteJobResp::getName() const
{
    return name_;
}

void DeleteJobResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteJobResp::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteJobResp::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteJobResp::getStatus() const
{
    return status_;
}

void DeleteJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


