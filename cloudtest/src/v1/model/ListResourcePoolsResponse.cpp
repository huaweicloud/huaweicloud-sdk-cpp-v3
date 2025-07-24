

#include "huaweicloud/cloudtest/v1/model/ListResourcePoolsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListResourcePoolsResponse::ListResourcePoolsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListResourcePoolsResponse::~ListResourcePoolsResponse() = default;

void ListResourcePoolsResponse::validate()
{
}

web::json::value ListResourcePoolsResponse::toJson() const
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

    return val;
}
bool ListResourcePoolsResponse::fromJson(const web::json::value& val)
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
            ResultValueListResourcePoolVo refVal;
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
    return ok;
}


std::string ListResourcePoolsResponse::getStatus() const
{
    return status_;
}

void ListResourcePoolsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListResourcePoolsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListResourcePoolsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListResourcePoolVo ListResourcePoolsResponse::getResult() const
{
    return result_;
}

void ListResourcePoolsResponse::setResult(const ResultValueListResourcePoolVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListResourcePoolsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListResourcePoolsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListResourcePoolsResponse::getError() const
{
    return error_;
}

void ListResourcePoolsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListResourcePoolsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListResourcePoolsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListResourcePoolsResponse::getRequestId() const
{
    return requestId_;
}

void ListResourcePoolsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListResourcePoolsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListResourcePoolsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


