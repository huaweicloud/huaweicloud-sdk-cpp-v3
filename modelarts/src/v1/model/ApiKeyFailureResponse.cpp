

#include "huaweicloud/modelarts/v1/model/ApiKeyFailureResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ApiKeyFailureResponse::ApiKeyFailureResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ApiKeyFailureResponse::~ApiKeyFailureResponse() = default;

void ApiKeyFailureResponse::validate()
{
}

web::json::value ApiKeyFailureResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ApiKeyFailureResponse::fromJson(const web::json::value& val)
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


std::string ApiKeyFailureResponse::getKeyId() const
{
    return keyId_;
}

void ApiKeyFailureResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ApiKeyFailureResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ApiKeyFailureResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ApiKeyFailureResponse::getErrorCode() const
{
    return errorCode_;
}

void ApiKeyFailureResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ApiKeyFailureResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ApiKeyFailureResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ApiKeyFailureResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ApiKeyFailureResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ApiKeyFailureResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ApiKeyFailureResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


