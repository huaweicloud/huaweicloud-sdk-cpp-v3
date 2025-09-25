

#include "huaweicloud/codehub/v3/model/ShowMasterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowMasterResponse::ShowMasterResponse()
{
    errorIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowMasterResponse::~ShowMasterResponse() = default;

void ShowMasterResponse::validate()
{
}

web::json::value ShowMasterResponse::toJson() const
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
bool ShowMasterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
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


Error ShowMasterResponse::getError() const
{
    return error_;
}

void ShowMasterResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowMasterResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowMasterResponse::unseterror()
{
    errorIsSet_ = false;
}

bool ShowMasterResponse::isResult() const
{
    return result_;
}

void ShowMasterResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowMasterResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowMasterResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowMasterResponse::getStatus() const
{
    return status_;
}

void ShowMasterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMasterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMasterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


