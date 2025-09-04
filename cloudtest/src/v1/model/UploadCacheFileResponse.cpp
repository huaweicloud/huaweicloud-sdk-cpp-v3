

#include "huaweicloud/cloudtest/v1/model/UploadCacheFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UploadCacheFileResponse::UploadCacheFileResponse()
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

UploadCacheFileResponse::~UploadCacheFileResponse() = default;

void UploadCacheFileResponse::validate()
{
}

web::json::value UploadCacheFileResponse::toJson() const
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
bool UploadCacheFileResponse::fromJson(const web::json::value& val)
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
            ResultValueAttachmentFileVo refVal;
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


std::string UploadCacheFileResponse::getStatus() const
{
    return status_;
}

void UploadCacheFileResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UploadCacheFileResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UploadCacheFileResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueAttachmentFileVo UploadCacheFileResponse::getResult() const
{
    return result_;
}

void UploadCacheFileResponse::setResult(const ResultValueAttachmentFileVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UploadCacheFileResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UploadCacheFileResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError UploadCacheFileResponse::getError() const
{
    return error_;
}

void UploadCacheFileResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UploadCacheFileResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UploadCacheFileResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UploadCacheFileResponse::getRequestId() const
{
    return requestId_;
}

void UploadCacheFileResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UploadCacheFileResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UploadCacheFileResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UploadCacheFileResponse::getServerAddress() const
{
    return serverAddress_;
}

void UploadCacheFileResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool UploadCacheFileResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void UploadCacheFileResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


