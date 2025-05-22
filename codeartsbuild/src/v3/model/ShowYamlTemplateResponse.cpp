

#include "huaweicloud/codeartsbuild/v3/model/ShowYamlTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowYamlTemplateResponse::ShowYamlTemplateResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

ShowYamlTemplateResponse::~ShowYamlTemplateResponse() = default;

void ShowYamlTemplateResponse::validate()
{
}

web::json::value ShowYamlTemplateResponse::toJson() const
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
bool ShowYamlTemplateResponse::fromJson(const web::json::value& val)
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


std::string ShowYamlTemplateResponse::getStatus() const
{
    return status_;
}

void ShowYamlTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowYamlTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowYamlTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowYamlTemplateResponse::getError() const
{
    return error_;
}

void ShowYamlTemplateResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowYamlTemplateResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowYamlTemplateResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowYamlTemplateResponse::getResult() const
{
    return result_;
}

void ShowYamlTemplateResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowYamlTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowYamlTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


