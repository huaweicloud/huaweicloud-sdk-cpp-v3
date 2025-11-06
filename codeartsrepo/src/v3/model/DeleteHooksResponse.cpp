

#include "huaweicloud/codeartsrepo/v3/model/DeleteHooksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DeleteHooksResponse::DeleteHooksResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteHooksResponse::~DeleteHooksResponse() = default;

void DeleteHooksResponse::validate()
{
}

web::json::value DeleteHooksResponse::toJson() const
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
bool DeleteHooksResponse::fromJson(const web::json::value& val)
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
            Object refVal;
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


Error DeleteHooksResponse::getError() const
{
    return error_;
}

void DeleteHooksResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteHooksResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteHooksResponse::unseterror()
{
    errorIsSet_ = false;
}

Object DeleteHooksResponse::getResult() const
{
    return result_;
}

void DeleteHooksResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteHooksResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteHooksResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteHooksResponse::getStatus() const
{
    return status_;
}

void DeleteHooksResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteHooksResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteHooksResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


