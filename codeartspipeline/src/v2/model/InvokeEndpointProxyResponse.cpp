

#include "huaweicloud/codeartspipeline/v2/model/InvokeEndpointProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




InvokeEndpointProxyResponse::InvokeEndpointProxyResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

InvokeEndpointProxyResponse::~InvokeEndpointProxyResponse() = default;

void InvokeEndpointProxyResponse::validate()
{
}

web::json::value InvokeEndpointProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool InvokeEndpointProxyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ErrorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            Object refVal;
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


ErrorInfo InvokeEndpointProxyResponse::getError() const
{
    return error_;
}

void InvokeEndpointProxyResponse::setError(const ErrorInfo& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool InvokeEndpointProxyResponse::errorIsSet() const
{
    return errorIsSet_;
}

void InvokeEndpointProxyResponse::unseterror()
{
    errorIsSet_ = false;
}

Object InvokeEndpointProxyResponse::getResult() const
{
    return result_;
}

void InvokeEndpointProxyResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool InvokeEndpointProxyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void InvokeEndpointProxyResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string InvokeEndpointProxyResponse::getStatus() const
{
    return status_;
}

void InvokeEndpointProxyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InvokeEndpointProxyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void InvokeEndpointProxyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


