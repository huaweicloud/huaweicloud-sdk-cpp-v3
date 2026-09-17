

#include "huaweicloud/cloudtest/v1/model/ListVisibleServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListVisibleServicesResponse::ListVisibleServicesResponse()
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

ListVisibleServicesResponse::~ListVisibleServicesResponse() = default;

void ListVisibleServicesResponse::validate()
{
}

web::json::value ListVisibleServicesResponse::toJson() const
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
bool ListVisibleServicesResponse::fromJson(const web::json::value& val)
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
            ResultValueListDomainVisibleServiceVo refVal;
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


std::string ListVisibleServicesResponse::getStatus() const
{
    return status_;
}

void ListVisibleServicesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListVisibleServicesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListVisibleServicesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListDomainVisibleServiceVo ListVisibleServicesResponse::getResult() const
{
    return result_;
}

void ListVisibleServicesResponse::setResult(const ResultValueListDomainVisibleServiceVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListVisibleServicesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListVisibleServicesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListVisibleServicesResponse::getError() const
{
    return error_;
}

void ListVisibleServicesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListVisibleServicesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListVisibleServicesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListVisibleServicesResponse::getRequestId() const
{
    return requestId_;
}

void ListVisibleServicesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListVisibleServicesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListVisibleServicesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListVisibleServicesResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListVisibleServicesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListVisibleServicesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListVisibleServicesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


