

#include "huaweicloud/codeartsrepo/v3/model/GetProductTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




GetProductTemplatesResponse::GetProductTemplatesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

GetProductTemplatesResponse::~GetProductTemplatesResponse() = default;

void GetProductTemplatesResponse::validate()
{
}

web::json::value GetProductTemplatesResponse::toJson() const
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
bool GetProductTemplatesResponse::fromJson(const web::json::value& val)
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
            TemplateListInfo refVal;
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


Error GetProductTemplatesResponse::getError() const
{
    return error_;
}

void GetProductTemplatesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool GetProductTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void GetProductTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

TemplateListInfo GetProductTemplatesResponse::getResult() const
{
    return result_;
}

void GetProductTemplatesResponse::setResult(const TemplateListInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool GetProductTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void GetProductTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string GetProductTemplatesResponse::getStatus() const
{
    return status_;
}

void GetProductTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetProductTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetProductTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


