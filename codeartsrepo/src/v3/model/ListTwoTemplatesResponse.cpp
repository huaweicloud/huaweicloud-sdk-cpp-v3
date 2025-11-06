

#include "huaweicloud/codeartsrepo/v3/model/ListTwoTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListTwoTemplatesResponse::ListTwoTemplatesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListTwoTemplatesResponse::~ListTwoTemplatesResponse() = default;

void ListTwoTemplatesResponse::validate()
{
}

web::json::value ListTwoTemplatesResponse::toJson() const
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
bool ListTwoTemplatesResponse::fromJson(const web::json::value& val)
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


Error ListTwoTemplatesResponse::getError() const
{
    return error_;
}

void ListTwoTemplatesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTwoTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTwoTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

TemplateRepositoryList ListTwoTemplatesResponse::getResult() const
{
    return result_;
}

void ListTwoTemplatesResponse::setResult(const TemplateRepositoryList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTwoTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTwoTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListTwoTemplatesResponse::getStatus() const
{
    return status_;
}

void ListTwoTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTwoTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTwoTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


