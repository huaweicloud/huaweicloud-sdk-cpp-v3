

#include "huaweicloud/codeartsbuild/v3/model/ShowOutputInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowOutputInfoResponse::ShowOutputInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowOutputInfoResponse::~ShowOutputInfoResponse() = default;

void ShowOutputInfoResponse::validate()
{
}

web::json::value ShowOutputInfoResponse::toJson() const
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
bool ShowOutputInfoResponse::fromJson(const web::json::value& val)
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
            OutPutInfo_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowOutputInfoResponse::getStatus() const
{
    return status_;
}

void ShowOutputInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowOutputInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowOutputInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowOutputInfoResponse::getError() const
{
    return error_;
}

void ShowOutputInfoResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowOutputInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowOutputInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

OutPutInfo_result ShowOutputInfoResponse::getResult() const
{
    return result_;
}

void ShowOutputInfoResponse::setResult(const OutPutInfo_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowOutputInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowOutputInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


