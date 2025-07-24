

#include "huaweicloud/cloudtest/v1/model/ListPublicLibAndAwsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListPublicLibAndAwsResponse::ListPublicLibAndAwsResponse()
{
    code_ = "";
    codeIsSet_ = false;
    errorIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListPublicLibAndAwsResponse::~ListPublicLibAndAwsResponse() = default;

void ListPublicLibAndAwsResponse::validate()
{
}

web::json::value ListPublicLibAndAwsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListPublicLibAndAwsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            CommonResponseErrorOfAPITest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<GetPublicLibAndAwsResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListPublicLibAndAwsResponse::getCode() const
{
    return code_;
}

void ListPublicLibAndAwsResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListPublicLibAndAwsResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ListPublicLibAndAwsResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorOfAPITest ListPublicLibAndAwsResponse::getError() const
{
    return error_;
}

void ListPublicLibAndAwsResponse::setError(const CommonResponseErrorOfAPITest& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListPublicLibAndAwsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListPublicLibAndAwsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListPublicLibAndAwsResponse::getReason() const
{
    return reason_;
}

void ListPublicLibAndAwsResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ListPublicLibAndAwsResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ListPublicLibAndAwsResponse::unsetreason()
{
    reasonIsSet_ = false;
}

std::vector<GetPublicLibAndAwsResp>& ListPublicLibAndAwsResponse::getResult()
{
    return result_;
}

void ListPublicLibAndAwsResponse::setResult(const std::vector<GetPublicLibAndAwsResp>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListPublicLibAndAwsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListPublicLibAndAwsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListPublicLibAndAwsResponse::getStatus() const
{
    return status_;
}

void ListPublicLibAndAwsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPublicLibAndAwsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListPublicLibAndAwsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


