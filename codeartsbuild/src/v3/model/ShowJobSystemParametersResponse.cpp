

#include "huaweicloud/codeartsbuild/v3/model/ShowJobSystemParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobSystemParametersResponse::ShowJobSystemParametersResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowJobSystemParametersResponse::~ShowJobSystemParametersResponse() = default;

void ShowJobSystemParametersResponse::validate()
{
}

web::json::value ShowJobSystemParametersResponse::toJson() const
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
bool ShowJobSystemParametersResponse::fromJson(const web::json::value& val)
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
            std::vector<SystemParameters_result> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowJobSystemParametersResponse::getStatus() const
{
    return status_;
}

void ShowJobSystemParametersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobSystemParametersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobSystemParametersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowJobSystemParametersResponse::getError() const
{
    return error_;
}

void ShowJobSystemParametersResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobSystemParametersResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobSystemParametersResponse::unseterror()
{
    errorIsSet_ = false;
}

std::vector<SystemParameters_result>& ShowJobSystemParametersResponse::getResult()
{
    return result_;
}

void ShowJobSystemParametersResponse::setResult(const std::vector<SystemParameters_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobSystemParametersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobSystemParametersResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


