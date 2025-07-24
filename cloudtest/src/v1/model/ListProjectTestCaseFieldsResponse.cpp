

#include "huaweicloud/cloudtest/v1/model/ListProjectTestCaseFieldsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListProjectTestCaseFieldsResponse::ListProjectTestCaseFieldsResponse()
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

ListProjectTestCaseFieldsResponse::~ListProjectTestCaseFieldsResponse() = default;

void ListProjectTestCaseFieldsResponse::validate()
{
}

web::json::value ListProjectTestCaseFieldsResponse::toJson() const
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
bool ListProjectTestCaseFieldsResponse::fromJson(const web::json::value& val)
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
            ResultValueListProjectTestCaseFieldVo refVal;
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


std::string ListProjectTestCaseFieldsResponse::getStatus() const
{
    return status_;
}

void ListProjectTestCaseFieldsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProjectTestCaseFieldsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListProjectTestCaseFieldsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListProjectTestCaseFieldVo ListProjectTestCaseFieldsResponse::getResult() const
{
    return result_;
}

void ListProjectTestCaseFieldsResponse::setResult(const ResultValueListProjectTestCaseFieldVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListProjectTestCaseFieldsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListProjectTestCaseFieldsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListProjectTestCaseFieldsResponse::getError() const
{
    return error_;
}

void ListProjectTestCaseFieldsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListProjectTestCaseFieldsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListProjectTestCaseFieldsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListProjectTestCaseFieldsResponse::getRequestId() const
{
    return requestId_;
}

void ListProjectTestCaseFieldsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListProjectTestCaseFieldsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListProjectTestCaseFieldsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListProjectTestCaseFieldsResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListProjectTestCaseFieldsResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListProjectTestCaseFieldsResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListProjectTestCaseFieldsResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


