

#include "huaweicloud/smn/v2/model/ShowKmsKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ShowKmsKeyResponse::ShowKmsKeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowKmsKeyResponse::~ShowKmsKeyResponse() = default;

void ShowKmsKeyResponse::validate()
{
}

web::json::value ShowKmsKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ShowKmsKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowKmsKeyResponse::getKeyId() const
{
    return keyId_;
}

void ShowKmsKeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ShowKmsKeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ShowKmsKeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ShowKmsKeyResponse::getStatus() const
{
    return status_;
}

void ShowKmsKeyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowKmsKeyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowKmsKeyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowKmsKeyResponse::getId() const
{
    return id_;
}

void ShowKmsKeyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowKmsKeyResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowKmsKeyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowKmsKeyResponse::getRequestId() const
{
    return requestId_;
}

void ShowKmsKeyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowKmsKeyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowKmsKeyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


