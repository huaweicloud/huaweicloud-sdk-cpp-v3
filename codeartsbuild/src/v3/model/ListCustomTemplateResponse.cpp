

#include "huaweicloud/codeartsbuild/v3/model/ListCustomTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListCustomTemplateResponse::ListCustomTemplateResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListCustomTemplateResponse::~ListCustomTemplateResponse() = default;

void ListCustomTemplateResponse::validate()
{
}

web::json::value ListCustomTemplateResponse::toJson() const
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
bool ListCustomTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            QueryCustomTemplatesResult refVal;
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


QueryCustomTemplatesResult ListCustomTemplateResponse::getResult() const
{
    return result_;
}

void ListCustomTemplateResponse::setResult(const QueryCustomTemplatesResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCustomTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCustomTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListCustomTemplateResponse::getError() const
{
    return error_;
}

void ListCustomTemplateResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListCustomTemplateResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListCustomTemplateResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListCustomTemplateResponse::getStatus() const
{
    return status_;
}

void ListCustomTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListCustomTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListCustomTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


