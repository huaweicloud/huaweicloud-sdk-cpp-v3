

#include "huaweicloud/drs/v5/model/UpdateJobResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateJobResponse::UpdateJobResponse()
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

UpdateJobResponse::~UpdateJobResponse() = default;

void UpdateJobResponse::validate()
{
}

web::json::value UpdateJobResponse::toJson() const
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

bool UpdateJobResponse::fromJson(const web::json::value& val)
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

std::string UpdateJobResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateJobResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateJobResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateJobResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateJobResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateJobResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateJobResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateJobResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string UpdateJobResponse::getId() const
{
    return id_;
}

void UpdateJobResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateJobResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateJobResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateJobResponse::getName() const
{
    return name_;
}

void UpdateJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateJobResponse::getStatus() const
{
    return status_;
}

void UpdateJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


