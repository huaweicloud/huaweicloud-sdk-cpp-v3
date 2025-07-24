

#include "huaweicloud/cloudtest/v1/model/ListTestTypesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestTypesResponse::ListTestTypesResponse()
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

ListTestTypesResponse::~ListTestTypesResponse() = default;

void ListTestTypesResponse::validate()
{
}

web::json::value ListTestTypesResponse::toJson() const
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
bool ListTestTypesResponse::fromJson(const web::json::value& val)
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
            ResultValueListIntegerIdAndNameVo refVal;
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


std::string ListTestTypesResponse::getStatus() const
{
    return status_;
}

void ListTestTypesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTestTypesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTestTypesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListIntegerIdAndNameVo ListTestTypesResponse::getResult() const
{
    return result_;
}

void ListTestTypesResponse::setResult(const ResultValueListIntegerIdAndNameVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTestTypesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTestTypesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTestTypesResponse::getError() const
{
    return error_;
}

void ListTestTypesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTestTypesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTestTypesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTestTypesResponse::getRequestId() const
{
    return requestId_;
}

void ListTestTypesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTestTypesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTestTypesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTestTypesResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTestTypesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTestTypesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTestTypesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


