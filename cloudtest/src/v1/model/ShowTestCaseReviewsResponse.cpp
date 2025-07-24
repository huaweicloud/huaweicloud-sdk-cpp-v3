

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseReviewsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseReviewsResponse::ShowTestCaseReviewsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
}

ShowTestCaseReviewsResponse::~ShowTestCaseReviewsResponse() = default;

void ShowTestCaseReviewsResponse::validate()
{
}

web::json::value ShowTestCaseReviewsResponse::toJson() const
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
bool ShowTestCaseReviewsResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestCaseReviewVo refVal;
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


std::string ShowTestCaseReviewsResponse::getStatus() const
{
    return status_;
}

void ShowTestCaseReviewsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTestCaseReviewsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTestCaseReviewsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestCaseReviewVo ShowTestCaseReviewsResponse::getResult() const
{
    return result_;
}

void ShowTestCaseReviewsResponse::setResult(const ResultValueListTestCaseReviewVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTestCaseReviewsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTestCaseReviewsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowTestCaseReviewsResponse::getError() const
{
    return error_;
}

void ShowTestCaseReviewsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowTestCaseReviewsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowTestCaseReviewsResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


