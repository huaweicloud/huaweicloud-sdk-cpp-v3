

#include "huaweicloud/cloudtest/v1/model/ListDomainVisibleServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListDomainVisibleServicesResponse::ListDomainVisibleServicesResponse()
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

ListDomainVisibleServicesResponse::~ListDomainVisibleServicesResponse() = default;

void ListDomainVisibleServicesResponse::validate()
{
}

web::json::value ListDomainVisibleServicesResponse::toJson() const
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
bool ListDomainVisibleServicesResponse::fromJson(const web::json::value& val)
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


std::string ListDomainVisibleServicesResponse::getStatus() const
{
    return status_;
}

void ListDomainVisibleServicesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDomainVisibleServicesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListDomainVisibleServicesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListDomainVisibleServiceVo ListDomainVisibleServicesResponse::getResult() const
{
    return result_;
}

void ListDomainVisibleServicesResponse::setResult(const ResultValueListDomainVisibleServiceVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListDomainVisibleServicesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListDomainVisibleServicesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListDomainVisibleServicesResponse::getError() const
{
    return error_;
}

void ListDomainVisibleServicesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListDomainVisibleServicesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListDomainVisibleServicesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListDomainVisibleServicesResponse::getRequestId() const
{
    return requestId_;
}

void ListDomainVisibleServicesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListDomainVisibleServicesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListDomainVisibleServicesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListDomainVisibleServicesResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListDomainVisibleServicesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListDomainVisibleServicesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListDomainVisibleServicesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


