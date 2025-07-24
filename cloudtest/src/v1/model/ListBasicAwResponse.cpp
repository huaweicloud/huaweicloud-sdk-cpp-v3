

#include "huaweicloud/cloudtest/v1/model/ListBasicAwResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListBasicAwResponse::ListBasicAwResponse()
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

ListBasicAwResponse::~ListBasicAwResponse() = default;

void ListBasicAwResponse::validate()
{
}

web::json::value ListBasicAwResponse::toJson() const
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
bool ListBasicAwResponse::fromJson(const web::json::value& val)
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
            BasicAwRes refVal;
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


std::string ListBasicAwResponse::getCode() const
{
    return code_;
}

void ListBasicAwResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListBasicAwResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ListBasicAwResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorOfAPITest ListBasicAwResponse::getError() const
{
    return error_;
}

void ListBasicAwResponse::setError(const CommonResponseErrorOfAPITest& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListBasicAwResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListBasicAwResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListBasicAwResponse::getReason() const
{
    return reason_;
}

void ListBasicAwResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ListBasicAwResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ListBasicAwResponse::unsetreason()
{
    reasonIsSet_ = false;
}

BasicAwRes ListBasicAwResponse::getResult() const
{
    return result_;
}

void ListBasicAwResponse::setResult(const BasicAwRes& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListBasicAwResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListBasicAwResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListBasicAwResponse::getStatus() const
{
    return status_;
}

void ListBasicAwResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBasicAwResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListBasicAwResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


