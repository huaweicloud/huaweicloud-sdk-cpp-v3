

#include "huaweicloud/cloudtest/v1/model/ListTaskResultsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskResultsResponse::ListTaskResultsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
}

ListTaskResultsResponse::~ListTaskResultsResponse() = default;

void ListTaskResultsResponse::validate()
{
}

web::json::value ListTaskResultsResponse::toJson() const
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

    return val;
}
bool ListTaskResultsResponse::fromJson(const web::json::value& val)
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
            ResultValueListTaskResultVo refVal;
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
    return ok;
}


std::string ListTaskResultsResponse::getStatus() const
{
    return status_;
}

void ListTaskResultsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTaskResultsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTaskResultsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTaskResultVo ListTaskResultsResponse::getResult() const
{
    return result_;
}

void ListTaskResultsResponse::setResult(const ResultValueListTaskResultVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTaskResultsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTaskResultsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTaskResultsResponse::getError() const
{
    return error_;
}

void ListTaskResultsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTaskResultsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTaskResultsResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


