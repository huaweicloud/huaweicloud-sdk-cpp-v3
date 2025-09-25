

#include "huaweicloud/codehub/v3/model/ListTemplatesTwoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListTemplatesTwoResponse::ListTemplatesTwoResponse()
{
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListTemplatesTwoResponse::~ListTemplatesTwoResponse() = default;

void ListTemplatesTwoResponse::validate()
{
}

web::json::value ListTemplatesTwoResponse::toJson() const
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
bool ListTemplatesTwoResponse::fromJson(const web::json::value& val)
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
            std::string refVal;
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


Error ListTemplatesTwoResponse::getError() const
{
    return error_;
}

void ListTemplatesTwoResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTemplatesTwoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTemplatesTwoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTemplatesTwoResponse::getResult() const
{
    return result_;
}

void ListTemplatesTwoResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTemplatesTwoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTemplatesTwoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListTemplatesTwoResponse::getStatus() const
{
    return status_;
}

void ListTemplatesTwoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTemplatesTwoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTemplatesTwoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


