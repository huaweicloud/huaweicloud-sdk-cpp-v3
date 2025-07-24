

#include "huaweicloud/cloudtest/v1/model/ShowIteratorByDefectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIteratorByDefectResponse::ShowIteratorByDefectResponse()
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

ShowIteratorByDefectResponse::~ShowIteratorByDefectResponse() = default;

void ShowIteratorByDefectResponse::validate()
{
}

web::json::value ShowIteratorByDefectResponse::toJson() const
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
bool ShowIteratorByDefectResponse::fromJson(const web::json::value& val)
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
            ResultValueTestVersionVo refVal;
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


std::string ShowIteratorByDefectResponse::getStatus() const
{
    return status_;
}

void ShowIteratorByDefectResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIteratorByDefectResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIteratorByDefectResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestVersionVo ShowIteratorByDefectResponse::getResult() const
{
    return result_;
}

void ShowIteratorByDefectResponse::setResult(const ResultValueTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIteratorByDefectResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIteratorByDefectResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowIteratorByDefectResponse::getError() const
{
    return error_;
}

void ShowIteratorByDefectResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowIteratorByDefectResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowIteratorByDefectResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowIteratorByDefectResponse::getRequestId() const
{
    return requestId_;
}

void ShowIteratorByDefectResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowIteratorByDefectResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowIteratorByDefectResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowIteratorByDefectResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowIteratorByDefectResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowIteratorByDefectResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowIteratorByDefectResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


