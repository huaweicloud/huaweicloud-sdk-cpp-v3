

#include "huaweicloud/iotda/v5/model/UpdatePropertiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdatePropertiesResponse::UpdatePropertiesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    responseIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsgIsSet_ = false;
}

UpdatePropertiesResponse::~UpdatePropertiesResponse() = default;

void UpdatePropertiesResponse::validate()
{
}

web::json::value UpdatePropertiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(responseIsSet_) {
        val[utility::conversions::to_string_t("response")] = ModelBase::toJson(response_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool UpdatePropertiesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponse(refVal);
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string UpdatePropertiesResponse::getRequestId() const
{
    return requestId_;
}

void UpdatePropertiesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdatePropertiesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdatePropertiesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

Object UpdatePropertiesResponse::getResponse() const
{
    return response_;
}

void UpdatePropertiesResponse::setResponse(const Object& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool UpdatePropertiesResponse::responseIsSet() const
{
    return responseIsSet_;
}

void UpdatePropertiesResponse::unsetresponse()
{
    responseIsSet_ = false;
}

std::string UpdatePropertiesResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdatePropertiesResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdatePropertiesResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdatePropertiesResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

Object UpdatePropertiesResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdatePropertiesResponse::setErrorMsg(const Object& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdatePropertiesResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdatePropertiesResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


