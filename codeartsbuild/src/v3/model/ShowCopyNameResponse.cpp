

#include "huaweicloud/codeartsbuild/v3/model/ShowCopyNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowCopyNameResponse::ShowCopyNameResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

ShowCopyNameResponse::~ShowCopyNameResponse() = default;

void ShowCopyNameResponse::validate()
{
}

web::json::value ShowCopyNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowCopyNameResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowCopyNameResponse::getStatus() const
{
    return status_;
}

void ShowCopyNameResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCopyNameResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCopyNameResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowCopyNameResponse::getError() const
{
    return error_;
}

void ShowCopyNameResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowCopyNameResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowCopyNameResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowCopyNameResponse::getResult() const
{
    return result_;
}

void ShowCopyNameResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowCopyNameResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowCopyNameResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


