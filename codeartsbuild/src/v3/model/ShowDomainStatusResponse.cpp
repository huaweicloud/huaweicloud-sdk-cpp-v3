

#include "huaweicloud/codeartsbuild/v3/model/ShowDomainStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDomainStatusResponse::ShowDomainStatusResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDomainStatusResponse::~ShowDomainStatusResponse() = default;

void ShowDomainStatusResponse::validate()
{
}

web::json::value ShowDomainStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowDomainStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowDomainStatus_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


ShowDomainStatus_result ShowDomainStatusResponse::getResult() const
{
    return result_;
}

void ShowDomainStatusResponse::setResult(const ShowDomainStatus_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDomainStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDomainStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowDomainStatusResponse::getError() const
{
    return error_;
}

void ShowDomainStatusResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowDomainStatusResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowDomainStatusResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowDomainStatusResponse::getStatus() const
{
    return status_;
}

void ShowDomainStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDomainStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDomainStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


