

#include "huaweicloud/codehub/v3/model/AddHooksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddHooksResponse::AddHooksResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddHooksResponse::~AddHooksResponse() = default;

void AddHooksResponse::validate()
{
}

web::json::value AddHooksResponse::toJson() const
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
bool AddHooksResponse::fromJson(const web::json::value& val)
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
            RepoHook refVal;
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


Error AddHooksResponse::getError() const
{
    return error_;
}

void AddHooksResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddHooksResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddHooksResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoHook AddHooksResponse::getResult() const
{
    return result_;
}

void AddHooksResponse::setResult(const RepoHook& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddHooksResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddHooksResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddHooksResponse::getStatus() const
{
    return status_;
}

void AddHooksResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddHooksResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddHooksResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


