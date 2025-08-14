

#include "huaweicloud/iotda/v5/model/ListPropertiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListPropertiesResponse::ListPropertiesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    responseIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsgIsSet_ = false;
}

ListPropertiesResponse::~ListPropertiesResponse() = default;

void ListPropertiesResponse::validate()
{
}

web::json::value ListPropertiesResponse::toJson() const
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
bool ListPropertiesResponse::fromJson(const web::json::value& val)
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


std::string ListPropertiesResponse::getRequestId() const
{
    return requestId_;
}

void ListPropertiesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListPropertiesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListPropertiesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

Object ListPropertiesResponse::getResponse() const
{
    return response_;
}

void ListPropertiesResponse::setResponse(const Object& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool ListPropertiesResponse::responseIsSet() const
{
    return responseIsSet_;
}

void ListPropertiesResponse::unsetresponse()
{
    responseIsSet_ = false;
}

std::string ListPropertiesResponse::getErrorCode() const
{
    return errorCode_;
}

void ListPropertiesResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListPropertiesResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListPropertiesResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

Object ListPropertiesResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListPropertiesResponse::setErrorMsg(const Object& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListPropertiesResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListPropertiesResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


