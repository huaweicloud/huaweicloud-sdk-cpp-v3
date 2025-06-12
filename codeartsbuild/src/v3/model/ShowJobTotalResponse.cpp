

#include "huaweicloud/codeartsbuild/v3/model/ShowJobTotalResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobTotalResponse::ShowJobTotalResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
}

ShowJobTotalResponse::~ShowJobTotalResponse() = default;

void ShowJobTotalResponse::validate()
{
}

web::json::value ShowJobTotalResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool ShowJobTotalResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            TotalResponseBody_result refVal;
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


TotalResponseBody_result ShowJobTotalResponse::getResult() const
{
    return result_;
}

void ShowJobTotalResponse::setResult(const TotalResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobTotalResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobTotalResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobTotalResponse::getStatus() const
{
    return status_;
}

void ShowJobTotalResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobTotalResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobTotalResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowJobTotalResponse::getError() const
{
    return error_;
}

void ShowJobTotalResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobTotalResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobTotalResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


