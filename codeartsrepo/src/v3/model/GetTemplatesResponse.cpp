

#include "huaweicloud/codeartsrepo/v3/model/GetTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




GetTemplatesResponse::GetTemplatesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

GetTemplatesResponse::~GetTemplatesResponse() = default;

void GetTemplatesResponse::validate()
{
}

web::json::value GetTemplatesResponse::toJson() const
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
bool GetTemplatesResponse::fromJson(const web::json::value& val)
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
            TemplateRepositoryList refVal;
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


Error GetTemplatesResponse::getError() const
{
    return error_;
}

void GetTemplatesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool GetTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void GetTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

TemplateRepositoryList GetTemplatesResponse::getResult() const
{
    return result_;
}

void GetTemplatesResponse::setResult(const TemplateRepositoryList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool GetTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void GetTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string GetTemplatesResponse::getStatus() const
{
    return status_;
}

void GetTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


