

#include "huaweicloud/codehub/v3/model/ListHooksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListHooksResponse::ListHooksResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListHooksResponse::~ListHooksResponse() = default;

void ListHooksResponse::validate()
{
}

web::json::value ListHooksResponse::toJson() const
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
bool ListHooksResponse::fromJson(const web::json::value& val)
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
            RepoListHook refVal;
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


Error ListHooksResponse::getError() const
{
    return error_;
}

void ListHooksResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListHooksResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListHooksResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoListHook ListHooksResponse::getResult() const
{
    return result_;
}

void ListHooksResponse::setResult(const RepoListHook& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListHooksResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListHooksResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListHooksResponse::getStatus() const
{
    return status_;
}

void ListHooksResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListHooksResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListHooksResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


