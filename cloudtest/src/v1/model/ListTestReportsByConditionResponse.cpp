

#include "huaweicloud/cloudtest/v1/model/ListTestReportsByConditionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestReportsByConditionResponse::ListTestReportsByConditionResponse()
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

ListTestReportsByConditionResponse::~ListTestReportsByConditionResponse() = default;

void ListTestReportsByConditionResponse::validate()
{
}

web::json::value ListTestReportsByConditionResponse::toJson() const
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
bool ListTestReportsByConditionResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestReportVo refVal;
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


std::string ListTestReportsByConditionResponse::getStatus() const
{
    return status_;
}

void ListTestReportsByConditionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTestReportsByConditionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTestReportsByConditionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestReportVo ListTestReportsByConditionResponse::getResult() const
{
    return result_;
}

void ListTestReportsByConditionResponse::setResult(const ResultValueListTestReportVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTestReportsByConditionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTestReportsByConditionResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTestReportsByConditionResponse::getError() const
{
    return error_;
}

void ListTestReportsByConditionResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTestReportsByConditionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTestReportsByConditionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTestReportsByConditionResponse::getRequestId() const
{
    return requestId_;
}

void ListTestReportsByConditionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTestReportsByConditionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTestReportsByConditionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTestReportsByConditionResponse::getServerAddress() const
{
    return serverAddress_;
}

void ListTestReportsByConditionResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ListTestReportsByConditionResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ListTestReportsByConditionResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


