

#include "huaweicloud/cloudtest/v1/model/ListVariablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListVariablesResponse::ListVariablesResponse()
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

ListVariablesResponse::~ListVariablesResponse() = default;

void ListVariablesResponse::validate()
{
}

web::json::value ListVariablesResponse::toJson() const
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
bool ListVariablesResponse::fromJson(const web::json::value& val)
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
            PageResults refVal;
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


std::string ListVariablesResponse::getCode() const
{
    return code_;
}

void ListVariablesResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListVariablesResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ListVariablesResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorOfAPITest ListVariablesResponse::getError() const
{
    return error_;
}

void ListVariablesResponse::setError(const CommonResponseErrorOfAPITest& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListVariablesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListVariablesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListVariablesResponse::getReason() const
{
    return reason_;
}

void ListVariablesResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ListVariablesResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ListVariablesResponse::unsetreason()
{
    reasonIsSet_ = false;
}

PageResults ListVariablesResponse::getResult() const
{
    return result_;
}

void ListVariablesResponse::setResult(const PageResults& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListVariablesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListVariablesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListVariablesResponse::getStatus() const
{
    return status_;
}

void ListVariablesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListVariablesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListVariablesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


