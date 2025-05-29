

#include "huaweicloud/codeartsbuild/v3/model/ShowImageTemplateListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowImageTemplateListResponse::ShowImageTemplateListResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowImageTemplateListResponse::~ShowImageTemplateListResponse() = default;

void ShowImageTemplateListResponse::validate()
{
}

web::json::value ShowImageTemplateListResponse::toJson() const
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
bool ShowImageTemplateListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowImageTemplateListResponseBody_result refVal;
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


ShowImageTemplateListResponseBody_result ShowImageTemplateListResponse::getResult() const
{
    return result_;
}

void ShowImageTemplateListResponse::setResult(const ShowImageTemplateListResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowImageTemplateListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowImageTemplateListResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowImageTemplateListResponse::getError() const
{
    return error_;
}

void ShowImageTemplateListResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowImageTemplateListResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowImageTemplateListResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowImageTemplateListResponse::getStatus() const
{
    return status_;
}

void ShowImageTemplateListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowImageTemplateListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowImageTemplateListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


