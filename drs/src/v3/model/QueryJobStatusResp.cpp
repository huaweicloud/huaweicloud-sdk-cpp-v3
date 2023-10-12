

#include "huaweicloud/drs/v3/model/QueryJobStatusResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryJobStatusResp::QueryJobStatusResp()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

QueryJobStatusResp::~QueryJobStatusResp() = default;

void QueryJobStatusResp::validate()
{
}

web::json::value QueryJobStatusResp::toJson() const
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
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool QueryJobStatusResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string QueryJobStatusResp::getId() const
{
    return id_;
}

void QueryJobStatusResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryJobStatusResp::idIsSet() const
{
    return idIsSet_;
}

void QueryJobStatusResp::unsetid()
{
    idIsSet_ = false;
}

std::string QueryJobStatusResp::getStatus() const
{
    return status_;
}

void QueryJobStatusResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryJobStatusResp::statusIsSet() const
{
    return statusIsSet_;
}

void QueryJobStatusResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryJobStatusResp::getErrorCode() const
{
    return errorCode_;
}

void QueryJobStatusResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryJobStatusResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryJobStatusResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryJobStatusResp::getErrorMessage() const
{
    return errorMessage_;
}

void QueryJobStatusResp::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool QueryJobStatusResp::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void QueryJobStatusResp::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


