

#include "huaweicloud/cloudtest/v1/model/DeleteBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteBranchResponse::DeleteBranchResponse()
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

DeleteBranchResponse::~DeleteBranchResponse() = default;

void DeleteBranchResponse::validate()
{
}

web::json::value DeleteBranchResponse::toJson() const
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
bool DeleteBranchResponse::fromJson(const web::json::value& val)
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
            ResultValueString refVal;
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


std::string DeleteBranchResponse::getStatus() const
{
    return status_;
}

void DeleteBranchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteBranchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteBranchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString DeleteBranchResponse::getResult() const
{
    return result_;
}

void DeleteBranchResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteBranchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteBranchResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError DeleteBranchResponse::getError() const
{
    return error_;
}

void DeleteBranchResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteBranchResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteBranchResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DeleteBranchResponse::getRequestId() const
{
    return requestId_;
}

void DeleteBranchResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteBranchResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteBranchResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string DeleteBranchResponse::getServerAddress() const
{
    return serverAddress_;
}

void DeleteBranchResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool DeleteBranchResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void DeleteBranchResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


