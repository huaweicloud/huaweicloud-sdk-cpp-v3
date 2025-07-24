

#include "huaweicloud/cloudtest/v1/model/ListAttachmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAttachmentsResponse::ListAttachmentsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    serverAddress_ = "";
    serverAddressIsSet_ = false;
}

ListAttachmentsResponse::~ListAttachmentsResponse() = default;

void ListAttachmentsResponse::validate()
{
}

web::json::value ListAttachmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(serverAddressIsSet_) {
        val[utility::conversions::to_string_t("server_address")] = ModelBase::toJson(serverAddress_);
    }

    return val;
}
bool ListAttachmentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ResultValueListAttachmentVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ApiError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerAddress(refVal);
        }
    }
    return ok;
}


std::string ListAttachmentsResponse::getStatus() const
{
    return status_;
}

void ListAttachmentsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAttachmentsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAttachmentsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListAttachmentVo ListAttachmentsResponse::getResult() const
{
    return result_;
}

void ListAttachmentsResponse::setResult(const ResultValueListAttachmentVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAttachmentsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAttachmentsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListAttachmentsResponse::getError() const
{
    return error_;
}

void ListAttachmentsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListAttachmentsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListAttachmentsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListAttachmentsResponse::getRequestId() const
{
    return requestId_;
}

void ListAttachmentsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListAttachmentsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListAttachmentsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListAttachmentsResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListAttachmentsResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListAttachmentsResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListAttachmentsResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


