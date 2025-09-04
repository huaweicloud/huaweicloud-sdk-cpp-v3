

#include "huaweicloud/codeartsbuild/v3/model/ShowTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowTemplateResponse::ShowTemplateResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowTemplateResponse::~ShowTemplateResponse() = default;

void ShowTemplateResponse::validate()
{
}

web::json::value ShowTemplateResponse::toJson() const
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
bool ShowTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            QueryTemplatesItems refVal;
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


QueryTemplatesItems ShowTemplateResponse::getResult() const
{
    return result_;
}

void ShowTemplateResponse::setResult(const QueryTemplatesItems& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowTemplateResponse::getError() const
{
    return error_;
}

void ShowTemplateResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowTemplateResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowTemplateResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowTemplateResponse::getStatus() const
{
    return status_;
}

void ShowTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


