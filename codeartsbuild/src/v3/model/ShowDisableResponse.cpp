

#include "huaweicloud/codeartsbuild/v3/model/ShowDisableResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDisableResponse::ShowDisableResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDisableResponse::~ShowDisableResponse() = default;

void ShowDisableResponse::validate()
{
}

web::json::value ShowDisableResponse::toJson() const
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
bool ShowDisableResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            IsDisable_result refVal;
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


IsDisable_result ShowDisableResponse::getResult() const
{
    return result_;
}

void ShowDisableResponse::setResult(const IsDisable_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDisableResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDisableResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowDisableResponse::getError() const
{
    return error_;
}

void ShowDisableResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowDisableResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowDisableResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowDisableResponse::getStatus() const
{
    return status_;
}

void ShowDisableResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDisableResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDisableResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


