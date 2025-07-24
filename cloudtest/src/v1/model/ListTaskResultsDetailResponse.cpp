

#include "huaweicloud/cloudtest/v1/model/ListTaskResultsDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskResultsDetailResponse::ListTaskResultsDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
}

ListTaskResultsDetailResponse::~ListTaskResultsDetailResponse() = default;

void ListTaskResultsDetailResponse::validate()
{
}

web::json::value ListTaskResultsDetailResponse::toJson() const
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
bool ListTaskResultsDetailResponse::fromJson(const web::json::value& val)
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
            ResultValueListTaskResulDetailtVo refVal;
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


std::string ListTaskResultsDetailResponse::getStatus() const
{
    return status_;
}

void ListTaskResultsDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTaskResultsDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTaskResultsDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTaskResulDetailtVo ListTaskResultsDetailResponse::getResult() const
{
    return result_;
}

void ListTaskResultsDetailResponse::setResult(const ResultValueListTaskResulDetailtVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTaskResultsDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTaskResultsDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ListTaskResultsDetailResponse::getError() const
{
    return error_;
}

void ListTaskResultsDetailResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTaskResultsDetailResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTaskResultsDetailResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


